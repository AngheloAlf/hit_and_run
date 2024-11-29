VERSION ?= us_2003_07_10


UNAME_S := $(shell uname -s)
ifeq ($(OS),Windows_NT)
	DETECTED_OS := windows
	HOST_TRIPLE := x86_64-pc-windows-msvc
else ifeq ($(UNAME_S),Linux)
	DETECTED_OS := linux
	HOST_TRIPLE := x86_64-unknown-linux-musl
else ifeq ($(UNAME_S),Darwin)
	DETECTED_OS := mac
	MAKE := gmake
	CPPFLAGS += -xc++
	HOST_TRIPLE := x86_64-apple-darwin
endif


WIBO_DIR     := wibo
WIBO_BIN     := $(WIBO_DIR)/wibo

EEGCC_SN_DIR := eegcc_sn/2.95.3_sn_v1.14
EEGCC_SN_BIN := $(EEGCC_SN_DIR)/ee/gcc/bin/ee-gcc2953.exe

SLINKY_DIR      := slinky
SLINKY          := $(SLINKY_DIR)/slinky-cli


all: $(WIBO_BIN) $(EEGCC_SN_BIN) $(SLINKY)

clean:
	$(RM) -rf $(WIBO_DIR) $(EEGCC_SN_DIR) $(SLINKY_DIR)

distclean: clean

.PHONY: all clean distclean

$(WIBO_BIN): | $(WIBO_DIR)
	wget https://github.com/decompals/wibo/releases/latest/download/wibo --directory-prefix=$(WIBO_DIR)
	wget https://github.com/decompals/wibo/releases/latest/download/wibo_debug --directory-prefix=$(WIBO_DIR)
	chmod +x $(WIBO_DIR)/wibo $(WIBO_DIR)/wibo_debug

$(WIBO_DIR):
	mkdir -p $@


$(EEGCC_SN_BIN): | $(EEGCC_SN_DIR)
	$(RM) sce_ps2_sdk_24.tar.gz
	wget https://github.com/AngheloAlf/sce_ps2_sdk_24/releases/latest/download/sce_ps2_sdk_24.tar.gz
	tar xf sce_ps2_sdk_24.tar.gz -C $(EEGCC_SN_DIR)
	$(RM) sce_ps2_sdk_24.tar.gz

$(EEGCC_SN_DIR):
	mkdir -p $@


$(SLINKY): | $(SLINKY_DIR)
	wget https://github.com/decompals/slinky/releases/download/0.2.4/slinky-cli-$(HOST_TRIPLE).tar.gz
	tar xf slinky-cli-$(HOST_TRIPLE).tar.gz -C $(SLINKY_DIR)
	$(RM) slinky-cli-$(HOST_TRIPLE).tar.gz

$(SLINKY_DIR):
	mkdir -p $@
