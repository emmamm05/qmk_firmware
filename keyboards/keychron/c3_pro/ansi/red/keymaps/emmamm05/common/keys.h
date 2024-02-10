#pragma once

#include QMK_KEYBOARD_H

#define DF_BASE DF(LY_BASE)
#define DF_GAME DF(LY_GAME)

#define OS_LCMD OSM(MOD_LGUI)
#define OS_LCTL OSM(MOD_LCTL)
#define OS_LOPT OSM(MOD_LALT)
#define OS_LSFT OSM(MOD_LSFT)

#define OS_RCMD OSM(MOD_RGUI)
#define OS_RCTL OSM(MOD_RCTL)
#define OS_ROPT OSM(MOD_RALT)
#define OS_RSFT OSM(MOD_RSFT)

#define OS_MEH  OSM(MOD_MEH)
#define OS_HYP  OSM(MOD_HYPR)

#define MOD_CAPS MT(MOD_LCTL, KC_ESC)
