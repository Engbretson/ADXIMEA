TOP=../
include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================
INC += jpeg.h
INC += m3ErrorCodes.h
INC += m3Identify.h
INC += sensorsIdentify.h
INC += versions.h
INC += xiApi.h


# Note, the following files were manually copied from the Spinnaker distribution lib directories on Windows
# and from /usr/lib on Linux.
ifeq (windows-x64, $(findstring windows-x64, $(T_A)))
BIN_INSTALLS    += ../os/windows-x64/xiapi64.dll
LIB_INSTALLS    += ../os/windows-x64/xiapi64.lib

else ifeq (win32-x86, $(findstring win32-x86, $(T_A)))
BIN_INSTALLS    += ../os/win32-x86/xiapi32.dll
LIB_INSTALLS    += ../os/win32-x86/xiapi32.lib

else ifeq (linux-x86_64, $(findstring linux-x86_64, $(T_A)))

else ifeq (linux-x86, $(findstring linux-x86, $(T_A)))

endif

#=============================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE

