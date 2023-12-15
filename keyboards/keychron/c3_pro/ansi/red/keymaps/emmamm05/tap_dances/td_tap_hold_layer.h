#pragma once

#include QMK_KEYBOARD_H

#include "common.h"

typedef struct {
    uint16_t tap_key;
    uint16_t double_tap_key;
    uint16_t hold_layer;
    td_state_t state;
} td_tap_hold_layer_opts_t;

void td_tap_hold_layer_finished(tap_dance_state_t *state, void *user_data);
void td_tap_hold_layer_reset(tap_dance_state_t *state, void *user_data);
td_state_t td_tap_hold_layer_read_key_state(tap_dance_state_t *state, void *user_data);

#define ACTION_TAP_DANCE_TAP_HOLD_LAYER(tap, hold_layer) \
    { .fn = {NULL, td_tap_hold_layer_finished, td_tap_hold_layer_reset}, .user_data = (void *)&((td_tap_hold_layer_opts_t){tap, KC_NO, hold_layer}), }

#define ACTION_TAP_DANCE_DOUBLE_TAP_HOLD_LAYER(tap_key, double_tap_key, hold_layer) \
    { .fn = {NULL, td_tap_hold_layer_finished, td_tap_hold_layer_reset}, .user_data = (void *)&((td_tap_hold_layer_opts_t){tap_key, double_tap_key, hold_layer}), }
