
VERSION ?= us_2003_07_10

BASEROM              := disk/$(VERSION)/SLUS_206.24
TARGET               := hit_and_run




PYTHON          ?= python3
SPLAT           ?= $(PYTHON) -m splat split

SPLAT_YAML      ?= config/$(VERSION)/$(TARGET).$(VERSION).yaml

SPLAT_FLAGS     ?=
# ifneq ($(FULL_DISASM),0)
#     SPLAT_FLAGS       += --disassemble-all
# endif

extract:
	$(RM) -r asm/$(VERSION) bin/$(VERSION) $(LD_SCRIPT) $(LD_SCRIPT:.ld=.d)
	$(SPLAT) $(SPLAT_YAML) $(SPLAT_FLAGS)
