from pathlib import Path

syms: list[tuple[str, str, int, int]] = []
files: list[tuple[str, str, int, int]] = []

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

START = 0x001000
VRAM = 0x00100000

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

for filepath, section, addr, size in files:
    if size == 0:
        continue

    if section in IGNORE_SECTIONS:
        continue

    start = addr - VRAM + START
    section = SECTION_MAPPER[section]

    # if "(" in filepath:
    #     if ".a(" not in filepath:
    #         print(filepath)

    yaml_name = None
    comment = f""
    if filepath in NOT_FILES:
        comment = f" # {filepath}"
        if section in NOLOAD_SECTIONS:
            yaml_name = f"unk/{addr:08X}"
        else:
            yaml_name = f"unk/{start:06X}"

    else:
        if "crt0.o" in filepath:
            yaml_name = f"crt0/crt0"
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
        print(f"      - {{ type: {section}, vram: 0x{addr:08X}, name: {yaml_name} }}{comment}")
    else:
        print(f"      - [0x{start:06X}, {section}, {yaml_name}]{comment}")

syms.sort(key=lambda x:x[2])

# TODO: check repeated symbol names, addresses and valid names (length and chars)
with Path("config/us_2003_07_10/elf_symbol_addrs.txt").open("w") as f:
    for name, section, addr, size in syms:
        size_str = ""
        if size > 0:
            size_str = f" size:0x{size:X}"

        type_str = ""
        if section == ".text":
            type_str = f" type:func"

        f.write(f"{name} = 0x{addr:08X}; //{size_str}{type_str}\n")
