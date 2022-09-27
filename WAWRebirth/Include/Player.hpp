#pragma once
#include <cstdint>
#include <Vector3.hpp>

class Player
{
	char pad_0000[32]; //0x0000
	Vector3 position; //0x0020
	char pad_002C[8336]; //0x002C
	int32_t points; //0x20BC
	int32_t kills; //0x20C0
	char pad_20C4[4]; //0x20C4
	int32_t downs; //0x20C8
	char pad_20CC[4]; //0x20CC
	int32_t headshots; //0x20D0
	char pad_20D4[3932]; //0x20D4

public:
	uintptr_t get();
	Player(uintptr_t player);
	void setPoints(int32_t value);
	void setKills(int32_t value);
	void setHeadshots(int32_t value);
	void setDowns(int32_t value);
	void maxOutStats();
private:
	uintptr_t player;
};