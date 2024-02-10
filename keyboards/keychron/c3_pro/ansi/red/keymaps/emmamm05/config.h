/* Copyright 2023 @ Emmanuel Mora
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>. */

#pragma once

// Bootmagic Lite Press DEL while plugging the keyboard in
#define BOOTMAGIC_LITE_ROW 2
#define BOOTMAGIC_LITE_COLUMN 14

#define DYNAMIC_KEYMAP_LAYER_COUNT 12
#define PERMISSIVE_HOLD
#define TAPPING_TERM 300
#define TAPPING_TERM_PER_KEY
#define IS_COMMAND() (get_mods() == MOD_MASK_CS)

#define ONESHOT_TAP_TOGGLE 2
#define ONESHOT_TAP_TIMEOUT 5000

#define TAP_CODE_DELAY 20

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

#define MK_3_SPEED
#define MK_MOMENTARY_ACCEL
#define MK_W_INTERVAL_UNMOD 70
#define MC_C_OFFSET_UNMOD 24
#define MC_C_OFFSET_1 8

#define FORCE_NKRO

#define DEBOUNCE 10
