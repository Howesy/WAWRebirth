#include <Windows.h>
#include <Player.hpp>
#include <Addresses.hpp>

DWORD WINAPI DllEntry(LPVOID lpArgument)
{
	const auto player = reinterpret_cast<Player*>(WAW::Player::localPlayer);
	player->maxOutStats();
	return 0;
}

BOOL APIENTRY DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpvReserved)
{
	if (dwReason == DLL_PROCESS_ATTACH)
		CreateThread(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(DllEntry), nullptr, 0, nullptr);

	return TRUE;
}