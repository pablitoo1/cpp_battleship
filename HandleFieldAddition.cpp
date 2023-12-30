#include "HandleFieldAddition.h"

void HandleFieldAddition::handleShip5(sf::Event& event, Ship5& ship5, OccupiedField& occupiedField, Board& board, Menu& menu) {
    if (ship5.numberOfFields() < 5 && !ship5.isAdded && !occupiedField.isPositionOccupied(board.getPosition(event), occupiedField.getOccupiedFields())) {
        ship5.addField(board.getPosition(event));
        board.update(board.getPosition(event));
    }
    if (ship5.numberOfFields() == 5 && !ship5.isAdded) {
        menu.isClicked = false;
    }
}

void HandleFieldAddition::handleShip4(sf::Event& event, Ship4& ship4, OccupiedField& occupiedField, Board& board, Menu& menu) {
    if (ship4.numberOfFields() < 4 && !ship4.isAdded && !occupiedField.isPositionOccupied(board.getPosition(event), occupiedField.getOccupiedFields())) {
        ship4.addField(board.getPosition(event));
        board.update(board.getPosition(event));
    }
    if (ship4.numberOfFields() == 4 && !ship4.isAdded) {
        menu.isClicked = false;
    }
}

void HandleFieldAddition::handleShip3(sf::Event& event, Ship3& ship3, OccupiedField& occupiedField, Board& board, Menu& menu) {
    if (ship3.numberOfFields() < 3 && !ship3.isAdded && !occupiedField.isPositionOccupied(board.getPosition(event), occupiedField.getOccupiedFields())) {
        ship3.addField(board.getPosition(event));
        board.update(board.getPosition(event));
    }
    if (ship3.numberOfFields() == 3 && !ship3.isAdded) {
        menu.isClicked = false;
    }
}

void HandleFieldAddition::handleShip2(sf::Event& event, Ship2& ship2, OccupiedField& occupiedField, Board& board, Menu& menu) {
    if (ship2.numberOfFields() < 2 && !ship2.isAdded && !occupiedField.isPositionOccupied(board.getPosition(event), occupiedField.getOccupiedFields())) {
        ship2.addField(board.getPosition(event));
        board.update(board.getPosition(event));
    }
    if (ship2.numberOfFields() == 2 && !ship2.isAdded) {
        menu.isClicked = false;
    }
}

void HandleFieldAddition::handleShip1(sf::Event& event, Ship1& ship1, OccupiedField& occupiedField, Board& board, Menu& menu) {
    if (ship1.numberOfFields() < 1 && !ship1.isAdded && !occupiedField.isPositionOccupied(board.getPosition(event), occupiedField.getOccupiedFields())) {
        ship1.addField(board.getPosition(event));
        board.update(board.getPosition(event));
    }
    if (ship1.numberOfFields() == 1 && !ship1.isAdded) {
        menu.isClicked = false;
    }
}

void HandleFieldAddition::handleCancelChanges5(Ship5& ship5, Board& board, HandleGame& handleGame, Menu& menu) {
    if (!ship5.isFieldsOK(handleGame, menu) && ship5.numberOfFields() == 5) {
        board.cancelUpdate(ship5.getFields());
        ship5.deleteField();
    }
}

void HandleFieldAddition::handleCancelChanges4(Ship4& ship4, Board& board, HandleGame& handleGame, Menu& menu) {
    if (!ship4.isFieldsOK(handleGame, menu) && ship4.numberOfFields() == 4) {
        board.cancelUpdate(ship4.getFields());
        ship4.deleteField();
    }
}

void HandleFieldAddition::handleCancelChanges3(Ship3& ship3, Board& board, HandleGame& handleGame, Menu& menu) {
    if (!ship3.isFieldsOK(handleGame, menu) && ship3.numberOfFields() == 3) {
        board.cancelUpdate(ship3.getFields());
        ship3.deleteField();
    }
}

void HandleFieldAddition::handleCancelChanges2(Ship2& ship2, Board& board) {
    if (!ship2.isFieldsOK() && ship2.numberOfFields() == 2) {
        board.cancelUpdate(ship2.getFields());
        ship2.deleteField();
    }
}

void HandleFieldAddition::handleCancelChanges1(Ship1& ship1, Board& board) {
    if (!ship1.isFieldsOK() && ship1.numberOfFields() == 1) {
        board.cancelUpdate(ship1.getFields());
        ship1.deleteField();
    }
}

void HandleFieldAddition::handleAcceptChanges5(Ship5& ship5, OccupiedField& occupiedField) {
    occupiedField.addOccupiedField(ship5.getFields());
    ship5.isAdded = true;
}

void HandleFieldAddition::handleAcceptChanges4(Ship4& ship4, OccupiedField& occupiedField) {
    occupiedField.addOccupiedField(ship4.getFields());
    ship4.isAdded = true;
}
void HandleFieldAddition::handleAcceptChanges3(Ship3& ship3, OccupiedField& occupiedField) {
    occupiedField.addOccupiedField(ship3.getFields());
    ship3.isAdded = true;
}

void HandleFieldAddition::handleAcceptChanges2(Ship2& ship2, OccupiedField& occupiedField) {
    occupiedField.addOccupiedField(ship2.getFields());
    ship2.isAdded = true;
}

void HandleFieldAddition::handleAcceptChanges1(Ship1& ship1, OccupiedField& occupiedField) {
    occupiedField.addOccupiedField(ship1.getFields());
    ship1.isAdded = true;
}

void HandleFieldAddition::handleShip5Computer(Ship5& ship5, OccupiedField& occupiedField, Board& board, HandleGame& handleGame, Menu& menu){
    srand(static_cast<unsigned>(time(nullptr)));
    do {
        for (int i = 0; i < 5; i++) {
          int field = (rand() % 100) + 1;
          ship5.addField(field);
        }        
        if ((!ship5.isFieldsOK(handleGame, menu) && ship5.numberOfFields() == 5) || occupiedField.isPositionOccupiedComputer(ship5.getFields())) {
            ship5.deleteField();
        }
    } while (!ship5.isFieldsOK(handleGame, menu));
    ship5.isAdded = true;
    occupiedField.addOccupiedField(ship5.getFields());
    for (int i = 0; i < 5;i++) {
        //board.updateComputer(ship5.getField(i));
    }
}

void HandleFieldAddition::handleShip4Computer(Ship4& ship4, OccupiedField& occupiedField, Board& board, HandleGame& handleGame, Menu& menu) {
    srand(static_cast<unsigned>(time(nullptr)));
    do {
        for (int i = 0; i < 4; i++) {
            int field = (rand() % 100) + 1;
            ship4.addField(field);
        }
        if ((!ship4.isFieldsOK(handleGame, menu) && ship4.numberOfFields() == 4) || occupiedField.isPositionOccupiedComputer(ship4.getFields())) {
            ship4.deleteField();
        }
    } while (!ship4.isFieldsOK(handleGame, menu) || occupiedField.isPositionOccupiedComputer(ship4.getFields()));
    ship4.isAdded = true;
    occupiedField.addOccupiedField(ship4.getFields());
    for (int i = 0; i < 4;i++) {
        //board.updateComputer(ship4.getField(i));
    }
}

void HandleFieldAddition::handleShip3Computer(Ship3& ship3, OccupiedField& occupiedField, Board& board, HandleGame& handleGame, Menu& menu) {
    srand(static_cast<unsigned>(time(nullptr)));
    do {
        for (int i = 0; i < 3; i++) {
            int field = (rand() % 100) + 1;
            ship3.addField(field);
        }
        if ((!ship3.isFieldsOK(handleGame, menu) && ship3.numberOfFields() == 3) || occupiedField.isPositionOccupiedComputer(ship3.getFields())) {
            ship3.deleteField();
        }
    } while (!ship3.isFieldsOK(handleGame, menu) || occupiedField.isPositionOccupiedComputer(ship3.getFields()));
    ship3.isAdded = true;
    occupiedField.addOccupiedField(ship3.getFields());
    for (int i = 0; i < 3;i++) {
        //board.updateComputer(ship3.getField(i));
    }
}

void HandleFieldAddition::handleShip2Computer(Ship2& ship2, OccupiedField& occupiedField, Board& board) {
    srand(static_cast<unsigned>(time(nullptr)));
    do {
        for (int i = 0; i < 2; i++) {
            int field = (rand() % 100) + 1;
            ship2.addField(field);
        }
        if ((!ship2.isFieldsOK() && ship2.numberOfFields() == 2) || occupiedField.isPositionOccupiedComputer(ship2.getFields())) {
            ship2.deleteField();
        }
    } while (!ship2.isFieldsOK() || occupiedField.isPositionOccupiedComputer(ship2.getFields()));
    ship2.isAdded = true;
    occupiedField.addOccupiedField(ship2.getFields());
    for (int i = 0; i < 2; i++) {
        //board.updateComputer(ship2.getField(i));
    }
}

void HandleFieldAddition::handleShip1Computer(Ship1& ship1, OccupiedField& occupiedField, Board& board) {
    srand(static_cast<unsigned>(time(nullptr)));
    do {
        for (int i = 0; i < 1; i++) {
            int field = (rand() % 100) + 1;
            ship1.addField(field);
        }
        if ((!ship1.isFieldsOK() && ship1.numberOfFields() == 1) || occupiedField.isPositionOccupiedComputer(ship1.getFields())) {
            ship1.deleteField();
        }
    } while (!ship1.isFieldsOK() || occupiedField.isPositionOccupiedComputer(ship1.getFields()));
    ship1.isAdded = true;
    occupiedField.addOccupiedField(ship1.getFields());
    for (int i = 0; i < 1; i++) {
        //board.updateComputer(ship1.getField(i));
    }
}

void HandleFieldAddition::handleShip5Random(Ship5& ship5, OccupiedField& occupiedField, Board& board, Menu& menu, HandleGame& handleGame) {
    srand(static_cast<unsigned>(time(nullptr)));
    do {
        int field;
        do {
            field = (rand() % 100) + 1;
        } while (occupiedField.isPositionOccupied(field, occupiedField.getOccupiedFields()));
        ship5.addField(field);
        for (int i = 0; i < 4; i++) {
            int randomNumber = rand() % 4;
            switch (randomNumber) {
            case 0:
                if (field + 1 > 0 && field + 1 <= 100) {
                    if (!occupiedField.isPositionOccupied(field + 1, occupiedField.getOccupiedFields())) {
                        ship5.addField(field + 1);
                    }
                }
                field = field + 1;
                break;
            case 1:
                if (field - 1 > 0 && field - 1 <= 100) {
                    if (!occupiedField.isPositionOccupied(field - 1, occupiedField.getOccupiedFields())) {
                        ship5.addField(field - 1);
                    }
                }
                field = field - 1;
                break;
            case 2:
                if (field + 10 > 0 && field + 10 <= 100) {
                    if (!occupiedField.isPositionOccupied(field + 10, occupiedField.getOccupiedFields())) {
                        ship5.addField(field + 10);
                    }
                }
                field = field + 10;
                break;
            case 3:
                if (field - 10 > 0 && field - 10 <= 100) {
                    if (!occupiedField.isPositionOccupied(field - 10, occupiedField.getOccupiedFields())) {
                        ship5.addField(field - 10);
                    }
                }
                field = field - 10;
                break;
            }
        }
        if (!ship5.isFieldsOK(handleGame, menu) && ship5.numberOfFields() != 5) {
            board.cancelUpdate(ship5.getFields());
            ship5.deleteField();
        }
    } while (!ship5.isFieldsOK(handleGame, menu));
    ship5.isAdded = true;
    occupiedField.addOccupiedField(ship5.getFields());
    for (int i = 0; i < 5;i++) {
        board.update(ship5.getField(i));
    }

    menu.isClicked = false;
}

void HandleFieldAddition::handleShip4Random(Ship4& ship4, OccupiedField& occupiedField, Board& board, Menu& menu, HandleGame& handleGame) {
    srand(static_cast<unsigned>(time(nullptr)));
    do {
        for (int i = 0; i < 4; i++) {
            int field = (rand() % 100) + 1;
            if (!occupiedField.isPositionOccupied(field, occupiedField.getOccupiedFields())) {
                ship4.addField(field);
            }
            else {
                //ship4.addField(200);
            }
        }
        if (!ship4.isFieldsOK(handleGame, menu) && ship4.numberOfFields() != 4) {
            board.cancelUpdate(ship4.getFields());
            ship4.deleteField();
        }
    } while (!ship4.isFieldsOK(handleGame, menu));
    ship4.isAdded = true;
    occupiedField.addOccupiedField(ship4.getFields());
    for (int i = 0; i < 4;i++) {
        board.update(ship4.getField(i));
    }

    menu.isClicked = false;
}

void HandleFieldAddition::handleShip3Random(Ship3& ship3, OccupiedField& occupiedField, Board& board, Menu& menu, HandleGame& handleGame){
    srand(static_cast<unsigned>(time(nullptr)));
    do {
        for (int i = 0; i < 3; i++) {
            int field = (rand() % 100) + 1;
            if (!occupiedField.isPositionOccupied(field, occupiedField.getOccupiedFields())) {
                ship3.addField(field);
            }
            else {
                //ship3.addField(200);
            }
        }
        if (!ship3.isFieldsOK(handleGame, menu) && ship3.numberOfFields() != 3) {
            board.cancelUpdate(ship3.getFields());
            ship3.deleteField();
        }
    } while (!ship3.isFieldsOK(handleGame, menu));
    ship3.isAdded = true;
    occupiedField.addOccupiedField(ship3.getFields());
    for (int i = 0; i < 3;i++) {
        board.update(ship3.getField(i));
    }

    menu.isClicked = false;
}

void HandleFieldAddition::handleShip2Random(Ship2& ship2, OccupiedField& occupiedField, Board& board, Menu& menu) {
    srand(static_cast<unsigned>(time(nullptr)));
    do {
        for (int i = 0; i < 2; i++) {
            int field = (rand() % 100) + 1;
            if (!occupiedField.isPositionOccupied(field, occupiedField.getOccupiedFields())) {
                ship2.addField(field);
            }
            else {
                //ship2.addField(200);
            }
        }
        if (!ship2.isFieldsOK() && ship2.numberOfFields() != 2) {
            board.cancelUpdate(ship2.getFields());
            ship2.deleteField();
        }
    } while (!ship2.isFieldsOK());
    ship2.isAdded = true;
    occupiedField.addOccupiedField(ship2.getFields());
    for (int i = 0; i < 2; i++) {
        board.update(ship2.getField(i));
    }

    menu.isClicked = false;
}

void HandleFieldAddition::handleShip1Random(Ship1& ship1, OccupiedField& occupiedField, Board& board, Menu& menu){
    srand(static_cast<unsigned>(time(nullptr)));
    do {
        for (int i = 0; i < 1; i++) {
            int field = (rand() % 100) + 1;
            if (!occupiedField.isPositionOccupied(field, occupiedField.getOccupiedFields())) {
                ship1.addField(field);
            }
            else {
                //ship1.addField(200);
            }
        }
        if (!ship1.isFieldsOK() && ship1.numberOfFields() != 1) {
            board.cancelUpdate(ship1.getFields());
            ship1.deleteField();
        }
    } while (!ship1.isFieldsOK());
    ship1.isAdded = true;
    occupiedField.addOccupiedField(ship1.getFields());
    for (int i = 0; i < 1; i++) {
        board.update(ship1.getField(i));
    }

    menu.isClicked = false;
}