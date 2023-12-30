#include "HandleSunkShip.h"

void HandleSunkShip::handleSunkShip5(HandleGame& handleGame, Board& board, Menu& menu, Ship5& ship5){
    if (handleGame.isShipSunk(ship5.getFields()) && ship5.isAdded && !ship5.isSunk) {
        handleGame.updateAdditionalFields(ship5.getFields());
        for (int i = 0; i < handleGame.additionalFieldsToUpdate.size(); i++) {
            if (menu.isCheckboxFields || handleGame.isVersionClassic) {
                board.updateHit(handleGame.additionalFieldsToUpdate[i]);
            }
            handleGame.addHittedField(handleGame.additionalFieldsToUpdate[i]);
        }
        ship5.isSunk = true;
        for (int i = 0; i < ship5.getFields().size(); i++) {
            board.updateHitSunk(ship5.getField(i));
        }
    }
}

void HandleSunkShip::handleSunkShip4(HandleGame& handleGame, Board& board, Menu& menu, Ship4& ship4){
    if (handleGame.isShipSunk(ship4.getFields()) && ship4.isAdded && !ship4.isSunk) {
        handleGame.updateAdditionalFields(ship4.getFields());
        for (int i = 0; i < handleGame.additionalFieldsToUpdate.size(); i++) {
            if (menu.isCheckboxFields || handleGame.isVersionClassic) {
                board.updateHit(handleGame.additionalFieldsToUpdate[i]);
            }
            handleGame.addHittedField(handleGame.additionalFieldsToUpdate[i]);
        }
        ship4.isSunk = true;
        for (int i = 0; i < ship4.getFields().size(); i++) {
            board.updateHitSunk(ship4.getField(i));
        }
    }
}

void HandleSunkShip::handleSunkShip3(HandleGame& handleGame, Board& board, Menu& menu, Ship3& ship3){
    if (handleGame.isShipSunk(ship3.getFields()) && ship3.isAdded && !ship3.isSunk) {
        handleGame.updateAdditionalFields(ship3.getFields());
        for (int i = 0; i < handleGame.additionalFieldsToUpdate.size(); i++) {
            if (menu.isCheckboxFields || handleGame.isVersionClassic) {
                board.updateHit(handleGame.additionalFieldsToUpdate[i]);
            }
            handleGame.addHittedField(handleGame.additionalFieldsToUpdate[i]);
        }
        ship3.isSunk = true;
        for (int i = 0; i < ship3.getFields().size(); i++) {
            board.updateHitSunk(ship3.getField(i));
        }
    }
}

void HandleSunkShip::handleSunkShip2(HandleGame& handleGame, Board& board, Menu& menu, Ship2& ship2){
    if (handleGame.isShipSunk(ship2.getFields()) && ship2.isAdded && !ship2.isSunk) {
        handleGame.updateAdditionalFields(ship2.getFields());
        for (int i = 0; i < handleGame.additionalFieldsToUpdate.size(); i++) {
            if (menu.isCheckboxFields || handleGame.isVersionClassic) {
                board.updateHit(handleGame.additionalFieldsToUpdate[i]);
            }
            handleGame.addHittedField(handleGame.additionalFieldsToUpdate[i]);
        }
        ship2.isSunk = true;
        for (int i = 0; i < ship2.getFields().size(); i++) {
            board.updateHitSunk(ship2.getField(i));
        }
    }
}

void HandleSunkShip::handleSunkShip1(HandleGame& handleGame, Board& board, Menu& menu, Ship1& ship1) {
    if (handleGame.isShipSunk(ship1.getFields()) && ship1.isAdded && !ship1.isSunk) {
        handleGame.updateAdditionalFields(ship1.getFields());
        for (int i = 0; i < handleGame.additionalFieldsToUpdate.size(); i++) {
            if (menu.isCheckboxFields || handleGame.isVersionClassic) {
                board.updateHit(handleGame.additionalFieldsToUpdate[i]);
            }
            handleGame.addHittedField(handleGame.additionalFieldsToUpdate[i]);
        }
        ship1.isSunk = true;
        for (int i = 0; i < ship1.getFields().size(); i++) {
            board.updateHitSunk(ship1.getField(i));
        }
    }
}

void HandleSunkShip::handleSunkShip5Computer(HandleGame& handleGame, Board& board, Menu& menu, Ship5& ship5) {
    if (handleGame.isShipSunkComputer(ship5.getFields()) && ship5.isAdded && !ship5.isSunk) {
        if (menu.isCheckboxFields || handleGame.isVersionClassic) {
            handleGame.updateAdditionalFieldsComputer(ship5.getFields());
        }
        for (int i = 0; i < handleGame.additionalFieldsToUpdateComputer.size(); i++) {
            board.updateHitComputer(handleGame.additionalFieldsToUpdateComputer[i]);
            handleGame.addHittedFieldComputer(handleGame.additionalFieldsToUpdateComputer[i]);
        }
        ship5.isSunk = true;
        for (int i = 0; i < ship5.getFields().size(); i++) {
            board.updateHitSunkComputer(ship5.getField(i));
        }
    }
}

void HandleSunkShip::handleSunkShip4Computer(HandleGame& handleGame, Board& board, Menu& menu, Ship4& ship4) {
    if (handleGame.isShipSunkComputer(ship4.getFields()) && ship4.isAdded && !ship4.isSunk) {
        if (menu.isCheckboxFields || handleGame.isVersionClassic) {
            handleGame.updateAdditionalFieldsComputer(ship4.getFields());
        }
        for (int i = 0; i < handleGame.additionalFieldsToUpdateComputer.size(); i++) {
            board.updateHitComputer(handleGame.additionalFieldsToUpdateComputer[i]);
            handleGame.addHittedFieldComputer(handleGame.additionalFieldsToUpdateComputer[i]);
        }
        ship4.isSunk = true;
        for (int i = 0; i < ship4.getFields().size(); i++) {
            board.updateHitSunkComputer(ship4.getField(i));
        }
    }
}

void HandleSunkShip::handleSunkShip3Computer(HandleGame& handleGame, Board& board, Menu& menu, Ship3& ship3) {
    if (handleGame.isShipSunkComputer(ship3.getFields()) && ship3.isAdded && !ship3.isSunk) {
        if (menu.isCheckboxFields || handleGame.isVersionClassic) {
            handleGame.updateAdditionalFieldsComputer(ship3.getFields());
        }
        for (int i = 0; i < handleGame.additionalFieldsToUpdateComputer.size(); i++) {
            board.updateHitComputer(handleGame.additionalFieldsToUpdateComputer[i]);
            handleGame.addHittedFieldComputer(handleGame.additionalFieldsToUpdateComputer[i]);
        }
        ship3.isSunk = true;
        for (int i = 0; i < ship3.getFields().size(); i++) {
            board.updateHitSunkComputer(ship3.getField(i));
        }
    }
}

void HandleSunkShip::handleSunkShip2Computer(HandleGame& handleGame, Board& board, Menu& menu, Ship2& ship2) {
    if (handleGame.isShipSunkComputer(ship2.getFields()) && ship2.isAdded && !ship2.isSunk) {
        if (menu.isCheckboxFields || handleGame.isVersionClassic) {
            handleGame.updateAdditionalFieldsComputer(ship2.getFields());
        }
        for (int i = 0; i < handleGame.additionalFieldsToUpdateComputer.size(); i++) {
            board.updateHitComputer(handleGame.additionalFieldsToUpdateComputer[i]);
            handleGame.addHittedFieldComputer(handleGame.additionalFieldsToUpdateComputer[i]);
        }
        ship2.isSunk = true;
        for (int i = 0; i < ship2.getFields().size(); i++) {
            board.updateHitSunkComputer(ship2.getField(i));
        }
    }
}

void HandleSunkShip::handleSunkShip1Computer(HandleGame& handleGame, Board& board, Menu& menu, Ship1& ship1) {
    if (handleGame.isShipSunkComputer(ship1.getFields()) && ship1.isAdded && !ship1.isSunk) {
        if (menu.isCheckboxFields || handleGame.isVersionClassic) {
            handleGame.updateAdditionalFieldsComputer(ship1.getFields());
        }
        for (int i = 0; i < handleGame.additionalFieldsToUpdateComputer.size(); i++) {
            board.updateHitComputer(handleGame.additionalFieldsToUpdateComputer[i]);
            handleGame.addHittedFieldComputer(handleGame.additionalFieldsToUpdateComputer[i]);
        }
        ship1.isSunk = true;
        for (int i = 0; i < ship1.getFields().size(); i++) {
            board.updateHitSunkComputer(ship1.getField(i));
        }
    }
}