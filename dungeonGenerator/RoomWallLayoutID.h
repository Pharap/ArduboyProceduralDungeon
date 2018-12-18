#pragma once

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

constexpr inline RoomWallLayoutID operator |(RoomWallLayoutID left, RoomWallLayoutID right)
{
	return static_cast<RoomWallLayoutID>(static_cast<uint8_t>(left) | static_cast<uint8_t>(right));
}

inline RoomWallLayoutID & operator |=(RoomWallLayoutID & left, RoomWallLayoutID right)
{
	left = (left | right);
	return left;
}

constexpr inline RoomWallLayoutID operator &(RoomWallLayoutID left, RoomWallLayoutID right)
{
	return static_cast<RoomWallLayoutID>(static_cast<uint8_t>(left) & static_cast<uint8_t>(right));
}

inline RoomWallLayoutID & operator &=(RoomWallLayoutID & left, RoomWallLayoutID right)
{
	left = (left & right);
	return left;
}

constexpr inline RoomWallLayoutID operator ^(RoomWallLayoutID left, RoomWallLayoutID right)
{
	return static_cast<RoomWallLayoutID>(static_cast<uint8_t>(left) ^ static_cast<uint8_t>(right));
}

inline RoomWallLayoutID & operator ^=(RoomWallLayoutID & left, RoomWallLayoutID right)
{
	left = (left ^ right);
	return left;
}

inline bool hasWallLeft(RoomWallLayoutID layout)
{
	return ((layout & RoomWallLayoutID::OneLeft) != RoomWallLayoutID::Zero);
}

inline bool hasWallRight(RoomWallLayoutID layout)
{
	return ((layout & RoomWallLayoutID::OneRight) != RoomWallLayoutID::Zero);
}

inline bool hasWallUp(RoomWallLayoutID layout)
{
	return ((layout & RoomWallLayoutID::OneUp) != RoomWallLayoutID::Zero);
}

inline bool hasWallDown(RoomWallLayoutID layout)
{
	return ((layout & RoomWallLayoutID::OneDown) != RoomWallLayoutID::Zero);
}