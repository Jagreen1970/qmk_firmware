#include QMK_KEYBOARD_H

/* Combo definitions for jagreen1970 crkbd layout
 *
 * Layout positions (0-indexed):
 * Left half:  0  1  2  3  4  5
 *            12 13 14 15 16 17
 *            24 25 26 27 28 29
 *
 * Right half: 6  7  8  9 10 11
 *            18 19 20 21 22 23
 *            30 31 32 33 34 35
 */

/* Left Half - Top+Middle Row (TM) Combos - using matrix positions */
const uint16_t PROGMEM lh_tm_2_combo[] = {2, 14, COMBO_END};  /* W+S positions */
const uint16_t PROGMEM lh_tm_3_combo[] = {3, 15, COMBO_END};  /* E+D positions */
const uint16_t PROGMEM lh_tm_4_combo[] = {4, 16, COMBO_END};  /* R+F positions */
const uint16_t PROGMEM lh_tm_5_combo[] = {5, 17, COMBO_END};  /* T+G positions */

/* Left Half - Middle+Bottom Row (MB) Combos - using matrix positions */
const uint16_t PROGMEM lh_mb_2_combo[] = {14, 26, COMBO_END}; /* S+X positions */
const uint16_t PROGMEM lh_mb_3_combo[] = {15, 27, COMBO_END}; /* D+C positions */
const uint16_t PROGMEM lh_mb_4_combo[] = {16, 28, COMBO_END}; /* F+V positions */
const uint16_t PROGMEM lh_mb_5_combo[] = {17, 29, COMBO_END}; /* G+B positions */

/* Right Half - Top+Middle Row (TM) Combos - using matrix positions */
const uint16_t PROGMEM rh_tm_6_combo[] = {6, 18, COMBO_END};  /* Y+H positions */
const uint16_t PROGMEM rh_tm_7_combo[] = {7, 19, COMBO_END};  /* U+J positions */
const uint16_t PROGMEM rh_tm_8_combo[] = {8, 20, COMBO_END};  /* I+K positions */
const uint16_t PROGMEM rh_tm_9_combo[] = {9, 21, COMBO_END};  /* O+L positions */

/* Right Half - Middle+Bottom Row (MB) Combos - using matrix positions */
const uint16_t PROGMEM rh_mb_6_combo[] = {18, 30, COMBO_END}; /* H+N positions */
const uint16_t PROGMEM rh_mb_7_combo[] = {19, 31, COMBO_END}; /* J+M positions */
const uint16_t PROGMEM rh_mb_8_combo[] = {20, 32, COMBO_END}; /* K+, positions */
const uint16_t PROGMEM rh_mb_9_combo[] = {21, 33, COMBO_END}; /* L+. positions */

combo_t key_combos[] = {
    /* Left Half Combos - TM Row */
    COMBO(lh_tm_2_combo, KC_AT),    /* W+S - @ */
    COMBO(lh_tm_3_combo, KC_HASH),  /* E+D - # */
    COMBO(lh_tm_4_combo, KC_DLR),   /* R+F - $ */
    COMBO(lh_tm_5_combo, KC_PERC),  /* T+G - % */

    /* Left Half Combos - MB Row */
    COMBO(lh_mb_2_combo, KC_GRV),   /* S+X - ` */
    COMBO(lh_mb_3_combo, KC_BSLS),  /* D+C - \ */
    COMBO(lh_mb_4_combo, KC_EQL),   /* F+V - = */
    COMBO(lh_mb_5_combo, KC_TILD),  /* G+B - ~ */

    /* Right Half Combos - TM Row */
    COMBO(rh_tm_6_combo, KC_CIRC),  /* Y+H - ^ */
    COMBO(rh_tm_7_combo, KC_PLUS),  /* U+J - + */
    COMBO(rh_tm_8_combo, KC_ASTR),  /* I+K - * */
    COMBO(rh_tm_9_combo, KC_AMPR),  /* O+L - & */

    /* Right Half Combos - MB Row */
    COMBO(rh_mb_6_combo, KC_UNDS),  /* H+N - _ */
    COMBO(rh_mb_7_combo, KC_MINS),  /* J+M - - */
    COMBO(rh_mb_8_combo, KC_SLSH),  /* K+, - / */
    COMBO(rh_mb_9_combo, KC_PIPE),  /* L+. - | */
};
