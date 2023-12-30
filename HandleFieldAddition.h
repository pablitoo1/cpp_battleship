#pragma once
#include "Board.h"
#include "Menu.h"
#include "Ship5.h"
#include "Ship4.h"
#include "Ship3.h"
#include "Ship2.h"
#include "Ship1.h"
#include "OccupiedField.h"
#include "HandleGame.h"
#include <SFML/Graphics.hpp>
#include <ctime>
#include <stdlib.h>

class HandleFieldAddition
{
public:
    void handleShip5(sf::Event& event, Ship5& ship5, OccupiedField& occupiedField, Board& board, Menu& menu);
    void handleShip4(sf::Event& event, Ship4& ship4, OccupiedField& occupiedField, Board& board, Menu& menu);
    void handleShip3(sf::Event& event, Ship3& ship3, OccupiedField& occupiedField, Board& board, Menu& menu);
    void handleShip2(sf::Event& event, Ship2& ship2, OccupiedField& occupiedField, Board& board, Menu& menu);
    void handleShip1(sf::Event& event, Ship1& ship1, OccupiedField& occupiedField, Board& board, Menu& menu);
    void handleCancelChanges5(Ship5& ship5, Board& board, HandleGame& handleGame, Menu& menu);
    void handleCancelChanges4(Ship4& ship4, Board& board, HandleGame& handleGame, Menu& menu);
    void handleCancelChanges3(Ship3& ship3, Board& board, HandleGame& handleGame, Menu& menu);
    void handleCancelChanges2(Ship2& ship2, Board& board);
    void handleCancelChanges1(Ship1& ship1, Board& board);
    void handleAcceptChanges5(Ship5& ship5, OccupiedField& occupiedField);
    void handleAcceptChanges4(Ship4& ship4, OccupiedField& occupiedField);
    void handleAcceptChanges3(Ship3& ship3, OccupiedField& occupiedField);
    void handleAcceptChanges2(Ship2& ship2, OccupiedField& occupiedField);
    void handleAcceptChanges1(Ship1& ship1, OccupiedField& occupiedField);
    void handleShip5Computer(Ship5& ship5, OccupiedField& occupiedField, Board& board, HandleGame& handleGame, Menu& menu);
    void handleShip4Computer(Ship4& ship4, OccupiedField& occupiedField, Board& board, HandleGame& handleGame, Menu& menu);
    void handleShip3Computer(Ship3& ship3, OccupiedField& occupiedField, Board& board, HandleGame& handleGame, Menu& menu);
    void handleShip2Computer(Ship2& ship2, OccupiedField& occupiedField, Board& board);
    void handleShip1Computer(Ship1& ship1, OccupiedField& occupiedField, Board& board);
    void handleShip5Random(Ship5& ship5, OccupiedField& occupiedField, Board& board, Menu& menu, HandleGame& handleGame);
    void handleShip4Random(Ship4& ship4, OccupiedField& occupiedField, Board& board, Menu& menu, HandleGame& handleGame);
    void handleShip3Random(Ship3& ship3, OccupiedField& occupiedField, Board& board, Menu& menu, HandleGame& handleGame);
    void handleShip2Random(Ship2& ship2, OccupiedField& occupiedField, Board& board, Menu& menu);
    void handleShip1Random(Ship1& ship1, OccupiedField& occupiedField, Board& board, Menu& menu);
};