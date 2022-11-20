#include QMK_KEYBOARD_H
#include "keymap_swedish.h"

 /*
	  * ┌───┬───┬───┬───┬───┬───┐	   ┌───┬───┬───┬───┬───┬───┐
	  * │Tab│ Q │ W │ E │ R │ T │	   │ Y │ U │ I │ O │ P │ [ │
	  * ├───┼───┼───┼───┼───┼───┤	   ├───┼───┼───┼───┼───┼───┤
	  * │Ctl│ A │ S │ D │ F │ G │	   │ H │ J │ K │ L │ ; │ ' │
	  * ├───┼───┼───┼───┼───┼───┤	   ├───┼───┼───┼───┼───┼───┤
	  *	    │ Z │ X │ C │ V │ B │	   │ N │ M │ , │ . │ / │
	  *	    ┴───┴───┴───┴───┴───┘	   └───┴───┴───┴───┴───┴
	  *			   ┌───┐				   ┌───┐
	  *			   │GUI├───┐		   ┌───┤Alt│
	  *			   └───┤Bsp├───┐   ┌───┤Ent├───┘
	  *				   └───┤   │   │   ├───┘
	  *					   └───┘   └───┘
	  */
/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,                           KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC,
        KC_LCTL, KC_A, LT(2,KC_S), LT(6,KC_D), LT(3,KC_F), KC_G,        KC_H, LT(4,KC_J), KC_K, KC_L, KC_SCLN, KC_QUOT,
                LCTL_T(KC_Z), LT(5,KC_X), KC_C, KC_V, KC_B,             KC_N, KC_M, KC_COMM, LCTL_T(KC_DOT), LT(8,KC_SLSH),
                       KC_LGUI, LSFT_T(KC_DEL), LALT_T(KC_SPC),         KC_BSPC, LT(7,KC_SPC), KC_RALT
    ),

	[1] = LAYOUT_split_3x6_3(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_F, KC_P, KC_B,				 		KC_J, KC_L, KC_U, KC_Y, SE_ODIA, KC_TRNS,
		KC_TRNS, KC_TRNS, LT(2,KC_R), LT(6,KC_S), LT(3,KC_T), KC_G,		 	KC_M, LT(4,KC_N), KC_E, KC_I,  KC_O, KC_TRNS,
				 KC_TRNS, KC_TRNS, KC_C, KC_D, KC_V, 						KC_K,KC_H, KC_TRNS, KC_TRNS, KC_TRNS,
							KC_TRNS,KC_TRNS, KC_TRNS, 						KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT_split_3x6_3(
		KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                         KC_PGUP, KC_HOME, KC_UP, KC_END, KC_NO, KC_NO,
        KC_TRNS, KC_BTN2, KC_NO, KC_BTN1, KC_NO, KC_NO,                     KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_NO,
                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                               KC_NO, KC_TRNS, KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT_split_3x6_3(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                           SE_TILD, KC_UNDS, SE_PIPE, KC_NUHS, KC_GRV, SE_ACUT,
        LSFT(KC_6), LSFT(KC_BSLS), KC_DQUO, KC_CIRC, KC_NO, KC_G,           KC_HASH, KC_EXLM, LSFT(KC_MINS), LSFT(KC_2), RALT(KC_4), KC_NO,
                    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                      SE_PERC, SE_MINS, SE_BSLS, SE_GRV, KC_NO,
                                RGB_RMOD, KC_NO, KC_NO,                     KC_NO,   KC_NO,   RGB_MOD),
	[4] = LAYOUT_split_3x6_3(
    KC_TRNS, SE_DQUO, LSFT(KC_DOT), RALT(KC_8), RALT(KC_9), RALT(KC_2),       KC_TRNS, KC_TRNS, LSFT(KC_7), RALT(KC_MINS), KC_TRNS, KC_NO,
        KC_TRNS, RALT(KC_7), RALT(KC_0), LSFT(KC_8), LSFT(KC_9), LSFT(KC_COMM),         KC_LSFT, KC_NO, LSFT(KC_0), KC_MINS, LSFT(KC_5), KC_NO,
                 KC_TRNS, KC_EXLM, KC_NUBS, LSFT(KC_NUBS), SE_EQL,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_SLSH, KC_TRNS,
                             KC_VOLD, KC_NO, KC_NO,                              KC_NO, KC_NO, KC_VOLU),
	[5] = LAYOUT_split_3x6_3(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                           KC_NO, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO,
        KC_NO, KC_TAB, KC_NO, KC_LCTL, KC_NO, KC_NO,                        KC_NO, KC_F4, KC_F5, KC_F6, KC_F11, KC_NO,
                KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                          KC_NO, KC_F1, KC_F2, KC_F3, KC_F12,
                            KC_LALT, KC_NO, KC_NO,                          KC_NO, KC_NO, KC_NO),
	[6] = LAYOUT_split_3x6_3(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                           KC_PPLS, KC_7, KC_8, KC_9, KC_PAST, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                           KC_PMNS, KC_4, KC_5, KC_6, KC_PSLS, KC_NO,
               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                           LSFT(KC_0), KC_1, KC_2, KC_3, KC_PERC,
                             KC_NO, KC_NO, KC_NO,                           KC_BSPC, KC_0, KC_COMM),
	[7] = LAYOUT_split_3x6_3(
        KC_TRNS, KC_TAB, KC_ESC, KC_NO, KC_NO, DF(1),                       KC_NO, KC_NO, KC_F5, KC_NO, KC_NO, KC_ESC,
        KC_NO, KC_NO, KC_NO, KC_SLSH, KC_ENT, LCTL(KC_C),                   KC_NO, KC_LGUI, KC_PSCR, KC_TRNS, KC_ENT, KC_NO,
               KC_NO, KC_NO, KC_NO, KC_EXLM, LCTL(KC_V),                    DF(0), KC_NO, KC_NO, KC_NO, KC_NO,
                        KC_TRNS, KC_LALT, LALT_T(KC_TAB),                   KC_NO, KC_NO, KC_NO),
	[8] = LAYOUT_split_3x6_3(
        KC_NO, KC_NO, KC_BTN2, KC_MS_U, KC_BTN1, KC_WH_U,                   KC_NO, KC_VOLD, KC_VOLU, KC_MUTE, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D,                   KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_NO, KC_NO,
                        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                  KC_NO, KC_NO, KC_MSTP, KC_NO, KC_NO,
                                KC_BRID, KC_BRIU, KC_NO,                    KC_NO, KC_NO, KC_NO),
	[9] = LAYOUT_split_3x6_3(
        KC_NO, RGB_TOG, RGB_M_K, RGB_M_X, RGB_M_R, RGB_M_T,                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI,                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD,               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                KC_LGUI, KC_TRNS, KC_SPC,                   KC_ENT, KC_TRNS, KC_RALT)
};
