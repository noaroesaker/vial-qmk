OLED_ENABLE = yes
LOCAL_GLCDFONT = no         # use each keymaps "helixfont.h" insted of "common/glcdfont.c"
LED_BACK_ENABLE = no
LED_UNDERGLOW_ENABLE = no
LED_ANIMATIONS = no
IOS_DEVICE_ENABLE = no      # connect to IOS device (iPad,iPhone)

VIA_ENABLE = yes
VIAL_ENABLE = yes
MOUSEKEY_ENABLE = no
EXTRAKEY_ENABLE = no

OLED_SELECT = core
SPLIT_KEYBOARD = yes

COMBO_ENABLE = no
GRAVE_ESC_ENABLE = no
MAGIC_ENABLE = no

COMMAND_ENABLE = no
CONSOLE_ENABLE = no

LTO_ENABLE = yes

# If OLED_ENABLE is 'yes'
#   If OLED_SELECT is 'core', use QMK standard oled_dirver.c.
#   If OLED_SELECT is other than 'core', use helix/local_drivers/ssd1306.c.

ifeq ($(strip $(OLED_ENABLE)), yes)
    SRC += oled_display.c
endif

#VIA_ENABLE = yes
#BOOTMAGIC_ENABLE = lite
