#include "Game.h"
#pragma comment (linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")

int main() {
	Game game;
	game.run();

	return 0;
}