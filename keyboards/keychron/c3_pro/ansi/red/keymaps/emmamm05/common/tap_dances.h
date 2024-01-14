#pragma once

#include QMK_KEYBOARD_H
#include "keys.h"
#include "layers.h"

// Define a type for as many tap dance states as you need
typedef enum {
    TD_NONE,
    TD_UNKNOWN,

    TD_SINGLE_TAP,
    TD_SINGLE_HOLD,

    TD_DOUBLE_TAP,
    TD_DOUBLE_SINGLE_TAP,

    TD_TRIPLE_TAP,
    TD_TRIPLE_SINGLE_TAP,
} td_state_t;

// tap dance keys
enum {
    TAB_NAV,
    CAPS_MOD,
    ENT_MOD,
};

// SHIFT TAP DANCE

typedef struct {
    uint16_t tap_key; // either KC_LSFT or KC_RSFT
    uint16_t mod_key; // either MOD_LSFT or MOD_RSFT
    td_state_t state;
} td_kc_sft_opts_t;

void td_kc_sft_finished(tap_dance_state_t *state, void *user_data);
void td_kc_sft_reset(tap_dance_state_t *state, void *user_data);
void td_kc_sft_read_key_state(tap_dance_state_t *state, void *user_data);

#define ACTION_TAP_DANCE_KC_SFT(tap_key, mod_key) \
    { .fn = { NULL, td_kc_sft_finished, td_kc_sft_reset}, \
      .user_data = (void *)&((td_kc_sft_opts){tap_key, mod_key})}

// HOLD LAYER TAP DANCE

typedef struct {
    uint16_t tap_key;
    uint16_t double_tap_key;
    uint16_t triple_tap_key;
    uint16_t hold_layer;
    td_state_t state;
} td_tap_hold_layer_opts_t;

void td_tap_hold_layer_finished(tap_dance_state_t *state, void *user_data);
void td_tap_hold_layer_reset(tap_dance_state_t *state, void *user_data);
td_state_t td_tap_hold_layer_read_key_state(tap_dance_state_t *state, void *user_data);

#define ACTION_TAP_DANCE_TAP_HOLD_LAYER(tap_key, hold_layer) \
    { .fn = {NULL, td_tap_hold_layer_finished, td_tap_hold_layer_reset}, \
        .user_data = (void *)&((td_tap_hold_layer_opts_t){tap_key, KC_NO, KC_NO, hold_layer}), }

#define ACTION_TAP_DANCE_DOUBLE_TAP_HOLD_LAYER(tap_key, double_tap_key, hold_layer) \
    { .fn = {NULL, td_tap_hold_layer_finished, td_tap_hold_layer_reset}, \
        .user_data = (void *)&((td_tap_hold_layer_opts_t){tap_key, double_tap_key, KC_NO, hold_layer}), }

#define ACTION_TAP_DANCE_TRIPLE_TAP_HOLD_LAYER(tap_key, double_tap_key, triple_tap_key, hold_layer) \
    { .fn = {NULL, td_tap_hold_layer_finished, td_tap_hold_layer_reset}, \
        .user_data = (void *)&((td_tap_hold_layer_opts_t){tap_key, double_tap_key, triple_tap_key, hold_layer}), }
