#include QMK_KEYBOARD_H

enum layers {
    _DEF,
    _EXT,
    _SYM,
    _FUN,
};

#define EXT MO(_EXT)
#define SYM MO(_SYM)

enum my_keycodes {
    OSM_LGUI = SAFE_RANGE,
    OSM_LALT,
    OSM_LSFT,
    OSM_LCTL,
};

#define BACK LSG(KC_LBRC)
#define FWD  LSG(KC_RBRC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_DEF] = LAYOUT(
        KC_Q,       KC_W,       KC_F,       KC_P,       KC_B,       KC_J,       KC_L,       KC_U,       KC_Y,       KC_QUOT,
        KC_A,       KC_R,       KC_S,       KC_T,       KC_G,       KC_M,       KC_N,       KC_E,       KC_I,       KC_O,
        KC_Z,       KC_X,       KC_C,       KC_D,       KC_V,       KC_K,       KC_H,       KC_COMM,    KC_DOT,     KC_SLSH,
        EXT,        KC_LSFT,    KC_SPC,     SYM
    ),

	[_EXT] = LAYOUT(
        QK_GESC,    BACK,       G(KC_F),    FWD,        G(KC_B),    KC_PGUP,    KC_HOME,    KC_UP,      KC_END,     CW_TOGG,
        OSM_LALT,   OSM_LGUI,   OSM_LSFT,   OSM_LCTL,   C(KC_G),    KC_PGDN,    KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_DEL,
        G(KC_Z),    G(KC_X),    G(KC_C),    KC_TAB,     G(KC_V),    A(KC_BSPC), KC_BSPC,    KC_NO,      KC_NO,      KC_NO,
        _______,    _______,    KC_ENT,     _______
    ),

	[_SYM] = LAYOUT(
        KC_7,       KC_5,       KC_3,       KC_1,       KC_9,       KC_8,       KC_0,       KC_2,       KC_4,       KC_6,
        KC_LT,      KC_PERC,    KC_LCBR,    KC_LPRN,    KC_LBRC,    KC_EQL,     KC_UNDS,    KC_COLN,    KC_GRV,     KC_PIPE,
        KC_GT,      KC_DLR,     KC_RCBR,    KC_RPRN,    KC_RBRC,    KC_PLUS,    KC_MINS,    KC_SCLN,    KC_TILD,    KC_BSLS,
        _______,    _______,    _______,    _______
    ),

	[_FUN] = LAYOUT(
        QK_BOOT,      KC_MPRV,    KC_MPLY,    KC_MNXT,    C(KC_BRIU), G(KC_EQL),  KC_F7,      KC_F8,      KC_F9,      KC_F10,
        KC_NO,      KC_VOLD,    KC_MUTE,    KC_VOLU,    C(KC_BRID), G(KC_MINS), KC_F4,      KC_F5,      KC_F6,      KC_F11,
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      G(KC_0),    KC_F1,      KC_F2,      KC_F3,      KC_F12,
        _______,    _______,    _______,    _______
    ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
#endif
    switch (keycode) {
        case OSM_LGUI:
            if (record->event.pressed) {
                register_mods(MOD_BIT(KC_LGUI));
                add_oneshot_mods(MOD_BIT(KC_LGUI));
            } else {
                unregister_mods(MOD_BIT(KC_LGUI));
            }
            return false;

        case OSM_LALT:
            if (record->event.pressed) {
                register_mods(MOD_BIT(KC_LALT));
                add_oneshot_mods(MOD_BIT(KC_LALT));
            } else {
                unregister_mods(MOD_BIT(KC_LALT));
            }
            return false;

        case OSM_LCTL:
            if (record->event.pressed) {
                register_mods(MOD_BIT(KC_LCTL));
                add_oneshot_mods(MOD_BIT(KC_LCTL));
            } else {
                unregister_mods(MOD_BIT(KC_LCTL));
            }
            return false;

        case OSM_LSFT:
            if (record->event.pressed) {
                register_mods(MOD_BIT(KC_LSFT));
                add_oneshot_mods(MOD_BIT(KC_LSFT));
            } else {
                unregister_mods(MOD_BIT(KC_LSFT));
            }
            return false;

        default:
            break;
    }

    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _EXT, _SYM, _FUN);
}

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    // A 128x32 OLED rotated 90 degrees is 5 characters wide and 16 characters tall
    // This example string should fill that neatly
    const char *text = PSTR("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ123456789!@#$%^&*()[]{}-=_+?");

    if (is_keyboard_master()) {
        oled_write_P(text, false);
    } else {
        oled_write_P(text, false);
    }
    return false;
}
#endif
