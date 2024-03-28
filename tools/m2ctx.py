#!/usr/bin/env python3

import argparse
import os
from pathlib import Path
import sys
import subprocess
import tempfile

script_dir = Path(os.path.dirname(os.path.realpath(__file__)))
root_dir = Path(os.path.abspath(os.path.join(script_dir, "..")))
src_dir = root_dir / "src"

# Project-specific
CPP_FLAGS = [
    "-Iinclude",
    "-ffreestanding",
    "-DM2CTX",

    "-m32",
    "-D_LANGUAGE_C",
    "-D__SIZE_TYPE__=unsigned",
    "-D__PTRDIFF_TYPE__=int",
    # TODO: flags per C or C++
    "-std=gnu++98",
]

MACROS_TO_REMOVE = [
    "__cplusplus",
    "__GNUG__",
]

def import_c_file(in_file: Path) -> str:
    in_file = in_file.absolute().relative_to(root_dir)

    cpp_command = ["gcc", "-E", "-P", "-dD", *CPP_FLAGS, in_file]

    with tempfile.NamedTemporaryFile(suffix=".c") as tmp:
        stock_macros = subprocess.check_output(["gcc", "-E", "-P", "-dM", tmp.name], cwd=root_dir, encoding="utf-8")

    try:
        out_text = subprocess.check_output(cpp_command, cwd=root_dir, encoding="utf-8")
    except subprocess.CalledProcessError:
        print(
            "Failed to preprocess input file, when running command:\n"
            + " ".join(cpp_command),
            file=sys.stderr,
            )
        sys.exit(1)

    if not out_text:
        print("Output is empty - aborting")
        sys.exit(1)

    defines = {}
    source_lines = []
    for line in out_text.splitlines(keepends=True):
        if line.startswith("#define"):
            sym = line.split()[1].split("(")[0]
            if sym not in MACROS_TO_REMOVE:
                defines[sym] = line
        elif line.startswith("#undef"):
            sym = line.split()[1]
            if sym in defines:
                del defines[sym]
        else:
            source_lines.append(line)

    for line in stock_macros.strip().splitlines():
        sym = line.split()[1].split("(")[0]
        if sym in defines:
            del defines[sym]

    return "".join(defines.values()) + "".join(source_lines)

def main():
    parser = argparse.ArgumentParser(
        description="""Create a context file which can be used for m2c / decomp.me"""
    )
    parser.add_argument(
        "in_file",
        help="""File from which to create context""",
    )
    args = parser.parse_args()

    in_file = Path(args.in_file)
    output = import_c_file(in_file)

    ctx_suffixes = {
        ".c": ".c",
        ".h": ".c",
        ".cpp": ".cpp",
        ".hpp": ".cpp",
    }
    suffix = ctx_suffixes.get(in_file.suffix, ".c")
    ctx_path = root_dir / f"ctx{suffix}"

    print(f"Writing {ctx_path}")
    with ctx_path.open("w", encoding="UTF-8") as f:
        f.write(output)


if __name__ == "__main__":
    main()
