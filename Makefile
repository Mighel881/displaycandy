export TARGET = iphone:9.3

CFLAGS = -fobjc-arc

INSTALL_TARGET_PROCESSES = SpringBoard

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = DisplayCandy
DisplayCandy_FILES = $(wildcard *.xm) $(wildcard *.x) $(wildcard *.m)
DisplayCandy_FRAMEWORKS = UIKit QuartzCore CoreGraphics
DisplayCandy_PRIVATE_FRAMEWORKS = GraphicsServices

SUBPROJECTS = displaycandysettings

include $(THEOS_MAKE_PATH)/aggregate.mk
include $(THEOS_MAKE_PATH)/tweak.mk
