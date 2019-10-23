TOP = ..
include $(TOP)/configure/CONFIG

ifeq (windows-x64-static, $(findstring windows-x64-static, $(T_A)))
LIB_INSTALLS += ../Include/X64/xiapi64.lib
BIN_INSTALLS += ../Include/X64/xiapi64.dll
endif

ifeq (windows-x64, $(findstring windows-x64, $(T_A)))
LIB_INSTALLS += ../Include/X64/xiapi64.lib
BIN_INSTALLS += ../Include/X64/xiapi64.dll
endif

include $(TOP)/configure/RULES

