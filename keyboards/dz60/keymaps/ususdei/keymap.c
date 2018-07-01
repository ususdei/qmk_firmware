#include "dz60.h"

#include "keymap_german.h"

#define U_RSHFT OSM(MOD_RSFT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* UsusDei's ISO split layout
* ,-----------------------------------------------------------------------------------------.
* | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  ß  |  ´  |BSPC | DEL |
* |-----------------------------------------------------------------------------------------+
* | Tab    |  Q  |  W  |  E  |  R  |  T  |  Z  |  U  |  I  |  O  |  P  |  P  |  Ü  | *  |   |
* |-------------------------------------------------------------------------------------|   +
* | CAPS tbd.  |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  Ö  |  Ä |  # |Enter |
* |-----------------------------------------------------------------------------------------+
* | Shift|  < |  Y  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  -  |  RShift   | NA  |
* |-----------------------------------------------------------------------------------------+
* | LCtrl | LGUI | LAlt |     Space     |  L4  |   LAYER2   | RAlt | LEFT | DOWN | UP | RGT |
* `-----------------------------------------------------------------------------------------'
*/

/*
	[0] = KEYMAP(
		F(0)    , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    , KC_6    , KC_7    , KC_8    , KC_9    , KC_0    , KC_MINS , KC_EQL  , KC_BSPC , KC_DEL  ,
		KC_TAB            , KC_Q    , KC_W    , KC_E    , KC_R    , KC_T    , KC_Y    , KC_U    , KC_I    , KC_O    , KC_P    , KC_LBRC , KC_RBRC , KC_NUHS ,
		KC_CAPS           , KC_A    , KC_S    , KC_D    , KC_F    , KC_G    , KC_H    , KC_J    , KC_K    , KC_L    , KC_SCLN , KC_QUOT , KC_ENT            ,
		KC_LSFT , KC_NUBS , KC_Z    , KC_X    , KC_C    , KC_V    , KC_B    , KC_N    , KC_M    , KC_COMM , KC_DOT  , KC_SLSH           , U_RSHFT , XXXXXXX ,
		KC_LCTL , KC_LGUI           , KC_LALT , KC_SPC            , MO(3)             , MO(1)             , KC_RALT , KC_LEFT , KC_UP   , KC_DOWN , KC_RIGHT
    ),
*/
	[0] = KEYMAP(
		KC_GESC , DE_1    , DE_2    , DE_3    , DE_4    , DE_5    , DE_6    , DE_7    , DE_8    , DE_9    , DE_0    , DE_SS   , DE_ACUT , KC_BSPC , KC_DEL  ,
		KC_TAB            , DE_Q    , DE_W    , DE_E    , DE_R    , DE_T    , DE_Z    , DE_U    , DE_I    , DE_O    , DE_P    , DE_UE   , DE_PLUS , DE_HASH ,
		KC_CAPS           , DE_A    , DE_S    , DE_D    , DE_F    , DE_G    , DE_H    , DE_J    , DE_K    , DE_L    , DE_OE   , DE_AE   , KC_ENT            ,
		KC_LSFT , DE_LESS , DE_Y    , DE_X    , DE_C    , DE_V    , DE_B    , DE_N    , DE_M    , DE_COMM , DE_DOT  , DE_MINS           , U_RSHFT , XXXXXXX ,
		KC_LCTL , KC_LGUI           , KC_LALT , KC_SPC            , MO(4)             , MO(2)             , KC_RALT , KC_LEFT , KC_DOWN , KC_UP   , KC_RIGHT
    ),

	[1] = KEYMAP(
		_______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , DE_MINS , XXXXXXX , _______ , _______ ,
		_______           , DE_X    , DE_V    , DE_L    , DE_C    , DE_W    , DE_K    , DE_H    , DE_G    , DE_F    , DE_Q    , DE_SS   , XXXXXXX , MO(2)   ,
		MO(2)             , DE_U    , DE_I    , DE_A    , DE_E    , DE_O    , DE_S    , DE_N    , DE_R    , DE_T    , DE_D    , DE_Y    , _______           ,
		_______ , MO(3)   , DE_UE   , DE_OE   , DE_AE   , DE_P    , DE_Z    , DE_B    , DE_M    , DE_COMM , DE_DOT  , DE_J              , _______ , _______ ,
		_______ , _______           , _______ , KC_SPC            , _______           , _______           , MO(3)   , _______ , _______ , _______ , _______
    ),

	[2] = KEYMAP(
		KC_GRV  , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   , KC_F6   , KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11  , KC_F12  , _______ , _______ ,
		_______           , XXXXXXX , DE_UNDS , DE_LBRC , DE_RBRC , DE_CIRC , DE_EXLM , DE_LESS , DE_MORE , DE_EQL  , DE_AMPR , XXXXXXX , XXXXXXX , _______ ,
		_______           , DE_BSLS , DE_SLSH , DE_LCBR , DE_RCBR , DE_ASTR , DE_QST  , DE_LPRN , DE_RPRN , DE_MINS , DE_COLN , DE_AT   , _______           ,
		_______ , _______ , DE_HASH , DE_DLR  , DE_PIPE , DE_TILD , DE_GRV  , DE_PLUS , DE_PERC , DE_DQOT , DE_QUOT , DE_SCLN           , _______ , _______ ,
		_______ , _______           , _______ , _______           , _______           , _______           , _______ , _______ , _______ , _______ , _______
    ),

	[3] = KEYMAP(
		XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , DE_SLSH , DE_ASTR , XXXXXXX , XXXXXXX , _______ , _______ ,
		_______           , XXXXXXX , XXXXXXX , KC_UP   , XXXXXXX , XXXXXXX , XXXXXXX , DE_7    , DE_8    , DE_9    , DE_PLUS , DE_MINS , XXXXXXX , _______ ,
		_______           , XXXXXXX , KC_LEFT , KC_DOWN , KC_RIGHT, XXXXXXX , XXXXXXX , DE_4    , DE_5    , DE_6    , DE_COMM , DE_DOT  , _______           ,
		_______ , _______ , XXXXXXX , XXXXXXX , XXXXXXX , KC_ENT  , XXXXXXX , DE_COLN , DE_1    , DE_2    , DE_3    , DE_SCLN           , _______ , _______ ,
		_______ , _______           , _______ , DE_0              , _______           , _______           , _______ , _______ , _______ , _______ , _______
    ),

	[4] = KEYMAP(
		_______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ ,
		_______           , RGB_TOG , RGB_MOD , RGB_HUI , RGB_HUD , RGB_SAI , RGB_SAD , RGB_VAI , RGB_VAD , _______ , _______ , _______ , _______ , RESET   ,
		_______           , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______           ,
		_______ , _______ , _______ , _______ , BL_DEC  , BL_TOGG , BL_INC  , BL_STEP , TG(1)   , _______ , _______ , _______           , _______ , _______ ,
		_______ , _______           , _______ , _______           , _______           , _______           , _______ , _______ , _______ , _______ , _______
    ),

};


/*
LEADER_EXTERNS();

void matrix_scan_user(void) {
    LEADER_DICTIONARY() {
        leading = false;
        leader_end();
        SEQ_ONE_KEY(KC_F) {
            register_code(KC_S);
            unregister_code(KC_S);
        }
    }
}
*/

