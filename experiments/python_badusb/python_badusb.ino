// [ ===== Created using duckify.huhn.me @ dev aadd7808 ===== ] //
// Duckify is a free and Open-Source web-app for converting Ducky Script into Arduino code.
// Please consider supporting us on ko-fi.com/spacehuhn <3
// Learn more about us at spacehuhn.com

// Platform: Digispark
// Keyboard Layout: US

#include "DigiKeyboard.h"

// notepad
const uint8_t key_arr_0[] PROGMEM = {0,17, 0,18, 0,23, 0,8, 0,19, 0,4, 0,7};
// print("hello world")
const uint8_t key_arr_1[] PROGMEM = {0,19, 0,21, 0,12, 0,17, 0,23, 2,38, 2,52, 0,11, 0,8, 0,15, 0,15, 0,18, 0,44, 0,26, 0,18, 0,21, 0,15, 0,7, 2,52, 2,39};
// badusb.py
const uint8_t key_arr_2[] PROGMEM = {0,5, 0,4, 0,7, 0,24, 0,22, 0,5, 0,55, 0,19, 0,28};
// cmd
const uint8_t key_arr_3[] PROGMEM = {0,6, 0,16, 0,7};
// cd OneDrivebslashDesktop
const uint8_t key_arr_4[] PROGMEM = {0,6, 0,7, 0,44, 2,18, 0,17, 0,8, 2,7, 0,21, 0,12, 0,25, 0,8, 0,49, 2,7, 0,8, 0,22, 0,14, 0,23, 0,18, 0,19};
// python badusb.py
const uint8_t key_arr_5[] PROGMEM = {0,19, 0,28, 0,23, 0,11, 0,18, 0,17, 0,44, 0,5, 0,4, 0,7, 0,24, 0,22, 0,5, 0,55, 0,19, 0,28};

void duckyString(const uint8_t* keys, size_t len) {  
    for(size_t i=0; i<len; i+=2) {
        DigiKeyboard.sendKeyStroke(pgm_read_byte_near(keys + i+1), pgm_read_byte_near(keys + i));
    }
}

void setup() {
    pinMode(1, OUTPUT); // Enable LED
    digitalWrite(1, LOW); // Turn LED off
    DigiKeyboard.sendKeyStroke(0); // Tell computer no key is pressed

    DigiKeyboard.delay(1000); // DELAY 1000
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(21, 8); // GUI r
    DigiKeyboard.delay(500);
    duckyString(key_arr_0, sizeof(key_arr_0)); // STRING notepad
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
    duckyString(key_arr_1, sizeof(key_arr_1)); // STRING print("hello world")
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(22, 1); // CONTROL s
    DigiKeyboard.delay(500);
    duckyString(key_arr_2, sizeof(key_arr_2)); // STRING badusb.py
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(21, 8); // GUI r
    DigiKeyboard.delay(500);
    duckyString(key_arr_3, sizeof(key_arr_3)); // STRING cmd
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
    duckyString(key_arr_4, sizeof(key_arr_4)); // STRING cd OneDrivebslashDesktop
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
    duckyString(key_arr_5, sizeof(key_arr_5)); // STRING python badusb.py
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
}

void loop() {}

// Created using duckify.huhn.me @ dev aadd7808
