#pragma once

#include QMK_KEYBOARD_H

enum layers{
  LY_BASE,
  LY_FN,
  LY_GAME,
  LY_GAME_FN,
  LY_NAV,
  LY_MOUSE,
  LY_NUM,
  LY_MOD,
};

layer_state_t default_layer_state_set_user(layer_state_t state);
