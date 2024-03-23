#!/usr/bin/env python3

import argparse
from pathlib import Path

def add_custom_arguments(parser: argparse.ArgumentParser):
    version = "us_2003_07_10"

    make_options = Path(".make_options")
    if make_options.exists():
        with make_options.open() as f:
            for line in f:
                if "VERSION" in line and "=" in line:
                    version = line.split("=")[1].strip()

    parser.add_argument("-v", "--version", default=version)

def apply(config: dict, args: argparse.Namespace):
    version = args.version

    config["arch"] = "mipsee"
    config["baseimg"] = f"expected/build/{version}/hit_and_run.{version}.rom"
    config["myimg"]   = f"build/{version}/hit_and_run.{version}.rom"
    config["mapfile"] = f"build/{version}/hit_and_run.{version}.map"
    config["source_directories"] = ["./src", "./include", "./asm", "./lib"]
    config["objdump_flags"] = ["-Mreg-names=n32"]
    # config["objdump_flags"].append("-Mno-aliases")
    config["makeflags"] = ["WERROR=0", f"VERSION={version}", "OBJDUMP_BUILD=0", "PERMUTER=1"]
