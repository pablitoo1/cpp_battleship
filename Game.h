#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <ctime>
#include <cstdlib>
#include "Board.h"
#include "Menu.h"
#include "Ship5.h"
#include "Ship4.h"
#include "Ship3.h"
#include "Ship2.h"
#include "Ship1.h"
#include "OccupiedField.h"
#include "HandleFieldAddition.h"
#include "ReworkedVersion.h"
#include "ClassicVersion.h"
#include "HandleGame.h"
#include "HandleSunkShip.h"
#include "HandleCustomShips.h"

class Game
{
public:
	void run();
private:
    void restartGame();
    bool restart = false;
    sf::Image icon;
    sf::Music music;
    sf::Sound sound;
    sf::SoundBuffer buffer;
    sf::Sound soundEnd;
    sf::SoundBuffer bufferEnd;
    sf::Event event;
    sf::Clock computerShootClock;
    Board board;
    Menu menu;
    HandleCustomShips handleCustomShips;
    HandleGame handleGame;
    Ship5 first5, first5Computer;
    Ship5 second5, second5Computer;
    Ship5 third5, third5Computer;
    Ship5 fourth5, fourth5Computer;
    Ship5 fifth5, fifth5Computer;
    Ship4 first4, first4Computer;
    Ship4 second4, second4Computer;
    Ship4 third4, third4Computer;
    Ship4 fourth4, fourth4Computer;
    Ship4 fifth4, fifth4Computer;
    Ship3 first3, first3Computer;
    Ship3 second3, second3Computer;
    Ship3 third3, third3Computer;
    Ship3 fourth3, fourth3Computer;
    Ship3 fifth3, fifth3Computer;
    Ship2 first2, first2Computer;
    Ship2 second2, second2Computer;
    Ship2 third2, third2Computer;
    Ship2 fourth2, fourth2Computer;
    Ship2 fifth2, fifth2Computer;
    Ship1 first1, first1Computer;
    Ship1 second1, second1Computer;
    Ship1 third1, third1Computer;
    Ship1 fourth1, fourth1Computer;
    Ship1 fifth1, fifth1Computer;
    OccupiedField occupiedField, occupiedFieldComputer;
    HandleFieldAddition handleFieldAddition;
    ReworkedVersion reworkedVersion;
    ClassicVersion classicVersion;
    HandleSunkShip handleSunkShip;
};