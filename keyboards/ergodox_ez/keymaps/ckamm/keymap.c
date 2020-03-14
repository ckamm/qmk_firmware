#include QMK_KEYBOARD_H
#include "version.h"

#define BASE 0 // default layer
#define LSYM 1 // left symbols
#define ARRO 2 // arrow keys
#define NUMS 3 // number keys
#define FUNS 4 // function keys

enum custom_keycodes {
  EPRM = SAFE_RANGE,
  VRSN,
  RGB_SLD,
  CPP_PTR_ACCESS
};


/* important keys
 *
 * already covered
 * !@#$%^&*
 * -=+
 * `
 * _
 * '"
 * /?
 * ([{, )]}
 * ;:
 * ,<
 * .>
 */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[BASE] = LAYOUT_ergodox(
  // left hand
  KC_ESC,            S(KC_1),     S(KC_2),       S(KC_3),         S(KC_4),        S(KC_5),        KC_NO,
  KC_TAB,            KC_Q,        KC_W,          KC_E,            KC_R,           KC_T,           KC_NO,
  KC_LSFT,           LALT_T(KC_A),LCTL_T(KC_S),  KC_D,            LT(ARRO, KC_F), LT(NUMS, KC_G),
  MO(LSYM),          KC_Z,        KC_X,          KC_C,            LT(FUNS, KC_V), KC_B,           KC_NO,
  KC_GRAVE,          KC_QUOT,     KC_NO,         KC_NO,           MO(LSYM),
                                                                 KC_MUTE, KC_VOLU,
                                                                          KC_VOLD,
                                                            KC_BSPC, KC_ENT, KC_ESC,
  // right hand
  KC_NO,        S(KC_6),        S(KC_7),        S(KC_8),        S(KC_MINS),        KC_NO,          KC_NO,
  KC_NO,        KC_Y,           KC_U,           KC_I,           KC_O,              KC_P,           KC_NO,
                KC_H,           KC_J,           KC_K,           LCTL_T(KC_L),      LALT_T(KC_SCLN),KC_RSFT,
  MEH_T(KC_NO), KC_N,           KC_M,           KC_COMM,        KC_DOT,            KC_SLSH,        KC_MINS,
                                KC_RALT,        KC_NO,          KC_LBRC,           KC_RBRC,        KC_NO,
  KC_NO,   KC_NO,
  KC_PGUP,
  KC_PGDN, KC_TAB, KC_SPC
),
[LSYM] = LAYOUT_ergodox(
  // left hand
  KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_NO,
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  _______, KC_LALT, KC_LCTL, KC_NO,   KC_LSFT, KC_NO,
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                               KC_NO,   KC_NO,
                                                        KC_NO,
                                    _______,  _______,  KC_NO,
  // right hand
  KC_NO,   KC_F6,    KC_F7,      KC_F8,      KC_F9,          KC_F10,     KC_F11,
  KC_NO,   KC_MINS,  KC_LBRC,    KC_RBRC,    KC_BSLS,        S(KC_BSLS), KC_F12,
           KC_EQL,   S(KC_9),    S(KC_0),    S(KC_QUOT),     KC_QUOT,    KC_GRAVE,
  KC_NO,   S(KC_EQL),S(KC_LBRC), S(KC_RBRC), CPP_PTR_ACCESS, S(KC_GRAVE),KC_NO,
                     KC_NO,      KC_NO,      KC_NO,          KC_NO,      KC_NO,
  KC_NO,   KC_NO,
  KC_NO,
  KC_NO,   _______,   _______
),
[ARRO] = LAYOUT_ergodox(
  // left hand
  KC_NO,   KC_F1,      KC_F2,      KC_F3,      KC_F4,       KC_F5,   KC_NO,
  KC_NO,   KC_NO,      KC_NO,      KC_NO,      KC_NO,       KC_NO,   KC_NO,
  _______, KC_LALT,    KC_LCTL,    KC_LSFT,    KC_NO,       KC_NO,
  KC_NO,   LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V),  KC_NO,   KC_NO,
  KC_NO,   KC_NO,      KC_NO,      KC_NO,      KC_NO,
                                               KC_NO,   KC_NO,
                                                        KC_NO,
                                   _______,  _______,   KC_NO,
  // right hand
  KC_NO,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  KC_NO,   KC_BSPC, KC_HOME, KC_UP,   KC_END,  KC_NO,   KC_F12,
           KC_DELT, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,   _______,
  KC_NO,   KC_NO,   KC_PGUP, KC_PGDN, KC_NO,   KC_NO,   KC_NO,
                    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO,   KC_NO,
  KC_NO,
  KC_NO,   _______,   _______
),
[NUMS] = LAYOUT_ergodox(
  // left hand
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  _______, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,   KC_NO,
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                               KC_NO,   KC_NO,
                                                        KC_NO,
                                   _______,  _______,   KC_NO,
  // right hand
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,     KC_NO,
  KC_NO,   KC_NO,   KC_7,    KC_8,    KC_9,    KC_NO,     KC_NO,
           KC_EQL,  KC_4,    KC_5,    KC_6,    S(KC_EQL), S(KC_8),
  KC_NO,   KC_NO,   KC_1,    KC_2,    KC_3,    _______,   _______,
                    KC_0,    KC_COMM, KC_DOT,  KC_ENT ,   KC_NO,
  KC_NO,   KC_NO,
  KC_NO,
  KC_NO,   _______,   _______
),
[FUNS] = LAYOUT_ergodox(
  // left hand
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  _______, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,   KC_NO,
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                               KC_NO,   KC_NO,
                                                        KC_NO,
                                   _______,  _______,   KC_NO,
  // right hand
  KC_NO,   KC_NO,   KC_F10,  KC_F11,  KC_F12,   KC_NO, KC_NO,
  KC_NO,   KC_NO,   KC_F7,   KC_F8,   KC_F9,    KC_NO, KC_NO,
           KC_NO,   KC_F4,   KC_F5,   KC_F6,    KC_NO, _______,
  KC_NO,   KC_NO,   KC_F1,   KC_F2,   KC_F3,    KC_NO, KC_NO,
                    KC_NO,   KC_NO,   KC_NO,    KC_NO, KC_NO,
  KC_NO,   KC_NO,
  KC_NO,
  KC_NO,   _______,   _______
),
// [RSYM] = LAYOUT_ergodox(
//   // left hand
//   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
//   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
//   _______, KC_LALT, KC_NO,   KC_NO,   KC_NO,   KC_NO,
//   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
//   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
//                                                KC_NO,   KC_NO,
//                                                         KC_NO,
//                                    _______,  _______,   KC_NO,
//   // right hand
//   KC_NO,   KC_NO,   KC_NO,  KC_NO,  KC_NO,   KC_NO, KC_NO,
//   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO, KC_NO,
//            KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO, _______,
//   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO, KC_NO,
//                     KC_NO,   KC_NO,   KC_NO,    KC_NO, KC_NO,
//   KC_NO,   KC_NO,
//   KC_NO,
//   KC_NO,   _______,   _______
// ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    switch (keycode) {
      case EPRM:
        eeconfig_init();
        return false;
      case VRSN:
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
        return false;
      #ifdef RGBLIGHT_ENABLE
      case RGB_SLD:
        rgblight_mode(1);
        return false;
      #endif
      case CPP_PTR_ACCESS:
        SEND_STRING("->");
        return false;
   }
  }
  return true;
}

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
#ifdef RGBLIGHT_COLOR_LAYER_0
  rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
};

// Runs whenever there is a layer state change.
uint32_t layer_state_set_user(uint32_t state) {
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  return state;

  uint8_t layer = biton32(state);
  switch (layer) {
      case 0:
        #ifdef RGBLIGHT_COLOR_LAYER_0
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
        #else
        #ifdef RGBLIGHT_ENABLE
          rgblight_init();
        #endif
        #endif
        break;
      case 1:
        ergodox_right_led_1_on();
        #ifdef RGBLIGHT_COLOR_LAYER_1
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_1);
        #endif
        break;
      case 2:
        ergodox_right_led_2_on();
        #ifdef RGBLIGHT_COLOR_LAYER_2
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_2);
        #endif
        break;
      case 3:
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_3
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_3);
        #endif
        break;
      case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        #ifdef RGBLIGHT_COLOR_LAYER_4
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_4);
        #endif
        break;
      case 5:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_5
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_5);
        #endif
        break;
      case 6:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_6
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_6);
        #endif
        break;
      case 7:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_7
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_7);
        #endif
        break;
      default:
        break;
    }

  return state;
};
