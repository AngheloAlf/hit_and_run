VERSION ?= us_2003_07_10


WIBO_DIR     := wibo
WIBO_BIN     := $(WIBO_DIR)/wibo

EEGCC_SN_DIR := eegcc_sn/2.95.3_sn_v1.14
EEGCC_SN_BIN := $(EEGCC_SN_DIR)/ee/gcc/bin/ee-gcc2953.exe


all: $(WIBO_BIN) $(EEGCC_SN_BIN)

clean:
	$(RM) -rf $(WIBO_DIR) $(EEGCC_SN_DIR)

distclean: clean

.PHONY: all clean distclean

$(WIBO_BIN): | $(WIBO_DIR)
	wget https://github.com/decompals/wibo/releases/download/1.0.0-alpha.4/wibo --directory-prefix=$(WIBO_DIR)
	wget https://github.com/decompals/wibo/releases/download/1.0.0-alpha.4/wibo_debug --directory-prefix=$(WIBO_DIR)
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
