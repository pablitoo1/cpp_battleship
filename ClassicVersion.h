#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>
#include <vector>
#include "Ship4.h"
#include "Ship3.h"
#include "Ship2.h"
#include "Ship1.h"
#include "HandleFieldAddition.h"
#include "Board.h"
#include "Menu.h"
#include "OccupiedField.h"
#include "HandleGame.h"
#include "HandleSunkShip.h"

class ClassicVersion
{
private:
	int lastHitPosition = 0;
	int computerShotPosition = 0;
	vector <int> hittedFields;
public:
	void resetAll();
	void handleClick(sf::Event& event, HandleFieldAddition& handleFieldAddition,
		Ship4& first4, Ship3& first3, Ship3& second3, Ship2& first2, Ship2& second2, Ship2& third2, Ship1& first1,
		Ship1& second1, Ship1& third1, Ship1& fourth1, Board& board, Menu& menu, OccupiedField& occupiedField);
	void showingMenu(sf::RenderWindow& window, Ship4& first4, Ship3& first3, Ship3& second3, Ship2& first2, 
		Ship2& second2, Ship2& third2, Ship1& first1, Ship1& second1, Ship1& third1, Ship1& fourth1, Menu& menu);
	void handleChanges(HandleFieldAddition& handleFieldAddition, Ship4& first4, Ship3& first3, Ship3& second3, 
		Ship2& first2, Ship2& second2, Ship2& third2, Ship1& first1, Ship1& second1, Ship1& third1, Ship1& fourth1, 
		Board& board, OccupiedField& occupiedField, HandleGame& handleGame, Menu& menu);
	void addingShipsComputer(HandleFieldAddition& handleFieldAddition, Ship1& fourth1, Ship4& first4Computer,
		Ship3& first3Computer, Ship3& second3Computer, Ship2& first2Computer, Ship2& second2Computer,
		Ship2& third2Computer, Ship1& first1Computer, Ship1& second1Computer, Ship1& third1Computer, 
		Ship1& fourth1Computer, Board& board, OccupiedField& occupiedFieldComputer, HandleGame& handleGame, Menu& menu);
	void shootingUser(sf::Event& event, sf::Sound& sound, sf::SoundBuffer& buffer, HandleGame& handleGame, Board& board, 
		Ship4& first4Computer, Ship3& first3Computer, Ship3& second3Computer, Ship2& first2Computer, Ship2& second2Computer,
		Ship2& third2Computer, Ship1& first1Computer, Ship1& second1Computer, Ship1& third1Computer, Ship1& fourth1Computer);
	void shootingComputer(sf::Event& event, sf::Sound& sound, sf::SoundBuffer& buffer, HandleGame& handleGame, Board& board, 
		Ship4& first4, Ship3& first3, Ship3& second3, Ship2& first2, Ship2& second2, Ship2& third2, Ship1& first1,
		Ship1& second1, Ship1& third1, Ship1& fourth1);
	void handleSunkShipShips(HandleSunkShip& handleSunkShip, HandleGame& handleGame, Board& board, Menu& menu,
		Ship4& first4, Ship3& first3, Ship3& second3, Ship2& first2, Ship2& second2, Ship2& third2, Ship1& first1,
		Ship1& second1, Ship1& third1, Ship1& fourth1);
	void handleSunkShipShipsComputer(HandleSunkShip& handleSunkShip, HandleGame& handleGame, Board& board, Menu& menu,
		Ship4& first4Computer, Ship3& first3Computer, Ship3& second3Computer, Ship2& first2Computer, Ship2& second2Computer,
		Ship2& third2Computer, Ship1& first1Computer, Ship1& second1Computer, Ship1& third1Computer, Ship1& fourth1Computer);
	void handleRandomShips(HandleFieldAddition& handleFieldAddition, OccupiedField& occupiedField, Board& board, Menu& menu,
		Ship4& first4, Ship3& first3, Ship3& second3, Ship2& first2, Ship2& second2, Ship2& third2, Ship1& first1,
		Ship1& second1, Ship1& third1, Ship1& fourth1, HandleGame& handleGame);
	void handleRandomShipsAll(HandleFieldAddition& handleFieldAddition, OccupiedField& occupiedField, Board& board, Menu& menu,
		Ship4& first4, Ship3& first3, Ship3& second3, Ship2& first2, Ship2& second2, Ship2& third2, Ship1& first1,
		Ship1& second1, Ship1& third1, Ship1& fourth1, HandleGame& handleGame);
	bool isUserWinner(Ship4& first4Computer, Ship3& first3Computer, Ship3& second3Computer, Ship2& first2Computer, Ship2& second2Computer,
		Ship2& third2Computer, Ship1& first1Computer, Ship1& second1Computer, Ship1& third1Computer, Ship1& fourth1Computer);
	bool isComputerWinner(Ship4& first4, Ship3& first3, Ship3& second3, Ship2& first2, Ship2& second2, Ship2& third2, Ship1& first1,
		Ship1& second1, Ship1& third1, Ship1& fourth1);
};