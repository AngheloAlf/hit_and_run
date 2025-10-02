#!/usr/bin/env python3

from __future__ import annotations

from pathlib import Path

START = 0x001000
VRAM = 0x00100000

ILLEGAL_FILENAME_CHARS = ["<", ">", ":", '"', "/", "\\", "|", "?", "*"]

NOT_FILES = [
    "COMMON",
    "Collect2",
    "REGINFO",
]

SECTION_MAPPER: dict[str, str] = {
    ".text":    "asm",
    ".vutext":  "vutext",
    ".data":    "data",
    ".vudata":  "vudata",
    ".rodata":  "rodata",

    ".gcc_except_table":  "gcc_except_table",

    ".sbss":    "sbss",
    ".scommon": "scommon",
    ".bss":     "bss",
    ".vubss":   "vubss",
}

NOLOAD_SECTIONS = [
    "sbss",
    "scommon",
    "bss",
    "vubss",
]

IGNORE_SECTIONS = [
    ".reginfo",
    "<default>",
]

SYM_NAMES_COMMENT_OUT = {
    "_stack_size",
    "_codestart",
    "_gp",
    "_stack",
    "_heap_size",
    "_datastart",
    "vu0_ucode",
}

SYM_NAMES_FORCE_DEFINED = {
    "VU_BASE",
    "vu0_SphereVSphere",
    "vu0_begin",
    "_VU_DMA_OFFSET_size",
    "vu0_SphereVAABox",
    "VU_LOAD_CONTEXT",
    "vu0_SphereVTBox",
    "VU_CHECKSKINNING_LOADPRIMGROUP",
    "VU_LOADPRIMGROUP",
    "VU_XGKICK",
    "vu0_sincos",
    "VU_UNLIT_PROGRAM",
    "vu0_unitmatrix",
    "vu0_mulmatrix",
    "vu0_rotateX",
    "vu0_translate",
    "vclUnlit_CodeEnd",
    "vu0_transform",
    "VU_UNLIT_TRI",
    "vu0_quaternionmatrix",
    "vu0_quaternionmultiply",
    "vu0_end",
    "VU_UNLITFOG_TRI",
    "vclLit_CodeStart",
    "VU_LIT_PROGRAM",
    "vclLit_CodeEnd",
    "VU_LIT_TRI",
    "VU_LITFOG_TRI",
    "VU_LITSPEC_TRI",
    "VU_LITSPECFOG_TRI",
    "VU_UNLIT_TRI_MT",
    "VU_REFRACT",
    "VU_TOON",
    "VU_REFLECT",
    "VU_LINE",
    "VU_DONOTHING",
    "VU_SHADOW_VOL",
    "VU_SNOW",
    "VU_SKINBLEND_NT",
    "VU_SKINBLEND1B_NT",
    "VU_SKINBLEND_CT",
    "VU_SKINBLEND1B_CT",
    "VU_END",
}

SYMBOL_ALIGNMENT = {
    "__ti7XMLTree": 0x8,
    "_IO_stdin_buf": 0x8,
}

def emit_yaml_entry(filepath: str, section: str, addr: int, size: int, autogen: bool):
    if size == 0 and not autogen:
        return

    if section in IGNORE_SECTIONS:
        return

    comment_out = ""

    if addr % 4 != 0:
        comment_out = "# "

    start = addr - VRAM + START
    section = SECTION_MAPPER[section]

    yaml_name = None
    comment = ""
    if filepath in NOT_FILES or autogen:
        comment = f" # {filepath}"
        if section in NOLOAD_SECTIONS:
            yaml_name = f"unk/{addr:08X}"
        else:
            yaml_name = f"unk/{start:06X}"

    else:
        if "crt0.o" in filepath:
            yaml_name = "crt0/crt0"
        elif "D:\\usr\\local\\sce\\ee\\" in filepath:
            filepath = filepath.replace("D:\\usr\\local\\sce\\ee\\", "")
            assert ".a" in filepath, filepath

            p, subfile = filepath.split(".o)")[0].split(".a(")
            # print(filepath)
            # yaml_file = Path("sce_libs")
            comment = " # .a"
            if filepath.startswith("lib\\"):
                yaml_name = str(Path("sce_libs") / Path(p.replace("\\", "/")) / subfile)
            elif filepath.startswith("gcc\\ee\\lib\\"):
                yaml_name = str(Path("sce_libs") / "gcc" / "ee" / Path(p.replace("\\", "/")).stem / subfile)
            elif filepath.startswith("gcc\\lib\\gcc-lib\\ee\\2.95.3\\"):
                yaml_name = str(Path("sce_libs") / "gcc_lib" / "ee" / Path(p.replace("\\", "/")).stem / subfile)
                comment += " # 2.95.3"
            else:
                assert False, filepath

        elif "D:\\nightlybuilds\\newbuild\\libs\\" in filepath:
            filepath = filepath.replace("D:\\nightlybuilds\\newbuild\\libs\\", "")
            assert "lib\\" in filepath, filepath
            assert ".a" in filepath, filepath
            filepath = filepath.replace("lib\\", "")
            filepath = filepath.replace("build\\", "")
            p, subfile = filepath.split(".o)")[0].split(".a(")
            comment = " # .a"
            # print(p, subfile)

            yaml_name = str("libs" / Path(p.replace("\\", "/")) / subfile)
        elif "D:\\nightlybuilds\\newbuild\\build\\ps2\\Release\\" in filepath:
            # print(filepath[len("D:\\nightlybuilds\\newbuild\\build\\ps2\\Release\\"):])
            yaml_name = str(Path("code") / Path(filepath.replace("\\", "/")).stem)
        else:
            assert False, filepath
        # print(filepath, section, addr, size)

    assert yaml_name is not None, filepath
    assert "\\" not in yaml_name, yaml_name

    if section in NOLOAD_SECTIONS:
        print(f"      {comment_out}- {{ type: {section}, vram: 0x{addr:08X}, name: {yaml_name} }}{comment}")
    else:
        print(f"      {comment_out}- [0x{start:06X}, {section}, {yaml_name}]{comment}")


syms: list[tuple[str, str, int, int]] = []
files: list[tuple[str, str, int, int]] = []

with Path("disk/us_2003_07_10/SRR2.MAP").open() as f:
    i = 0
    last_section = ""
    for i, line in enumerate(f):
        if i < 2:
            continue

        addr, size, align, thingy = line.split()
        addr = int(addr, 16)
        size = int(size, 16)

        if "                         " in line:
            syms.append((thingy, last_section, addr, size))
        elif "                 " in line:
            files.append((thingy, last_section, addr, size))
        elif "         " in line:
            last_section = thingy

for i, (filepath, section, addr, size) in enumerate(files):
    emit_yaml_entry(filepath, section, addr, size, False)

syms.sort(key=lambda x:x[2])

known_sym_names: set[str] = set()
known_sym_addrs: set[int] = set()

duped_sym_names: set[str] = set()
duped_sym_addrs: set[int] = set()

for name, section, addr, size in syms:
    if name in known_sym_names:
        duped_sym_names.add(name)
    if addr in known_sym_addrs:
        duped_sym_addrs.add(addr)

    if name not in SYM_NAMES_COMMENT_OUT:
        known_sym_names.add(name)
        known_sym_addrs.add(addr)

# print()
# for duped_addr in duped_sym_addrs:
#     for name, section, addr, size in syms:
#         if addr == duped_addr:
#             print(name, section, f"{addr:08X}", size)
# print()
# for duped_name in duped_sym_names:
#     for name, section, addr, size in syms:
#         if name == duped_name:
#             print(name, section, addr, size)

# TODO: check valid names (length and chars)
with Path("config/us_2003_07_10/elf_symbol_addrs.txt").open("w") as f:
    for name, section, addr, size in syms:
        comment_out = ""
        if name in SYM_NAMES_COMMENT_OUT or addr in duped_sym_addrs:
            comment_out = "// "

        size_str = ""
        if size > 0:
            size_str = f" size:0x{size:X}"

        type_str = ""
        prefix = "D_"
        if section == ".text":
            type_str = " type:func"
            prefix = "func_"

        align_str = ""
        alignment = SYMBOL_ALIGNMENT.get(name)
        if alignment is not None:
            align_str = f" align:0x{alignment:X}"

        filename_str = ""
        if len(name) > 253 or any(c in ILLEGAL_FILENAME_CHARS for c in name):
            filename_str = f" filename:{prefix}{addr:08X}"

        defined = ""
        if name in SYM_NAMES_FORCE_DEFINED:
            defined = " defined:True"

        visibility = ""
        if name in duped_sym_names:
            visibility = " visibility:local"

        f.write(f"{comment_out}{name} = 0x{addr:08X}; //{size_str}{type_str}{align_str}{filename_str}{defined}{visibility}\n")
