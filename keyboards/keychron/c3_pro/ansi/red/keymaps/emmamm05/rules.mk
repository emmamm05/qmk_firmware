BOOTMAGIC_ENABLE = yes
TAP_DANCE_ENABLE = yes
COMMAND_ENABLE = yes
CAPS_WORD_ENABLE = yes
KEY_LOCK_ENABLE = yes
CONSOLE_ENABLE = yes
DYNAMIC_MACRO_ENABLE = yes
LEADER_ENABLE = yes
COMBO_ENABLE = yes
REPEAT_KEY_ENABLE = yes
LED_MATRIX_ENABLE = yes
WPM_ENABLE = yes
RAW_ENABLE = yes
KEYBOARD_SHARED_EP = yes
MOUSE_SHARED_EP = yes
MIDI_ENABLE = no
STENO_ENABLE = no
SRC += $(wildcard $(KEYMAP_PATH)/**/*.c)
