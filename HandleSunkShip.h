#pragma once
#include "HandleGame.h"
#include "Board.h"
#include "Menu.h"
#include "Ship5.h"
#include "Ship4.h"
#include "Ship3.h"
#include "Ship2.h"
#include "Ship1.h"

class HandleSunkShip
{
public:
	void handleSunkShip5(HandleGame& handleGame, Board& board, Menu& menu,Ship5& ship5);
	void handleSunkShip4(HandleGame& handleGame, Board& board, Menu& menu, Ship4& ship4);
	void handleSunkShip3(HandleGame& handleGame, Board& board, Menu& menu, Ship3& ship3);
	void handleSunkShip2(HandleGame& handleGame, Board& board, Menu& menu, Ship2& ship2);
	void handleSunkShip1(HandleGame& handleGame, Board& board, Menu& menu, Ship1& ship1);
	void handleSunkShip5Computer(HandleGame& handleGame, Board& board, Menu& menu, Ship5& ship5);
	void handleSunkShip4Computer(HandleGame& handleGame, Board& board, Menu& menu, Ship4& ship4);
	void handleSunkShip3Computer(HandleGame& handleGame, Board& board, Menu& menu, Ship3& ship3);
	void handleSunkShip2Computer(HandleGame& handleGame, Board& board, Menu& menu, Ship2& ship2);
	void handleSunkShip1Computer(HandleGame& handleGame, Board& board, Menu& menu, Ship1& ship1);
};

