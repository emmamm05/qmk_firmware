#pragma once

#include QMK_KEYBOARD_H

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

