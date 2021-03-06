#include <Arduboy2.h>
#include <Arduino.h>






namespace RoomWallLayoutData {
    // Zero walls
    const uint8_t Zero[] PROGMEM = {
        8, 8,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    };
    
    // One wall
    const uint8_t OneLeft[] PROGMEM = {
        8, 8,
        0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    };
    const uint8_t OneRight[] PROGMEM = {
        8, 8,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
    };
    const uint8_t OneUp[] PROGMEM = {
        8, 8,
        0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
    };
    const uint8_t OneDown[] PROGMEM = {
        8, 8,
        0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 
    };

    // Two walls
    const uint8_t TwoLeftDown[] PROGMEM = {
        8, 8,
        0x00, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 
    };
    const uint8_t TwoLeftRight[] PROGMEM = {
        8, 8,
        0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
    };
    const uint8_t TwoLeftUp[] PROGMEM = {
        8, 8,
        0x00, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
    };
    const uint8_t TwoRightDown[] PROGMEM = {
        8, 8,
        0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x00, 
    };
    const uint8_t TwoRightUp[] PROGMEM = {
        8, 8,
        0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x00, 
    };
    const uint8_t TwoUpDown[] PROGMEM = {
        8, 8,
        0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 
    };

    // Three Walls
    const uint8_t ThreeLeftRightDown[] PROGMEM = {
        8, 8,
        0x00, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x00, 
    };
    const uint8_t ThreeLeftRightUp[] PROGMEM = {
        8, 8,
        0x00, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x00, 
    };
    const uint8_t ThreeLeftUpDown[] PROGMEM = {
        8, 8,
        0x00, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 
    };
    const uint8_t ThreeRightUpDown[] PROGMEM = {
        8, 8,
        0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x00, 
    };

    
    const uint8_t Four[] PROGMEM = {
        8, 8,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    };

}
















//End
