#pragma once
#include "quantum.h"

/* Tap for Tab, hold for Hyper (Super+Ctrl+Shift+Alt) */
#define HPR_TAB ALL_T(KC_TAB)

/* Activate nav layer while holding space */
#define SPC_NAV LT(_NAV, KC_SPC)

/* Control when held, Escape when tapped */
#define ESC_CTL MT(MOD_LCTL, KC_ESC)

/* Disable keybinds for better gaming */
#define TG_GAME TG(_GAMING)

/*
 * Common layers and keycodes that are shared between Planck and Preonic
 */
enum userspace_layers {
  _QWERTY,
  _GAMING,
  _FN,
  _NAV
};
