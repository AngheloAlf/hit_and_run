VERSION ?= us_2003_07_10


WIBO_DIR     := wibo
WIBO_BIN     := $(WIBO_DIR)/wibo

EEGCC_SN_DIR := eegcc_sn/2.73a
EEGCC_SN_BIN := $(EEGCC_SN_DIR)/bin/ee-gcc295.exe


all: $(WIBO_BIN) $(EEGCC_SN_BIN)

clean:
	$(RM) -rf $(WIBO_DIR) $(EEGCC_SN_DIR)

distclean: clean

.PHONY: all clean distclean

$(WIBO_BIN): | $(WIBO_DIR)
	wget https://github.com/decompals/wibo/releases/latest/download/wibo --directory-prefix=$(WIBO_DIR)
	chmod +x $(WIBO_DIR)/wibo

$(WIBO_DIR):
	mkdir -p $@


$(EEGCC_SN_BIN): | $(EEGCC_SN_DIR)
	wget https://github.com/AngheloAlf/SN-Systems-ProDG_for_PS2_2.0/releases/latest/download/eegcc_sn_v2.73a.tar.gz
	tar xf eegcc_sn_v2.73a.tar.gz -C $(EEGCC_SN_DIR)
	$(RM) eegcc_sn_v2.73a.tar.gz

$(EEGCC_SN_DIR):
	mkdir -p $@
