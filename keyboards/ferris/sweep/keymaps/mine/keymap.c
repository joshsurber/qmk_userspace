// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

#define PW_STR "Gdj28*52ZA3_Z&i"
#define ALTPW_STR "q8r*6V@NAUP2n-E"
#define EMAIL_STR "josh.surber@officeally.com"

enum custom_keycodes {
  QM_EMAIL = SAFE_RANGE,
  QM_PW, QM_ALTPW,
  QM_CUT, QM_COPY, QM_PASTE,
  QM_M1, QM_M4,
  TH_Z, TH_X, TH_C, TH_V, TH_B,
  ALT_P_DYN,
  TD_QUOT_SCLN,
  TD_BSLS_GRV,
  TD_PIPE_TILD,
  QM_T1_PW,
  QM_T4_PW,
  QM_T2_ALTPW,
  TD_RBRC_PSCR
};

// Layer 0 Home Row Mods
#define ALT_A LALT_T(KC_A)
#define GUI_R LGUI_T(KC_R)
#define CTL_S LCTL_T(KC_S)
#define SHFT_T LSFT_T(KC_T)

#define SFT_N RSFT_T(KC_N)
#define CTL_E RCTL_T(KC_E)
#define GUI_I RGUI_T(KC_I)
#define ALT_O LALT_T(KC_O)

// Layer 1 Home Row Mods
#define ALT_PGDN LALT_T(KC_PGDN)
#define GUI_LEFT LGUI_T(KC_LEFT)
#define CTL_DOWN LCTL_T(KC_DOWN)
#define SFT_RGHT LSFT_T(KC_RGHT)
#define SFT_4    RSFT_T(KC_4)
#define CTL_5    RCTL_T(KC_5)
#define GUI_6    RGUI_T(KC_6)

// Layer 2 Home Row Mods
#define ALT_O_L2 LALT_T(KC_O)
#define GUI_I_L2 LGUI_T(KC_I)
#define CTL_E_L2 LCTL_T(KC_E)
#define SFT_N_L2 LSFT_T(KC_N)
#define SFT_DLR  RSFT_T(KC_DLR)
#define CTL_PERC RCTL_T(KC_PERC)
#define GUI_CIRC RGUI_T(KC_CIRC)
#define ALT_COLN LALT_T(KC_COLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,            KC_J,    KC_L,  KC_U,    KC_Y,   TD_QUOT_SCLN,
    ALT_A,   GUI_R,   CTL_S,   SHFT_T,  KC_D,            KC_H,    SFT_N, CTL_E,   GUI_I,  ALT_O,
    TH_Z,    TH_X,    TH_C,    TH_V,    TH_B,            KC_K,    KC_M,  KC_COMM, KC_DOT, KC_SLSH,
                LT(2, KC_ENT), LT(1, KC_BSPC),           LT(1, KC_SPC), OSM(MOD_LSFT)
  ),

  [1] = LAYOUT(
    KC_PGUP, KC_HOME, KC_UP,   KC_END,  LCTL(LSFT(KC_TAB)), KC_LBRC, KC_7,    KC_8,    KC_9,    TD_RBRC_PSCR,
    ALT_PGDN,GUI_LEFT,CTL_DOWN,SFT_RGHT,LCTL(KC_TAB),      KC_MINS, SFT_4,   CTL_5,   GUI_6,   ALT_P_DYN,
    QM_M1,   LALT(KC_SCLN), LCTL(KC_F6), QM_M4, QM_EMAIL,   KC_EQL,  KC_1,    KC_2,    KC_3,    TD_BSLS_GRV,
                                        QM_T1_PW, KC_DEL,    KC_0,    QM_T4_PW
  ),

  [2] = LAYOUT(
    TD_QUOT_SCLN, KC_Y,    KC_U,    KC_L,    KC_J,       KC_LCBR, KC_AMPR, KC_ASTR, KC_GRV,  KC_RCBR,
    ALT_O_L2, GUI_I_L2, CTL_E_L2, SFT_N_L2, KC_H,        KC_UNDS, SFT_DLR, CTL_PERC,GUI_CIRC,ALT_COLN,
    KC_SLSH, KC_DOT,  KC_COMM, KC_M,    KC_K,            KC_PLUS, KC_EXLM, KC_AT,   KC_HASH, TD_PIPE_TILD,
                                        KC_TRNS, QM_T2_ALTPW, KC_LPRN, KC_RPRN
  ),

  [3] = LAYOUT(
    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TD_QUOT_SCLN,
    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS,  KC_TRNS, QM_EMAIL,KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                     KC_TAB, KC_DEL, QM_ALTPW, QM_PW
  ),

  [4] = LAYOUT(
    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),

};

#ifdef CHORDAL_HOLD
bool get_chordal_hold_opposite_hands(const keyrecord_t *tap_hold_record, const keyrecord_t *other_record) {
    return (tap_hold_record->event.key.row < (MATRIX_ROWS / 2)) != (other_record->event.key.row < (MATRIX_ROWS / 2));
}
#endif

bool is_flow_tap_key(uint16_t keycode) {
    if (keycode == LT(1, KC_SPC)) {
        return false;
    }
    switch (keycode) {
        case KC_A ... KC_Z:
        case KC_DOT:
        case KC_COMM:
        case KC_SCLN:
        case KC_SLSH:
            return true;
        default:
            return false;
    }
}

// Robust Manual Tap-Hold logic
static uint16_t td_key = KC_NO;
static uint32_t td_timer = 0;
static bool td_tap_ready = false;

bool handle_th(uint16_t keycode, keyrecord_t *record, uint16_t tap_kc, uint16_t hold_kc, uint16_t tap_hold_kc) {
    if (record->event.pressed) {
        if (keycode == td_key && td_tap_ready && timer_elapsed32(td_timer) < TAPPING_TERM) {
            if (tap_hold_kc == QM_CUT) SEND_STRING(SS_LCTL("a") SS_LCTL("x"));
            else if (tap_hold_kc == QM_COPY) SEND_STRING(SS_LCTL("a") SS_LCTL("c"));
            else if (tap_hold_kc == QM_PASTE) SEND_STRING(SS_LCTL("a") SS_LCTL("v") SS_TAP(X_ENTER));
            else if (tap_hold_kc != KC_NO) tap_code16(tap_hold_kc);
            td_key = KC_NO;
            td_tap_ready = false;
        } else {
            td_key = keycode;
            td_timer = timer_read32();
            td_tap_ready = false;
        }
    } else {
        if (keycode == td_key) {
            if (timer_elapsed32(td_timer) >= TAPPING_TERM) {
                tap_code16(hold_kc);
                td_key = KC_NO;
                td_tap_ready = false;
            } else {
                tap_code(tap_kc);
                td_tap_ready = true;
                td_timer = timer_read32();
            }
        }
    }
    return false;
}

// Manual Combo Logic for Thumb Keys with Timing Allowance
#define MY_COMBO_TERM 100
static bool t1_pressed = false;
static bool t2_pressed = false;
static bool t3_pressed = false;
static bool t4_pressed = false;
static bool combo_active = false;
static uint16_t thumb_timer = 0;

bool process_thumb_combos(uint16_t keycode, keyrecord_t *record) {
    bool pressed = record->event.pressed;
    uint16_t now = timer_read();
    
    // Update thumb states
    if (keycode == LT(2, KC_ENT)) t1_pressed = pressed;
    else if (keycode == LT(1, KC_BSPC)) t2_pressed = pressed;
    else if (keycode == LT(1, KC_SPC)) t3_pressed = pressed;
    else if (keycode == OSM(MOD_LSFT)) t4_pressed = pressed;
    else return true;

    if (pressed) {
        thumb_timer = now;
        if (t1_pressed && t3_pressed) { tap_code(KC_TAB); combo_active = true; }
        else if (t1_pressed && t4_pressed) { caps_word_toggle(); combo_active = true; }
        else if (t2_pressed && t3_pressed) { tap_code(KC_ESC); combo_active = true; }
        else if (t1_pressed && t2_pressed) { tap_code(KC_SPC); combo_active = true; }
        else if (t3_pressed && t4_pressed) { tap_code(KC_ENT); combo_active = true; }
    } else {
        if (!t1_pressed && !t2_pressed && !t3_pressed && !t4_pressed) {
            bool was_active = combo_active;
            combo_active = false;
            return !was_active;
        }
    }
    
    if (pressed && !combo_active && timer_elapsed(thumb_timer) < MY_COMBO_TERM) {
        return true;
    }

    return !combo_active;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_thumb_combos(keycode, record)) return false;

    if (record->event.pressed && keycode < TH_Z) {
        td_tap_ready = false;
    }

    switch (keycode) {
        case QM_PW: if (record->event.pressed) { SEND_STRING(PW_STR "\n"); } return false;
        case QM_ALTPW: if (record->event.pressed) { SEND_STRING(ALTPW_STR "\n"); } return false;
        case QM_EMAIL: if (record->event.pressed) { SEND_STRING(EMAIL_STR); } return false;
        case QM_CUT: if (record->event.pressed) { SEND_STRING(SS_LCTL("a") SS_LCTL("x")); } return false;
        case QM_COPY: if (record->event.pressed) { SEND_STRING(SS_LCTL("a") SS_LCTL("c")); } return false;
        case QM_PASTE: if (record->event.pressed) { SEND_STRING(SS_LCTL("a") SS_LCTL("v") SS_TAP(X_ENTER)); } return false;
        
        case TH_Z: return handle_th(keycode, record, KC_Z, LCTL(KC_Z), LSFT(LCTL(KC_Z)));
        case TH_X: return handle_th(keycode, record, KC_X, LCTL(KC_X), QM_CUT);
        case TH_C: return handle_th(keycode, record, KC_C, LCTL(KC_C), QM_COPY);
        case TH_V: return handle_th(keycode, record, KC_V, LSFT(LCTL(KC_V)), QM_PASTE);
        case TH_B: return handle_th(keycode, record, KC_B, LGUI(KC_V), LGUI(KC_C));

        case ALT_P_DYN:
            if (record->event.pressed) {
                td_key = keycode;
                td_timer = timer_read32();
                register_mods(MOD_BIT(KC_LALT));
            } else {
                unregister_mods(MOD_BIT(KC_LALT));
                if (td_key == keycode) {
                    if (timer_elapsed32(td_timer) < TAPPING_TERM) {
                        if (t2_pressed) tap_code(KC_SCLN);
                        else tap_code(KC_0);
                    }
                    td_key = KC_NO;
                }
            }
            return false;

        case TD_QUOT_SCLN: return handle_th(keycode, record, KC_QUOT, KC_SCLN, KC_NO);
        case TD_BSLS_GRV:  return handle_th(keycode, record, KC_BSLS, KC_GRV, KC_NO);
        case TD_PIPE_TILD: return handle_th(keycode, record, KC_PIPE, KC_TILD, KC_NO);
        case TD_RBRC_PSCR: return handle_th(keycode, record, KC_RBRC, KC_PSCR, KC_NO);

        case KC_SLSH:
            if (record->event.pressed && (get_mods() & MOD_MASK_ALT)) {
                tap_code(KC_TAB);
                return false;
            }
            break;

        case QM_T1_PW:
            if (record->event.pressed) {
                if (t2_pressed) SEND_STRING(PW_STR "\n");
                else tap_code(KC_TAB);
            }
            return false;
        case QM_T4_PW:
            if (record->event.pressed) {
                if (t3_pressed) SEND_STRING(PW_STR "\n");
                else tap_code(KC_DOT);
            }
            return false;
        case QM_T2_ALTPW:
            if (record->event.pressed) {
                if (t1_pressed) SEND_STRING(ALTPW_STR "\n");
                else tap_code(KC_BSPC);
            }
            return false;

        case QM_M1: return false;
        case QM_M4:
            if (record->event.pressed) {
                tap_code16(LCTL(KC_F6));
                tap_code16(LSFT(KC_F6));
            }
            return false;
    }
    return true;
}
