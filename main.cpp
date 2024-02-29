#include "Game.h"
#pragma comment (linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")

//WinMain() not working, maybe need to change some in project properties
int main() {
	Game game;
	game.run();

	return 0;
}