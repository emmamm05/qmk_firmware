#pragma once

#include QMK_KEYBOARD_H
#include "keys.h"
#include "layers.h"

enum COMBOS {
    CB_LCTL,
    CB_LGUI,
    CB_LALT,
    CB_LSFT,
    CB_LCS,
    CB_LCA,
    CB_LCG,
    CB_LGS,
    CB_LGA,
    CB_LSA,
    CB_LMEH,
    CB_LNEXUS,
    CB_LASTRAL,
    CB_LTRINITY,
    CB_LHYPER,
    CB_RCTL,
    CB_RGUI,
    CB_RALT,
    CB_RSFT,
    CB_RCA,
    CB_RCS,
    CB_RCG,
    CB_RGS,
    CB_RGA,
    CB_RSA,
    CB_RMEH,
    CB_RNEXUS,
    CB_RASTRAL,
    CB_RTRINITY,
    CB_RHYPER,
    CB_CTL_A,
    CB_CTL_W,
    CB_ALT_X,
    CB_CTL_C,
    CB_MOUSE,
    CB_NAV,
    CB_SYM,
};
#define KEY_COMBOS_SIZE 37
extern combo_t key_combos[KEY_COMBOS_SIZE];
