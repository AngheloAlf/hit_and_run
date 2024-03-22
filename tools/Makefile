VERSION ?= us_2003_07_10


WIBO_DIR    := wibo
WIBO_BIN    := $(WIBO_DIR)/wibo

all: $(WIBO_BIN)

clean:
	$(RM) -rf $(WIBO_DIR)

distclean: clean

.PHONY: all clean distclean

$(WIBO_BIN): | $(WIBO_DIR)
	wget https://github.com/decompals/wibo/releases/latest/download/wibo --directory-prefix=$(WIBO_DIR)
	chmod +x $(WIBO_DIR)/wibo

$(WIBO_DIR):
	mkdir -p $@
