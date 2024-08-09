#!/usr/bin/env python3

# SPDX-FileCopyrightText: © 2024 AngheloAlf
# SPDX-License-Identifier: MIT

from __future__ import annotations

from splat.segtypes.common.sbss import CommonSegSbss

class PS2SegScommon(CommonSegSbss):
    def get_section_flags(self):
        return "w"

    def get_linker_section(self) -> str:
        return ".scommon"
