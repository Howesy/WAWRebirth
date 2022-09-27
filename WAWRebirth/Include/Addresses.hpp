#pragma once
#include <cstdint>

namespace WAW
{
	namespace Player
	{
		const uintptr_t localPlayer = 0x018ED068;
		const ptrdiff_t playerPointsOffset = 0x20BC;
		const ptrdiff_t playerKillsOffset = 0x20C0;
		const ptrdiff_t playerHeadshotsOffset = 0x20D0;
		const ptrdiff_t playerDownsOffset = 0x20C8;
	}
}