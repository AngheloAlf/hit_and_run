# Build options can be changed by modifying the makefile or by building with 'make SETTING=value'.
# It is also possible to override the settings in Defaults in a file called .make_options as 'SETTING=value'.

-include .make_options

MAKEFLAGS += --no-builtin-rules

SHELL = /bin/bash
.SHELLFLAGS = -o pipefail -c

#### Defaults ####

# If COMPARE is 1, check the output md5sum after building
COMPARE ?= 1
# Disassembles all asm from the ROM instead of skipping files which are entirely in C
FULL_DISASM ?= 0
# Check code syntax with host compiler
RUN_CC_CHECK ?= 1
CC_CHECK_COMP ?= clang
# Dump build object files
OBJDUMP_BUILD ?= 1
# Invoke compiler in multiple steps, producing `.ii` and `.s` files.
MULTISTEP_BUILD ?= 0
# If non-zero, passes -v to compiler
COMPILER_VERBOSE ?= 0

# Set prefix to mips binutils binaries (mips-linux-gnu-ld => 'mips-linux-gnu-') - Change at your own risk!
# In nearly all cases, not having 'mips-linux-gnu-*' binaries on the PATH is indicative of missing dependencies
CROSS ?= mips-linux-gnu-


VERSION ?= us_2003_07_10

BASEELF              := disk/$(VERSION)/SLUS_206.24
BASEROM              := $(BASEELF).rom
TARGET               := hit_and_run


ifeq ("$(wildcard $(BASEELF))","")
$(error '$(BASEELF)' file is missing. Follow the README preparation instructions to fix this error.)
endif


### Output ###

BUILD_DIR := build/$(VERSION)
ROM       := $(BUILD_DIR)/$(TARGET).$(VERSION).rom
ELF       := $(BUILD_DIR)/$(TARGET).$(VERSION).elf
LD_MAP    := $(BUILD_DIR)/$(TARGET).$(VERSION).map
LD_SCRIPT := linker_scripts/$(VERSION)/$(TARGET).$(VERSION).ld


#### Setup ####

BUILD_DEFINES ?=

ifeq ($(VERSION),us_2003_07_10)
    BUILD_DEFINES   += -DVERSION_US_2003_07_10=1
else
$(error Invalid VERSION variable detected. Please use 'us_2003_07_10')
endif

MAKE = make
CPPFLAGS += -fno-dollars-in-identifiers -P
LDFLAGS  := --emit-relocs

UNAME_S := $(shell uname -s)
ifeq ($(OS),Windows_NT)
    DETECTED_OS := windows
else ifeq ($(UNAME_S),Linux)
    DETECTED_OS := linux
else ifeq ($(UNAME_S),Darwin)
    DETECTED_OS := mac
    MAKE := gmake
    CPPFLAGS += -xc++
endif


#### Tools ####
ifneq ($(shell type $(CROSS)ld >/dev/null 2>/dev/null; echo $$?), 0)
$(error Please install or build $(CROSS))
endif

## General tools

WIBO            ?= tools/wibo/wibo
PYTHON          ?= python3
SPLAT           ?= $(PYTHON) -m splat split
ELF_PATCHER     ?= $(PYTHON) tools/buildtools/elf_patcher.py

## GNU tools

GNUAS           := $(CROSS)as
GNULD           := $(CROSS)ld
OBJCOPY         := $(CROSS)objcopy
OBJDUMP         := $(CROSS)objdump
GCC             := $(CROSS)gcc
CPP             := $(CROSS)cpp
STRIP           := $(CROSS)strip

## SN tools

SNDIR           := tools/eegcc_sn/2.95.3_sn_v1.14
SNCC            := $(WIBO) $(SNDIR)/ee/gcc/bin/ee-gcc2953.exe

## Tools

AS              := $(GNUAS)
CC              := $(SNCC)
LD              := $(GNULD)

## General tool flags

SPLAT_YAML      ?= config/$(VERSION)/$(TARGET).$(VERSION).yaml

SPLAT_FLAGS     ?=
ifneq ($(FULL_DISASM),0)
    SPLAT_FLAGS       += --disassemble-all
endif

ELF_PATCHER_FLAGS ?=

export SPIMDISASM_PANIC_RANGE_CHECK="True"


IINC       := -I include


## CC CHECK ##

# Check code syntax with host compiler
CHECK_WARNINGS := -Wall -Wextra -Wimplicit-fallthrough -Wno-unknown-pragmas -Wno-missing-braces -Wno-sign-compare -Wno-uninitialized -Wno-char-subscripts -Wno-pointer-sign
CHECK_WARNINGS += -Wno-invalid-source-encoding
CHECK_WARNINGS += -Wno-unused-private-field

ifneq ($(WERROR), 0)
    CHECK_WARNINGS += -Werror
endif

# Have CC_CHECK pretend to be a MIPS compiler
MIPS_BUILTIN_DEFS := 
ifneq ($(RUN_CC_CHECK),0)
#   The -MMD flags additionaly creates a .d file with the same name as the .o file.
    CC_CHECK          := $(CC_CHECK_COMP)
    CC_CHECK_FLAGS    := -MMD -MP -std=c++98 -fno-builtin -fsyntax-only -fdiagnostics-color -DNON_MATCHING -DNON_EQUIVALENT -DPRESERVE_UB -DCC_CHECK=1
else
    CC_CHECK          := @:
endif


## Compiler options ##

CFLAGS          += -G0 -fbyte-bool
CXXFLAGS        += -G0 -fbyte-bool -fno-exceptions

WARNINGS        := 
ASFLAGS         := -march=r5900 -mabi=eabi -G8 -no-pad-sections
COMMON_DEFINES  := 
AS_DEFINES      := 
C_DEFINES       := 
CXX_DEFINES     := 
ENDIAN          := -EL

OPTFLAGS        := -Os
DBGFLAGS        := -g3
# MIPS_VERSION    := -mips3
# OUT_ENCODING    := Shift-JIS
# CHAR_SIGN       := -funsigned-char

# Variable to simplify C compiler invocation
# C_COMPILER_FLAGS = $(ABIFLAG) $(CFLAGS) $(CHAR_SIGN) $(BUILD_DEFINES) $(IINC) $(WARNINGS) $(MIPS_VERSION) $(ENDIAN) $(COMMON_DEFINES) $(C_DEFINES) $(OPTFLAGS) $(DBGFLAGS)
C_COMPILER_FLAGS   = $(CFLAGS)   $(BUILD_DEFINES) $(WARNINGS) $(COMMON_DEFINES) $(C_DEFINES)   $(OPTFLAGS) $(DBGFLAGS) $(IINC)
CXX_COMPILER_FLAGS = $(CXXFLAGS) $(BUILD_DEFINES) $(WARNINGS) $(COMMON_DEFINES) $(CXX_DEFINES) $(OPTFLAGS) $(DBGFLAGS) $(IINC)

ifneq ($(COMPILER_VERBOSE),0)
    COMP_VERBOSE_FLAG := -v
else
    COMP_VERBOSE_FLAG :=
endif


### OBJDUMP ###

# Use relocations and abi fpr names in the dump
OBJDUMP_FLAGS := --disassemble --reloc --disassemble-zeroes -Mreg-names=n32

ifneq ($(OBJDUMP_BUILD), 0)
    OBJDUMP_CMD = @$(OBJDUMP) $(OBJDUMP_FLAGS) $@ > $(@:.o=.dump.s)
else
    OBJDUMP_CMD = @:
endif


#### Files ####

# $(shell mkdir -p asm bin linker_scripts/$(VERSION)/auto)

SRC_DIRS      := $(shell find src -type d)
ASM_DIRS      := $(shell find asm/$(VERSION) -type d -not -path "asm/$(VERSION)/nonmatchings/*")

C_FILES       := $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.c))
CPP_FILES     := $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.cpp))
S_FILES       := $(foreach dir,$(ASM_DIRS) $(SRC_DIRS),$(wildcard $(dir)/*.s))

O_FILES       := $(foreach f,$(C_FILES:.c=.o),$(BUILD_DIR)/$f) \
                 $(foreach f,$(CPP_FILES:.cpp=.o),$(BUILD_DIR)/$f) \
                 $(foreach f,$(S_FILES:.s=.o),$(BUILD_DIR)/$f)

# LINKER_SCRIPTS   := $(LD_SCRIPT) $(BUILD_DIR)/linker_scripts/$(VERSION)/hardware_regs.ld $(BUILD_DIR)/linker_scripts/$(VERSION)/undefined_syms.ld $(BUILD_DIR)/linker_scripts/common_undef_syms.ld
# LINKER_SCRIPTS   := $(LD_SCRIPT) $(BUILD_DIR)/linker_scripts/$(VERSION)/linker_script_extra.$(VERSION).ld linker_scripts/$(VERSION)/auto/undefined_funcs_auto.ld linker_scripts/$(VERSION)/auto/undefined_syms_auto.ld
LINKER_SCRIPTS   := $(LD_SCRIPT) $(BUILD_DIR)/linker_scripts/$(VERSION)/linker_script_extra.$(VERSION).ld

### Automatic dependency files ###
DEP_FILES := $(LD_SCRIPT:.ld=.d)

ifneq ($(DEP_ASM), 0)
    DEP_FILES += $(O_FILES:.o=.asmproc.d)
endif

ifneq ($(DEP_INCLUDE), 0)
    DEP_FILES += $(O_FILES:.o=.d)
endif


##### Directory flags #####

$(BUILD_DIR)/asm/$(VERSION)/sce_libs/gcc/ee/%.o:                ELF_PATCHER_FLAGS += --section-align .text:0x4
$(BUILD_DIR)/asm/$(VERSION)/sce_libs/gcc_lib/ee/%.o:            ELF_PATCHER_FLAGS += --section-align .text:0x4
$(BUILD_DIR)/asm/$(VERSION)/data/sce_libs/gcc/ee/%.rodata.o:    ELF_PATCHER_FLAGS += --section-align .rodata:0x4

##### Per-file flags #####

$(BUILD_DIR)/asm/$(VERSION)/data/code/allps2main.data.o:                        ELF_PATCHER_FLAGS += --section-align .text:0x10
$(BUILD_DIR)/asm/$(VERSION)/unk/321994.o:                                       ELF_PATCHER_FLAGS += --section-align .text:0x4
$(BUILD_DIR)/asm/$(VERSION)/data/sce_libs/gcc/ee/libstdc++/stdstrbufs.data.o:   ELF_PATCHER_FLAGS += --section-align .data:0x8
$(BUILD_DIR)/asm/$(VERSION)/data/sce_libs/gcc/ee/libg/mallocr.data.o:           ELF_PATCHER_FLAGS += --section-align .data:0x8
$(BUILD_DIR)/asm/$(VERSION)/data/sce_libs/gcc_lib/ee/libgcc/tinfo2.data.o:      ELF_PATCHER_FLAGS += --section-align .text:0x4
$(BUILD_DIR)/asm/$(VERSION)/data/sce_libs/gcc_lib/ee/libgcc/tinfo2.rodata.o:    ELF_PATCHER_FLAGS += --section-align .text:0x4

## Create build directories

$(shell mkdir -p $(BUILD_DIR)/linker_scripts/$(VERSION))
$(shell mkdir -p $(foreach dir,$(SRC_DIRS) $(ASM_DIRS),$(BUILD_DIR)/$(dir)))


#### Main Targets ###

all: rom

rom: $(ROM)
ifneq ($(COMPARE),0)
	@md5sum $(ROM)
	@md5sum -c config/$(VERSION)/$(TARGET).$(VERSION).md5
endif

clean:
	$(RM) -r $(BUILD_DIR)/asm $(BUILD_DIR)/src $(ROM) $(ROMC) $(ELF)

libclean:
	$(RM) -r $(BUILD_DIR)/lib

distclean: clean
	$(RM) -r $(BUILD_DIR) asm/ .splat/
#	$(RM) -r linker_scripts/$(VERSION)/auto $(LD_SCRIPT)
	$(MAKE) -C tools distclean

setup:
	$(MAKE) -C tools
	$(OBJCOPY) -O binary --pad-to=0x3B0880 --gap-fill=0x00 $(BASEELF) $(BASEROM)
	$(OBJCOPY) -I binary -O binary --pad-to=0x3B0880 --gap-fill=0x00 $(BASEROM)

extract:
	$(RM) -r asm/$(VERSION) $(LD_SCRIPT) $(LD_SCRIPT:.ld=.d)
	$(SPLAT) $(SPLAT_YAML) $(SPLAT_FLAGS)

diff-init: all
	$(RM) -rf expected/$(BUILD_DIR)
	mkdir -p expected/$(BUILD_DIR)
	cp -r $(BUILD_DIR)/* expected/$(BUILD_DIR)

init:
	$(MAKE) distclean
	$(MAKE) setup
	$(MAKE) extract
	$(MAKE) all
	$(MAKE) diff-init

format:
	clang-format-11 -i -style=file $(C_FILES) $(CPP_FILES)

tidy:
	clang-tidy-11 -p . --fix --fix-errors $(C_FILES) $(CPP_FILES) -- $(CC_CHECK_FLAGS) $(IINC) -I build/$(VERSION)/src/main_segment $(CHECK_WARNINGS) $(BUILD_DEFINES) $(COMMON_DEFINES) $(C_DEFINES)


.PHONY: all rom clean distclean setup extract diff-init init format tidy
.DEFAULT_GOAL := all
# Prevent removing intermediate files
.SECONDARY:


#### Various Recipes ####

$(ROM): $(ELF)
	$(OBJCOPY) -O binary $< $@

$(ELF): $(LINKER_SCRIPTS)
	$(file >build/$(VERSION)/o_files, $(filter %.o, $^))
	$(LD) $(ENDIAN) $(LDFLAGS) -G8 -Map $(LD_MAP) $(foreach ld, $(LINKER_SCRIPTS), -T $(ld)) -o $@ @build/$(VERSION)/o_files

## Order-only prerequisites
# These ensure e.g. the PNG_INC_FILES are built before the O_FILES.
# The intermediate phony targets avoid quadratically-many dependencies between the targets and prerequisites.

o_files: $(O_FILES)

.PHONY: o_files


$(BUILD_DIR)/%.ld: %.ld
	$(CPP) $(CPPFLAGS) $(BUILD_DEFINES) $(IINC) $(COMP_VERBOSE_FLAG) $< > $@

$(BUILD_DIR)/%.o: %.s
	$(CPP) $(CPPFLAGS) $(BUILD_DEFINES) $(IINC) -I $(dir $*) -I $(BUILD_DIR)/$(dir $*) $(COMMON_DEFINES) $(AS_DEFINES) $(COMP_VERBOSE_FLAG) $< | $(AS) $(ASFLAGS) $(ENDIAN) $(IINC) -I $(dir $*) -I $(BUILD_DIR)/$(dir $*) $(COMP_VERBOSE_FLAG) -o $@
	$(ELF_PATCHER) $@ gas $(ELF_PATCHER_FLAGS)
	$(OBJDUMP_CMD)

$(BUILD_DIR)/%.o: %.c
	$(CC_CHECK) $(CC_CHECK_FLAGS) $(IINC) $(CHECK_WARNINGS) -std=gnu99 -o $@ $<
ifeq ($(MULTISTEP_BUILD), 0)
	$(CC) $(C_COMPILER_FLAGS) $(COMP_VERBOSE_FLAG) -c -o $@ $<
else
	$(CC) $(C_COMPILER_FLAGS) $(COMP_VERBOSE_FLAG) -E -o $(@:.o=.i) $<
	$(CC) $(C_COMPILER_FLAGS) $(COMP_VERBOSE_FLAG) -S -o $(@:.o=.s) $(@:.o=.i)
	$(CC) $(C_COMPILER_FLAGS) $(COMP_VERBOSE_FLAG) -c -o $@ $(@:.o=.s)
endif
	$(STRIP) $@ -N dummy-symbol-name
#	$(ELF_PATCHER) $@ mwcc $(ELF_PATCHER_FLAGS)
	$(OBJDUMP_CMD)

$(BUILD_DIR)/%.o: %.cpp
	$(CC_CHECK) $(CC_CHECK_FLAGS) $(IINC) $(CHECK_WARNINGS) -std=gnu++98 -o $@ $<
ifeq ($(MULTISTEP_BUILD), 0)
	$(CC) $(CXX_COMPILER_FLAGS) $(COMP_VERBOSE_FLAG) -c -o $@ $<
else
	$(CC) $(CXX_COMPILER_FLAGS) $(COMP_VERBOSE_FLAG) -E -o $(@:.o=.ii) $<
	$(CC) $(CXX_COMPILER_FLAGS) $(COMP_VERBOSE_FLAG) -S -o $(@:.o=.s) $(@:.o=.ii)
	$(CC) $(CXX_COMPILER_FLAGS) $(COMP_VERBOSE_FLAG) -c -o $@ $(@:.o=.s)
endif
	$(STRIP) $@ -N dummy-symbol-name
#	$(ELF_PATCHER) $@ mwcc $(ELF_PATCHER_FLAGS)
	$(OBJDUMP_CMD)



-include $(DEP_FILES)

# Print target for debugging
print-% : ; $(info $* is a $(flavor $*) variable set to [$($*)]) @true
