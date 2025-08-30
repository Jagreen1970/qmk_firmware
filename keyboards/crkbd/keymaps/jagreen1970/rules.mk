# MCU name
MCU = RP2040
BOOTLOADER = atmel-dfu
CONVERT_TO = helios
RGBLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = yes
MOUSEKEY_ENABLE = no
COMBO_ENABLE = yes

# Build Options
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no        # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = yes          # Enable N-Key Rollover
BACKLIGHT_ENABLE = no      # Enable keyboard backlight functionality
AUDIO_ENABLE = no          # Audio output
SPLIT_KEYBOARD = yes       # Split common
LTO_ENABLE = yes

# Features
TAP_DANCE_ENABLE = no
CAPS_WORD_ENABLE = yes      # Enable caps word
LEADER_ENABLE = yes         # Enable leader key
DYNAMIC_MACRO_ENABLE = yes  # Enable dynamic macros
KEY_OVERRIDE_ENABLE = no
