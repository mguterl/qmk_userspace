#pragma once
#include "quantum.h"

/* Tap for Tab, hold for Hyper (Super+Ctrl+Shift+Alt) */
#define HPR_TAB ALL_T(KC_TAB)

/* Activate nav layer while holding space */
#define SPC_NAV LT(_NAV, KC_SPC)

/* Control when held, Escape when tapped */
#define ESC_CTL MT(MOD_LCTL, KC_ESC)

/*
 * Common layers and keycodes that are shared between Planck and Preonic
 */
enum userspace_layers {
  _QWERTY,
  _FN,
  _NAV
};
