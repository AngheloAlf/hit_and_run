#!/usr/bin/env python3

# SPDX-FileCopyrightText: © 2024 AngheloAlf
# SPDX-License-Identifier: MIT

from __future__ import annotations

import argparse
from pathlib import Path

NAMES_PER_ABI: dict[str, dict[int, str]] = {
    "o32": {
        0: "$zero",
        1: "$at",
        2: "$v0",
        3: "$v1",
        4: "$a0",
        5: "$a1",
        6: "$a2",
        7: "$a3",
        8: "$t0",
        9: "$t1",
        10: "$t2",
        11: "$t3",
        12: "$t4",
        13: "$t5",
        14: "$t6",
        15: "$t7",
        16: "$s0",
        17: "$s1",
        18: "$s2",
        19: "$s3",
        20: "$s4",
        21: "$s5",
        22: "$s6",
        23: "$s7",
        24: "$t8",
        25: "$t9",
        26: "$k0",
        27: "$k1",
        28: "$gp",
        29: "$sp",
        30: "$fp",
        31: "$ra",
    },

    "n32": {
        0: "$zero",
        1: "$at",
        2: "$v0",
        3: "$v1",
        4: "$a0",
        5: "$a1",
        6: "$a2",
        7: "$a3",
        8: "$a4",
        9: "$a5",
        10: "$a6",
        11: "$a7",
        12: "$t0",
        13: "$t1",
        14: "$t2",
        15: "$t3",
        16: "$s0",
        17: "$s1",
        18: "$s2",
        19: "$s3",
        20: "$s4",
        21: "$s5",
        22: "$s6",
        23: "$s7",
        24: "$t8",
        25: "$t9",
        26: "$k0",
        27: "$k1",
        28: "$gp",
        29: "$sp",
        30: "$fp",
        31: "$ra",
    },
}

parser = argparse.ArgumentParser(description="Replace numbered regs into named regs")

parser.add_argument("asm_path")
parser.add_argument("--abi", default="o32", choices=["o32", "n32"])

args = parser.parse_args()

asm_path = Path(args.asm_path)
abi = str(args.abi)

reg_names = NAMES_PER_ABI[abi]

with asm_path.open() as f:
    for line in f:
        for i in range(31, 0-1, -1):
            reg_num = f"${i}"
            reg_name = reg_names[i]
            line = line.replace(reg_num, reg_name)

        print(line, end="")
        # print(line)
