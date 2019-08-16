TOP = ..
include $(TOP)/configure/CONFIG

ifeq (windows-x64, $(findstring windows-x64, $(T_A)))
LIB_INSTALLS += ../Include/X64/xiapi64.lib
BIN_INSTALLS += ../Include/X64/xiapi64.dll
endif

# depend on Makefile existing
install: $(SEABREEZELIB)

include $(TOP)/configure/RULES

