#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>
#include <vector>
#include "Ship5.h"
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
#include "HandleCustomShips.h"

class ReworkedVersion
{
private:
	int lastHitPosition = 0;
	int computerShotPosition = 0;
	vector <int> hittedFields;
	int number5 = 0;
	int number4 = 1;
	int number3 = 2;
	int number2 = 3;
	int number1 = 4;
public:
	void resetAll();
	void setNumbers(HandleCustomShips& handleCustomShips, Menu& menu);
	void handleClick(sf::Event& event, HandleFieldAddition& handleFieldAddition, 
		Ship5& first5, Ship5& second5, Ship5& third5, Ship5& fourth5, Ship5& fifth5, 
		Ship4& first4, Ship4& second4, Ship4& third4, Ship4& fourth4, Ship4& fifth4, 
		Ship3& first3, Ship3& second3, Ship3& third3, Ship3& fourth3, Ship3& fifth3,
		Ship2& first2, Ship2& second2, Ship2& third2, Ship2& fourth2, Ship2& fifth2,
		Ship1& first1, Ship1& second1, Ship1& third1, Ship1& fourth1, Ship1& fifth1,
		Board& board, Menu& menu, OccupiedField& occupiedField);
	void showingMenu(sf::RenderWindow& window, 
		Ship5& first5, Ship5& second5, Ship5& third5, Ship5& fourth5, Ship5& fifth5,
		Ship4& first4, Ship4& second4, Ship4& third4, Ship4& fourth4, Ship4& fifth4,
		Ship3& first3, Ship3& second3, Ship3& third3, Ship3& fourth3, Ship3& fifth3,
		Ship2& first2, Ship2& second2, Ship2& third2, Ship2& fourth2, Ship2& fifth2,
		Ship1& first1, Ship1& second1, Ship1& third1, Ship1& fourth1, Ship1& fifth1, Menu& menu);
	void handleChanges(HandleFieldAddition& handleFieldAddition, 
		Ship5& first5, Ship5& second5, Ship5& third5, Ship5& fourth5, Ship5& fifth5,
		Ship4& first4, Ship4& second4, Ship4& third4, Ship4& fourth4, Ship4& fifth4,
		Ship3& first3, Ship3& second3, Ship3& third3, Ship3& fourth3, Ship3& fifth3,
		Ship2& first2, Ship2& second2, Ship2& third2, Ship2& fourth2, Ship2& fifth2,
		Ship1& first1, Ship1& second1, Ship1& third1, Ship1& fourth1, Ship1& fifth1, 
		Board& board, OccupiedField& occupiedField, HandleGame& handleGame, Menu& menu);
	void addingShipsComputer(HandleFieldAddition& handleFieldAddition,
		Ship5& first5Computer, Ship5& second5Computer, Ship5& third5Computer, Ship5& fourth5Computer, Ship5& fifth5Computer, 
		Ship4& first4Computer, Ship4& second4Computer, Ship4& third4Computer, Ship4& fourth4Computer, Ship4& fifth4Computer, 
		Ship3& first3Computer, Ship3& second3Computer, Ship3& third3Computer, Ship3& fourth3Computer, Ship3& fifth3Computer,
		Ship2& first2Computer, Ship2& second2Computer, Ship2& third2Computer, Ship2& fourth2Computer, Ship2& fifth2Computer,
		Ship1& first1Computer, Ship1& second1Computer, Ship1& third1Computer, Ship1& fourth1Computer, Ship1& fifth1Computer,
		Board& board, OccupiedField& occupiedFieldComputer, HandleGame& handleGame, Menu& menu);
	void shootingUser(sf::Event& event, sf::Sound& sound, sf::SoundBuffer& buffer, HandleGame& handleGame, Board& board, 
		Ship5& first5Computer, Ship5& second5Computer, Ship5& third5Computer, Ship5& fourth5Computer, Ship5& fifth5Computer,
		Ship4& first4Computer, Ship4& second4Computer, Ship4& third4Computer, Ship4& fourth4Computer, Ship4& fifth4Computer,
		Ship3& first3Computer, Ship3& second3Computer, Ship3& third3Computer, Ship3& fourth3Computer, Ship3& fifth3Computer,
		Ship2& first2Computer, Ship2& second2Computer, Ship2& third2Computer, Ship2& fourth2Computer, Ship2& fifth2Computer,
		Ship1& first1Computer, Ship1& second1Computer, Ship1& third1Computer, Ship1& fourth1Computer, Ship1& fifth1Computer);
	void shootingComputer(sf::Event& event, sf::Sound& sound, sf::SoundBuffer& buffer, HandleGame& handleGame, Board& board, Menu& menu, 
		Ship5& first5, Ship5& second5, Ship5& third5, Ship5& fourth5, Ship5& fifth5,
		Ship4& first4, Ship4& second4, Ship4& third4, Ship4& fourth4, Ship4& fifth4,
		Ship3& first3, Ship3& second3, Ship3& third3, Ship3& fourth3, Ship3& fifth3,
		Ship2& first2, Ship2& second2, Ship2& third2, Ship2& fourth2, Ship2& fifth2,
		Ship1& first1, Ship1& second1, Ship1& third1, Ship1& fourth1, Ship1& fifth1);
	void handleSunkShipShips(HandleSunkShip& handleSunkShip, HandleGame& handleGame, Board& board, Menu& menu, 
		Ship5& first5, Ship5& second5, Ship5& third5, Ship5& fourth5, Ship5& fifth5,
		Ship4& first4, Ship4& second4, Ship4& third4, Ship4& fourth4, Ship4& fifth4,
		Ship3& first3, Ship3& second3, Ship3& third3, Ship3& fourth3, Ship3& fifth3,
		Ship2& first2, Ship2& second2, Ship2& third2, Ship2& fourth2, Ship2& fifth2,
		Ship1& first1, Ship1& second1, Ship1& third1, Ship1& fourth1, Ship1& fifth1);
	void handleSunkShipShipsComputer(HandleSunkShip& handleSunkShip, HandleGame& handleGame, Board& board, Menu& menu,
		Ship5& first5Computer, Ship5& second5Computer, Ship5& third5Computer, Ship5& fourth5Computer, Ship5& fifth5Computer,
		Ship4& first4Computer, Ship4& second4Computer, Ship4& third4Computer, Ship4& fourth4Computer, Ship4& fifth4Computer,
		Ship3& first3Computer, Ship3& second3Computer, Ship3& third3Computer, Ship3& fourth3Computer, Ship3& fifth3Computer,
		Ship2& first2Computer, Ship2& second2Computer, Ship2& third2Computer, Ship2& fourth2Computer, Ship2& fifth2Computer,
		Ship1& first1Computer, Ship1& second1Computer, Ship1& third1Computer, Ship1& fourth1Computer, Ship1& fifth1Computer);
	void handleRandomShips(HandleFieldAddition& handleFieldAddition, OccupiedField& occupiedField, Board& board, Menu& menu,
		Ship5& first5, Ship5& second5, Ship5& third5, Ship5& fourth5, Ship5& fifth5,
		Ship4& first4, Ship4& second4, Ship4& third4, Ship4& fourth4, Ship4& fifth4,
		Ship3& first3, Ship3& second3, Ship3& third3, Ship3& fourth3, Ship3& fifth3,
		Ship2& first2, Ship2& second2, Ship2& third2, Ship2& fourth2, Ship2& fifth2,
		Ship1& first1, Ship1& second1, Ship1& third1, Ship1& fourth1, Ship1& fifth1, HandleGame& handleGame);
	void handleRandomShipsAll(HandleFieldAddition& handleFieldAddition, OccupiedField& occupiedField, Board& board, Menu& menu,
		Ship5& first5, Ship5& second5, Ship5& third5, Ship5& fourth5, Ship5& fifth5,
		Ship4& first4, Ship4& second4, Ship4& third4, Ship4& fourth4, Ship4& fifth4,
		Ship3& first3, Ship3& second3, Ship3& third3, Ship3& fourth3, Ship3& fifth3,
		Ship2& first2, Ship2& second2, Ship2& third2, Ship2& fourth2, Ship2& fifth2,
		Ship1& first1, Ship1& second1, Ship1& third1, Ship1& fourth1, Ship1& fifth1, HandleGame& handleGame);
	bool isUserWinner(Ship5& first5Computer, Ship5& second5Computer, Ship5& third5Computer, Ship5& fourth5Computer, Ship5& fifth5Computer,
		Ship4& first4Computer, Ship4& second4Computer, Ship4& third4Computer, Ship4& fourth4Computer, Ship4& fifth4Computer,
		Ship3& first3Computer, Ship3& second3Computer, Ship3& third3Computer, Ship3& fourth3Computer, Ship3& fifth3Computer,
		Ship2& first2Computer, Ship2& second2Computer, Ship2& third2Computer, Ship2& fourth2Computer, Ship2& fifth2Computer,
		Ship1& first1Computer, Ship1& second1Computer, Ship1& third1Computer, Ship1& fourth1Computer, Ship1& fifth1Computer);
	bool isComputerWinner(Ship5& first5, Ship5& second5, Ship5& third5, Ship5& fourth5, Ship5& fifth5,
		Ship4& first4, Ship4& second4, Ship4& third4, Ship4& fourth4, Ship4& fifth4,
		Ship3& first3, Ship3& second3, Ship3& third3, Ship3& fourth3, Ship3& fifth3,
		Ship2& first2, Ship2& second2, Ship2& third2, Ship2& fourth2, Ship2& fifth2,
		Ship1& first1, Ship1& second1, Ship1& third1, Ship1& fourth1, Ship1& fifth1);
	void winSound(sf::SoundBuffer& buffer, sf::Sound& sound);
	void lossSound(sf::SoundBuffer& buffer, sf::Sound& sound);
};