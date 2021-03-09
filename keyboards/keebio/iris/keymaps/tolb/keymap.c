#include QMK_KEYBOARD_H
#include "action_layer.h"

#define a KC_A
#define b KC_B
#define c KC_C
#define d KC_D
#define e KC_E
#define f KC_F
#define g KC_G
#define h KC_H
#define i KC_I
#define j KC_J
#define k KC_K
#define l KC_L
#define m KC_M
#define n KC_N
#define o KC_O
#define p KC_P
#define q KC_Q
#define r KC_R
#define s KC_S
#define t KC_T
#define u KC_U
#define v KC_V
#define w KC_W
#define x KC_X
#define y KC_Y
#define z KC_Z

#define lalt KC_LALT
#define lctl KC_LCTL
#define lsft KC_LSFT
#define ralt KC_RALT
#define rctl KC_RCTL
#define rsft KC_RSFT
#define lgui KC_LGUI

#define n0 KC_0
#define n1 KC_1
#define n2 KC_2
#define n3 KC_3
#define n4 KC_4
#define n5 KC_5
#define n6 KC_6
#define n7 KC_7
#define n8 KC_8
#define n9 KC_9

#define bspc KC_BSPC
#define ctlbspc LCTL_T(bspc)
#define ctlesc LCTL_T(esc)
#define guiesc LGUI_T(esc)
#define caps KC_CAPS
#define comm KC_COMM
#define dash A(KC_MINS)
#define scln KC_SCLN
#define slsh KC_SLSH
#define spc KC_SPC
#define tab KC_TAB
#define del KC_DEL
#define dot KC_DOT
#define ent KC_ENT
#define sftent RSFT_T(ent)
#define mins KC_MINS
#define quot KC_QUOT
#define esc KC_ESC
#define gbp A(KC_3)

#define down KC_DOWN
#define home G(KC_LEFT)
#define end G(KC_RGHT)
#define up KC_UP
#define pgdn KC_PGDN
#define pgup KC_PGUP
#define left KC_LEFT
#define rght KC_RGHT

enum my_layers {
    BASE,
    GAME,
    SYMB,
    MOVE
};

#define symb MO(SYMB)
#define move MO(MOVE)
#define togame TG(GAME)
#define func MO(FUNC)

#define rset RESET
#define powr KC_POWER

#define ____ KC_TRNS
#define xxxx KC_NO

enum send_keycodes {
    ampr = SAFE_RANGE,
    astr,
    at,
    bsls,
    circ,
    dlr,
    eql,
    exlm,
    grv,
    hash,
    lbrc,
    lcbr,
    lprn,
    perc,
    pipe,
    plus,
    rbrc,
    rcbr,
    rprn,
    tild,
    undr,
};

// empty ish layer
/* //   [MOVE] = LAYOUT( */
/*   //┌────┬────┬────┬────┬────┬────┐                  ┌────┬────┬────┬────┬────┬────┐ */
/*      esc,  n1,  n2,  n3,  n4,  n5,                     n6,  n7,  n8,  n9,  n0,  dash, */
/*   //├────┼────┼────┼────┼────┼────┤                  ├────┼────┼────┼────┼────┼────┤ */
/*      esc, xxxx,xxxx,xxxx,xxxx,xxxx,                   xxxx,xxxx,xxxx,xxxx,xxxx,xxxx, */
/*   //├────┼────┼────┼────┼────┼────┤                  ├────┼────┼────┼────┼────┼────┤ */
/*      esc, xxxx,xxxx,xxxx,xxxx,xxxx,                   xxxx,xxxx,xxxx,xxxx,xxxx,xxxx, */
/*   //├────┼────┼────┼────┼────┼────┤─────┐       ┌────┼────┼────┼────┼────┼────┼────┤ */
/*      esc, xxxx,xxxx,xxxx,xxxx,xxxx,____,         ____,xxxx,xxxx,xxxx,xxxx,xxxx,xxxx, */
/*   //└────┴────┴────┴─┬┴───┬─┴──┬─┴──┬───┘       └──┬─┴─┬──┴─┬──┴─┬──┴────┴────┴────┘ */
/*                       ____,____,____,              ____,____,____, */
/*                   // └────┴────┴────┘              └───┴────┴────┘ */
/*   ), */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [BASE] = LAYOUT(
  //┌────┬────┬────┬────┬────┬────┐                  ┌────┬────┬────┬────┬────┬────┐
     esc,  n1,  n2,  n3,  n4,  n5,                     n6,  n7,  n8,  n9,  n0,  mins,
  //├────┼────┼────┼────┼────┼────┤                  ├────┼────┼────┼────┼────┼────┤
     tab,  q,    w,   e,   r,  t,                      y,    u,  i,   o,  scln, mins,
  //├────┼────┼────┼────┼────┼────┤                  ├────┼────┼────┼────┼────┼────┤
  ctlbspc,  a,   s,  d,  f,   g,                      h,    j,   k,   l,   p,  quot,
  //├────┼────┼────┼────┼────┼────┤─────┐       ┌────┼────┼────┼────┼────┼────┼────┤
     lsft,  z,   x,   c,  v,   b,  move,        move , n,   m,  comm, dot,slsh,rsft,
  //└────┴────┴────┴─┬┴───┬─┴──┬─┴──┬───┘       └──┬─┴─┬──┴─┬──┴─┬──┴────┴────┴────┘
                     lalt,guiesc,spc,           sftent, symb, ralt
                  // └────┴────┴────┘              └───┴────┴────┘
  ),
  [SYMB] = LAYOUT(
  //┌────┬────┬────┬────┬────┬────┐                  ┌────┬────┬────┬────┬────┬────┐
     esc,  n1,  n2,  n3,  n4,  n5,                     n6,  n7,  n8,  n9,  n0, mins,
  //├────┼────┼────┼────┼────┼────┤                  ├────┼────┼────┼────┼────┼────┤
     esc,  n1,  n2,  n3,  n4,  n5,                     n6,  n7,  n8,  n9,  n0, mins,
  //├────┼────┼────┼────┼────┼────┤                  ├────┼────┼────┼────┼────┼────┤
     ____, at,  dlr, eql,lprn,lbrc,                   rbrc,rprn,astr,hash,plus, gbp,
  //├────┼────┼────┼────┼────┼────┤─────┐       ┌────┼────┼────┼────┼────┼────┼────┤
     ____,grv, pipe,bsls,lcbr,tild, mins,        ____,circ,rcbr,ampr,exlm,perc,____,
  //└────┴────┴────┴─┬┴───┬─┴──┬─┴──┬───┘       └──┬─┴─┬──┴─┬──┴─┬──┴────┴────┴────┘
                      ____,____,undr,               ent,____,____
                  // └────┴────┴────┘              └───┴────┴────┘
  ),
  [GAME] = LAYOUT(
  //┌────┬────┬────┬────┬────┬────┐                  ┌────┬────┬────┬────┬────┬────┐
     esc,  n1,  n2,  n3,  n4,  n5,                     n6,  n7,  n8,  n9,  n0,  bspc,
  //├────┼────┼────┼────┼────┼────┤                  ├────┼────┼────┼────┼────┼────┤
     tab,  q,    w,   e,   r,  t,                      y,    u,  i,   o,  scln, mins,
  //├────┼────┼────┼────┼────┼────┤                  ├────┼────┼────┼────┼────┼────┤
     lctl,  a,   s,  d,  f,   g,                      h,    j,   k,   l,   p,  quot,
  //├────┼────┼────┼────┼────┼────┤─────┐       ┌────┼────┼────┼────┼────┼────┼────┤
     lsft,  z,   x,   c,  v,   b,  move,        move, n,   m,  comm, dot,slsh,rsft,
  //└────┴────┴────┴─┬┴───┬─┴──┬─┴──┬───┘       └──┬─┴─┬──┴─┬──┴─┬──┴────┴────┴────┘
                      lalt,lctl, spc,           sftent, symb, ralt
                  // └────┴────┴────┘              └───┴────┴────┘
  ),
  [MOVE] = LAYOUT(
  //┌────┬────┬────┬────┬────┬────┐                  ┌────┬────┬────┬────┬────┬────┐
     esc,  n1,  n2,  n3,  n4,  n5,                     n6,  n7,  n8,  n9,  n0,  dash,
  //├────┼────┼────┼────┼────┼────┤                  ├────┼────┼────┼────┼────┼────┤
     rset,xxxx,xxxx,xxxx,xxxx,xxxx,                   xxxx,xxxx,xxxx,xxxx,xxxx,xxxx,
  //├────┼────┼────┼────┼────┼────┤                  ├────┼────┼────┼────┼────┼────┤
  RGB_TOG,xxxx,xxxx,xxxx,xxxx,togame,                   left,down, up, rght,xxxx,xxxx,
  //├────┼────┼────┼────┼────┼────┤─────┐       ┌────┼────┼────┼────┼────┼────┼────┤
     esc, xxxx,xxxx,xxxx,xxxx,xxxx,____,         ____,xxxx,pgdn,pgup,xxxx,xxxx,xxxx,
  //└────┴────┴────┴─┬┴───┬─┴──┬─┴──┬───┘       └──┬─┴─┬──┴─┬──┴─┬──┴────┴────┴────┘
                      ____,____,____,              ____,____,____
                  // └────┴────┴────┘              └───┴────┴────┘
  )
};

bool send_string_if_keydown(keyrecord_t *record, const char *s) {
    if (record->event.pressed) {
        send_string(s);
    }
    return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // Override the defualt auto shifted symbols to use SEND_STRING See
        // https://github.com/qmk/qmk_firmware/issues/4072
        case ampr:
            return send_string_if_keydown(record, "&");
        case astr:
            return send_string_if_keydown(record, "*");
        case at:
            return send_string_if_keydown(record, "@");
        case bsls:
            return send_string_if_keydown(record, "\\");
        case circ:
            return send_string_if_keydown(record, "^");
        case dlr:
            return send_string_if_keydown(record, "$");
        case eql:
            return send_string_if_keydown(record, "=");
        case exlm:
            return send_string_if_keydown(record, "!");
        case grv:
            return send_string_if_keydown(record, "`");
        case hash:
            return send_string_if_keydown(record, "#");
        case lbrc:
            return send_string_if_keydown(record, "[");
        case lcbr:
            return send_string_if_keydown(record, "{");
        case lprn:
            return send_string_if_keydown(record, "(");
        case perc:
            return send_string_if_keydown(record, "%");
        case pipe:
            return send_string_if_keydown(record, "|");
        case plus:
            return send_string_if_keydown(record, "+");
        case rbrc:
            return send_string_if_keydown(record, "]");
        case rcbr:
            return send_string_if_keydown(record, "}");
        case rprn:
            return send_string_if_keydown(record, ")");
        case tild:
            return send_string_if_keydown(record, "~");
        case undr:
            return send_string_if_keydown(record, "_");
  }
  return true;
}
