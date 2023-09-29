VIA_ENABLE = yes
VIAL_ENABLE = yes

MOUSEKEY_ENABLE = no
EXTRAKEY_ENABLE = yes
COMBO_ENABLE = no
GRAVE_ESC_ENABLE = no
MAGIC_ENABLE = no
OLED_ENABLE = no

COMMAND_ENABLE = no
CONSOLE_ENABLE = no

LTO_ENABLE = yes

RGBLIGHT_ENABLE     = yes
RGB_MATRIX_ENABLE   = no# Can't have RGBLIGHT and RGB_MATRIX at the same time.

CONSOLE_ENABLE = no
LTO_ENABLE = yes

ifndef CONVERT_TO
	# Disable QMK Settings when using a ProMicro to reduce size:
	QMK_SETTINGS = no
else
	# Enable Mouse Keys when when not using a ProMicro as there will be space:
	MOUSEKEY_ENABLE = yes
endif
