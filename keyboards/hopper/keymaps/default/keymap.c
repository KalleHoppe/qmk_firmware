#include QMK_KEYBOARD_H
#include "keymap_swedish.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	 /*
	  * ┌───┬───┬───┬───┬───┬───┐	   ┌───┬───┬───┬───┬───┬───┐
	  * │Tab│ Q │ W │ E │ R │ T │	   │ Y │ U │ I │ O │ P │ [ │
	  * ├───┼───┼───┼───┼───┼───┤	   ├───┼───┼───┼───┼───┼───┤
	  * │Ctl│ A │ S │ D │ F │ G │	   │ H │ J │ K │ L │ ; │ ' │
	  * ├───┼───┼───┼───┼───┼───┤	   ├───┼───┼───┼───┼───┼───┤
	  *	 │ Z │ X │ C │ V │ B │	   │ N │ M │ , │ . │ / │
	  *	 ┴───┴───┴───┴───┴───┘	   └───┴───┴───┴───┴───┴
	  *			   ┌───┐				   ┌───┐
	  *			   │GUI├───┐		   ┌───┤Alt│
	  *			   └───┤Bsp├───┐   ┌───┤Ent├───┘
	  *				   └───┤   │   │   ├───┘
	  *					   └───┘   └───┘
	  */
	[0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.					,-----------------------------------------------------.
	   KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,						 KC_Y,	KC_U,	KC_I,	KC_O,   KC_P,       KC_LBRC,
  //|--------+--------+--------+--------+--------+--------|					|--------+--------+--------+--------+--------+--------|
	  KC_LCTL,  KC_A,   LT(2,KC_S),  LT(6,KC_D), LT(3,KC_F), KC_G,			 KC_H,	LT(4,KC_J),	KC_K,	KC_L,   KC_SCLN,    KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|					|--------+--------+--------+--------+--------+--------|
			MT(KC_LCTL,KC_Z),LT(6,KC_X), KC_C,	KC_V,	KC_B,			    KC_N,	KC_M, KC_COMM,  KC_DOT, LT(9,KC_SLSH),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
						  KC_LGUI,   MT(KC_LSFT,KC_DEL),  KC_LALT,	        KC_BSPC, LT(7,KC_SPC),  KC_RALT
									  //`--------------------------'  `--------------------------'

  ),
// ColemakDH
	[1] = LAYOUT_split_3x6_3(
		KC_TAB,  KC_Q,	KC_W,	KC_F,	KC_P,	KC_B,				   KC_J,  KC_L,	KC_Y,	KC_Y,	KC_SCLN, KC_LBRC,
		KC_LCTL, KC_A, LT(2,KC_R),	LT(6,KC_S),	LT(3,KC_T),	KC_G,	   KC_M,  LT(4,KC_N),	KC_E,	KC_I,	KC_O,	  KC_QUOT,
				   _______, _______,	KC_C,	KC_D,	KC_V,		   KC_K,  KC_H,	KC_COMM, KC_DOT,  LT(9,KC_SLSH),
						_______, MT(KC_LSFT,KC_DEL), KC_SPC,		   KC_SPC,  LT(7,KC_SPC),  KC_RALT
	)
,
//navigate
	[2] = LAYOUT_split_3x6_3(
		XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,				 KC_PGUP,	KC_HOME, KC_UP,	 KC_END,  XXXXXXX, XXXXXXX,
		KC_LCTL, KC_A,	KC_R,	KC_S,	KC_T,	KC_G,						 KC_PGDN,	KC_LEFT, KC_DOWN,KC_RGHT, XXXXXXX, XXXXXXX,
				 XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,			  XXXXXXX,	XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,
								   _______,  _______, _______,		      XXXXXXX,  XXXXXXX, _______
	),
// Symbols
	[3] = LAYOUT_split_3x6_3(
		KC_TAB,  XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX,XXXXXXX,					SE_TILD, SE_UNDS, SE_PIPE,	KC_QUOTE,	SE_ACUT, XXXXXXX,
		SE_CIRC, SE_ASTR, SE_AMPR, _______, _______, _______,			    SE_HASH, SE_EXLM, SE_QUES,	SE_DQUO,	SE_DLR,	  XXXXXXX,
				 _______, _______, _______, _______, _______,				SE_PERC, KC_H,	  KC_COMM, SE_GRV,  KC_SLSH,
								   _______,  _______, _______,		    _______,  _______,  _______
	),
//Code
	[4] = LAYOUT_split_3x6_3(
		SE_DQUO, SE_COLN, SE_LBRC, SE_RBRC, SE_AT,	KC_B,				    KC_J, KC_L,	SE_SLSH,SE_BSLS, KC_SCLN, KC_LBRC,
		SE_LCBR, SE_RCBR, SE_LPRN, SE_RPRN, SE_SCLN,KC_G,					KC_M, KC_N,	KC_E,	KC_I,	KC_O,	  KC_QUOT,
				 SE_HASH, SE_LABK, SE_RABK,	SE_EQL,	KC_V,					KC_K, KC_H,	KC_COMM, KC_DOT,  KC_SLSH,
								   _______,  _______, _______,		_______,  _______, _______
	),
// F-layer
	[5] = LAYOUT_split_3x6_3(
		_______, _______, _______, _______, _______, _______, 				KC_J,	KC_F7,	KC_F8, KC_F9, KC_F10, KC_LBRC,
		_______, _______, _______, _______, _______, _______,				KC_M,	KC_F4,	KC_F5, KC_F6, KC_F11, KC_QUOT,
				 _______, _______, _______, _______, _______, 				KC_K,	KC_F1,	KC_F2, KC_F3, KC_F12,
								   _______,  _______, _______,		_______,  _______, _______
	),
//Numpad
	[6] = LAYOUT_split_3x6_3(
		_______, _______, _______, _______, _______, _______, 				KC_PPLS,  KC_P7, KC_P8, KC_P9, KC_PAST, XXXXXXX,
		_______, _______, _______, _______, _______, _______,				KC_PMNS,  KC_P4, KC_P5, KC_P6, KC_PSLS, XXXXXXX,
				 _______, _______, _______, _______, _______, 				KC_PEQL,  KC_P1, KC_P2, KC_P3, SE_PERC,
								   _______,  _______, _______,		        KC_P0,  KC_PDOT, KC_PCMM
	),
//System
	[7] = LAYOUT_split_3x6_3(
		KC_TAB,  KC_TAB,	KC_ESC,	KC_F,	KC_P,	KC_COPY,						XXXXXXX, XXXXXXX, KC_F5,   KC_Y,	KC_SCLN, KC_LBRC,
		KC_LCTL, KC_A,	KC_R,	KC_S,	KC_T,	KC_PASTE,						XXXXXXX, KC_LGUI, KC_SYRQ, KC_L,	KC_ENT,	  KC_QUOT,
				XXXXXXX, KC_X,	KC_C,	KC_D,	KC_CUT,			KC_K,	 KC_H,	  KC_COMM, KC_DOT,  KC_SLSH,
						   KC_LGUI, KC_LCTL, KC_LALT,		KC_SPC,  KC_ENT,  DF(0)
	),

    [9] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        RGB_TOG, KC_BTN2, KC_MS_U, KC_BTN1, KC_WH_U, XXXXXXX,                      KC_VOLU, XXXXXXX, KC_MUTE, XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        RGB_VAI, KC_MS_D, KC_MS_D, KC_MS_R, KC_WH_D, XXXXXXX,                      KC_VOLD, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        RGB_VAD, RGB_MOD, RGB_SAD, RGB_HUI, XXXXXXX,                                XXXXXXX, XXXXXXX, KC_MSTP, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                        //`--------------------------'  `--------------------------'
    )
};
