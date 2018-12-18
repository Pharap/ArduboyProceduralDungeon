#pragma once

#include <Arduino.h>
#include <Arduboy2.h>

#include "RoomWallLayoutID.h"

namespace DungeonGenerator {
        RoomWallLayoutID getRoomLayoutFromSeed(uint16_t xpos, uint16_t ypos);
        RoomWallLayoutID getRoomLayoutFromNeighbours(uint16_t xpos, uint16_t ypos);
};

class Dungeon {
    public:
        static constexpr uint8_t tileWidth = 8;
        static constexpr uint8_t tileHeight = 8;

        static constexpr uint8_t width = 16;
        static constexpr uint8_t height = 8;
        static constexpr uint8_t roomCount = width * height;
    public:
        RoomWallLayoutID rooms[roomCount] = {};
        uint16_t x = 0;
        uint16_t y = 0;
    public:
        void loadRooms(uint16_t xpos, uint16_t ypos);
        void draw();
        const uint8_t * getRoomImage(RoomWallLayoutID roomLayout);
        RoomWallLayoutID & getRoomLayoutAt(uint16_t xpos, uint16_t ypos);
};










//End
