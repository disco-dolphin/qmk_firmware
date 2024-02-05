#include QMK_KEYBOARD_H

enum sofle_layers {
    _COMMON,
    _QWERTY,
    _COLEMAK,
    _SYMBOL,
    _ACTION,
    _SETUP,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * COMMON
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * | F11  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  F12 |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * | ESC  |      |      |      |      |      |                    |      |      |      |      |      | Bspc |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |LShift|      |      |      |      |      |-------.    ,-------|      |      |      |      |      |RShift|
     * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
     * | Tab  |      |      |      |      |      |-------|    |-------|      |      |   ,  |   .  |   '  |   `  |
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
     *            |      |      |      |      |/       /         \      \ |      |      |      |      |
     *            `----------------------------------'           '------''---------------------------'
     */
    [_COMMON] = LAYOUT(KC_F11, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_F12, KC_ESC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSPC, KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_RSFT, KC_TAB, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MUTE, XXXXXXX, XXXXXXX, XXXXXXX, KC_COMMA, KC_DOT, KC_QUOTE, KC_GRAVE, KC_LGUI, KC_LALT, KC_LCTL, MO(_SYMBOL), KC_ENT, KC_SPC, MO(_ACTION), KC_RCTL, KC_RALT, KC_RGUI),

    /*
     * QWERTY
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |      |
     * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
     * |      |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |      |      |      |      |
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *            |      |      |      |      | /       /       \      \  |      |      |      |      |
     *            |      |      |      |      |/       /         \      \ |      |      |      |      |
     *            `----------------------------------'           '------''---------------------------'
     */

    [_QWERTY] = LAYOUT(_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, _______, _______, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, _______, _______, KC_Z, KC_X, KC_C, KC_V, KC_B, _______, _______, KC_N, KC_M, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),

    /*
     * COLEMAK
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |   Q  |   W  |   F  |   P  |   B  |                    |   J  |   L  |   U  |   Y  |   ;  |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |   A  |   R  |   S  |   T  |   G  |-------.    ,-------|   M  |   N  |   E  |   I  |   O  |      |
     * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
     * |      |   Z  |   X  |   C  |   D  |   V  |-------|    |-------|   K  |   H  |      |      |      |      |
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *            |      |      |      |      | /       /       \      \  |      |      |      |      |
     *            |      |      |      |      |/       /         \      \ |      |      |      |      |
     *            `----------------------------------'           '------''---------------------------'
     */

    [_COLEMAK] = LAYOUT(_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, _______, _______, KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E, KC_I, KC_O, _______, _______, KC_Z, KC_X, KC_C, KC_D, KC_V, _______, _______, KC_K, KC_H, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),

    /* LOWER
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  |      |
     * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
     * |      |   =  |   -  |   +  |   {  |   }  |-------|    |-------|   [  |   ]  |   _  |   /  |   \  |      |
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *            |      |      |      |      | /       /       \     \   |      |      |      |      |
     *            |      |      |      |      |/       /         \      \ |      |      |      |      |
     *            `----------------------------------'           '------''---------------------------'
     */
    [_SYMBOL] = LAYOUT(_______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, _______, _______, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, _______, _______, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______, _______, KC_EQL, KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR, _______, _______, KC_LBRC, KC_RBRC, KC_UNDERSCORE, KC_SLASH, KC_BSLS, KC_QUES, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),

    /* RAISE
     * ,----------------------------------------.                     ,-----------------------------------------.
     * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      | Ins  | Pscr | Menu | ---- | ---- |                    | ---- | PWrd |  Up  | NWrd | DLine|      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      | LAt  | LCtl |LShift| ---- | Caps |-------.    ,-------| ---- | Left | Down | Rigth|  Del |      |
     * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
     * |      | ---- | ---- | ---- | ---- | ---- |-------|    |-------| ---- | LStr | ---- | LEnd | ---- |      |
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *            |      |      |      |      | /       /       \      \  |      |      |      |      |
     *            |      |      |      |      |/       /         \      \ |      |      |      |      |
     *            `----------------------------------'           '------''---------------------------'
     */
    [_ACTION] = LAYOUT(_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_INS, KC_PSCR, KC_APP, XXXXXXX, XXXXXXX, KC_PGUP, C(KC_LEFT), KC_UP, C(KC_RIGHT), C(KC_BSPC), _______, _______, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX, KC_CAPS, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, XXXXXXX, KC_HOME, XXXXXXX, KC_END, XXXXXXX, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),

    /* ADJUST
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |Q_BOOT|      |QWERTY| CLMK |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |      |      |      |      |      |-------.    ,-------|      | VOLDO| MUTE | VOLUP|      |      |
     * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
     * |      |      |      |      |      |      |-------|    |-------|      | PREV | PLAY | NEXT |      |      |
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *            |      |      |      |      | /       /       \      \  |      |      |      |      |
     *            |      |      |      |      |/       /         \      \ |      |      |      |      |
     *            `----------------------------------'           '------''---------------------------'
     */
    [_SETUP] = LAYOUT(XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT, XXXXXXX, TO(_QWERTY), TO(_COLEMAK), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______)};

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _SYMBOL, _ACTION, _SETUP);
}

#ifdef OLED_ENABLE

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94, 0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4, 0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4, 0};

    oled_write_P(qmk_logo, false);
}

static void print_status_narrow(void) {
    oled_write_ln_P(PSTR("LAYOT"), false);
    if (IS_LAYER_ON(_QWERTY)) {
        oled_write_P(PSTR("Qwrt\n"), false);
    } else if (IS_LAYER_ON(_COLEMAK)) {
        oled_write_P(PSTR("Clmk\n"), false);
    } else {
        oled_write_P(PSTR("Undef"), false);
    }

    oled_write_P(PSTR("\n\n"), false);

    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _COLEMAK:
        case _QWERTY:
            oled_write_P(PSTR("Alpha"), false);
            break;
        case _ACTION:
            oled_write_P(PSTR("Actn\n"), false);
            break;
        case _SYMBOL:
            oled_write_P(PSTR("Symbl"), false);
            break;
        case _SETUP:
            oled_write_P(PSTR("Setup"), false);
            break;
        default:
            oled_write_P(PSTR("Undef"), false);
    }

    oled_write_P(PSTR("\n\n"), false);

    led_t led_usb_state = host_keyboard_led_state();
    oled_write_P(PSTR("CPSLK"), led_usb_state.caps_lock);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_logo();
    }
    return false;
}

#endif

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_WH_R);
        } else {
            tap_code(KC_WH_L);
        }
    }
    return false;
}

#endif
