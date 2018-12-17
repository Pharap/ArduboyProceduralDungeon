#pragma once

#include <Arduino.h>
#include <Arduboy2.h>



enum class RoomWallLayoutID : uint8_t {
    Zero = 0,
    OneLeft = 0b1000,
    OneRight = 0b0100,
    OneUp = 0b0010,
    OneDown = 0b0001,
    
    TwoLeftRight = 0b1100,
    TwoLeftUp = 0b1010,
    TwoLeftDown = 0b1001,
    TwoUpDown = 0b0011,
    TwoRightUp = 0b0110,
    TwoRightDown = 0b0101,
    
    ThreeLeftRightDown = 0b1101,
    ThreeLeftRightUp = 0b1110,
    ThreeLeftUpDown = 0b1011,
    ThreeRightUpDown = 0b0111,

    Four = 0b1111
};

class Dungeon {
    public:
        uint8_t rooms[16*8] = {0};
        int16_t x = 0;
        int16_t y = 0;
    public:
        uint8_t getRoomLayoutFromSeed(int16_t xpos, int16_t ypos);
        uint8_t getRoomLayoutFromNeighbours(int16_t xpos, int16_t ypos);
        bool wallLeft(int16_t xpos, int16_t ypos);
        bool wallRight(int16_t xpos, int16_t ypos);
        bool wallUp(int16_t xpos, int16_t ypos);
        bool wallDown(int16_t xpos, int16_t ypos);
        void loadRooms(int16_t xpos, int16_t ypos);
        void draw();
        const uint8_t * getRoomImage(uint8_t roomLayout);
};










//End
