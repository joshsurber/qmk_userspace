/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define DYNAMIC_KEYMAP_LAYER_COUNT 5
#define PERMISSIVE_HOLD
#define VIAL_TAP_DANCE_ENTRIES 10
#define VIAL_KEYBOARD_UID {0x47, 0x97, 0x7E, 0x32, 0xC9, 0xAC, 0x13, 0xF3}

#define VIAL_UNLOCK_COMBO_ROWS { 2, 3, 0, 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1, 0, 2, 4 }

// Enable Chordal Hold (the "opposite hand" rule)
#define CHORDAL_HOLD

// Enable Flow Tap to disable modifiers during fast typing bursts
#define FLOW_TAP_TERM 150

// Set a safe, lazy Tapping Term for deliberate modifier use
#define TAPPING_TERM 250

// Prevent accidental modifier repeats on fast "tap then hold"
#define QUICK_TAP_TERM 120
