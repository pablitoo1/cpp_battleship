#include "Game.h"
#pragma comment (linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")

//WinMain() not working
int main() {
	Game game;
	game.run();

	return 0;
}