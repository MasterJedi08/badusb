// [ ===== Created using duckify.huhn.me @ dev aadd7808 ===== ] //
// Duckify is a free and Open-Source web-app for converting Ducky Script into Arduino code.
// Please consider supporting us on ko-fi.com/spacehuhn <3
// Learn more about us at spacehuhn.com

// Platform: Digispark
// Keyboard Layout: US

#include "DigiKeyboard.h"

// https://www.youtube.com/watch?v=jIQ6UV2onyI
const uint8_t key_arr_0[] PROGMEM = {0,11, 0,23, 0,23, 0,19, 0,22, 2,51, 0,56, 0,56, 0,26, 0,26, 0,26, 0,55, 0,28, 0,18, 0,24, 0,23, 0,24, 0,5, 0,8, 0,55, 0,6, 0,18, 0,16, 0,56, 0,26, 0,4, 0,23, 0,6, 0,11, 2,56, 0,25, 0,46, 0,13, 2,12, 2,20, 0,35, 2,24, 2,25, 0,31, 0,18, 0,17, 0,28, 2,12};

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
    duckyString(key_arr_0, sizeof(key_arr_0)); // STRING https://www.youtube.com/watch?v=jIQ6UV2...
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
    DigiKeyboard.delay(1000); // DELAY 1000
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(44, 0); // SPACE
    DigiKeyboard.delay(500);
}

void loop() {}

// Created using duckify.huhn.me @ dev aadd7808
