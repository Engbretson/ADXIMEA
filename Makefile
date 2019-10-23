#Makefile at top of application tree
TOP = .
include $(TOP)/configure/CONFIG
DIRS := $(DIRS) configure
DIRS := $(wildcard *App)
DIRS := $(DIRS) vendor

#XIMEAApp_DEPEND_DIRS += vendor 
#MC023CGApp_DEPEND_DIRS += vendor 
#MQ022HGApp_DEPEND_DIRS += vendor 

ifeq ($(BUILD_IOCS), YES)
DIRS := $(DIRS) $(filter-out $(DIRS), $(wildcard iocs))
iocs_DEPEND_DIRS += vendor 
iocs_DEPEND_DIRS += XIMEAApp 
iocs_DEPEND_DIRS += MC023CGApp 
iocs_DEPEND_DIRS += MQ022HGApp 
endif

include $(TOP)/configure/RULES_TOP

uninstall: uninstall_iocs
uninstall_iocs:
	$(MAKE) -C iocs uninstall
.PHONY: uninstall uninstall_iocs

realuninstall: realuninstall_iocs
realuninstall_iocs:
	$(MAKE) -C iocs realuninstall
.PHONY: realuninstall realuninstall_iocs
