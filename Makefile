default: test
.PHONY: default

include $(PUREC_DIR)/mk/target.mk

main: .spago

main_CFLAGS = -g
main_LD_FLAGS =

$(eval $(call purs_mk_target,main,Test.Main,src))

check: main