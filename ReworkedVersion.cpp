#include "ReworkedVersion.h"

void ReworkedVersion::resetAll(){
    lastHitPosition = 0;
    computerShotPosition = 0;
    hittedFields.clear();
}

void ReworkedVersion::setNumbers(HandleCustomShips& handleCustomShips, Menu& menu){
    number5 = handleCustomShips.value5(menu);
    number4 = handleCustomShips.value4(menu);
    number3 = handleCustomShips.value3(menu);
    number2 = handleCustomShips.value2(menu);
    number1 = handleCustomShips.value1(menu);
}

void ReworkedVersion::handleClick(sf::Event& event, HandleFieldAddition& handleFieldAddition,
    Ship5& first5, Ship5& second5, Ship5& third5, Ship5& fourth5, Ship5& fifth5,
    Ship4& first4, Ship4& second4, Ship4& third4, Ship4& fourth4, Ship4& fifth4,
    Ship3& first3, Ship3& second3, Ship3& third3, Ship3& fourth3, Ship3& fifth3,
    Ship2& first2, Ship2& second2, Ship2& third2, Ship2& fourth2, Ship2& fifth2,
    Ship1& first1, Ship1& second1, Ship1& third1, Ship1& fourth1, Ship1& fifth1,
    Board& board, Menu& menu, OccupiedField& occupiedField) {

    if(number5 > 0)
    handleFieldAddition.handleShip5(event, first5, occupiedField, board, menu);
    if (first5.isAdded || number5 < 1) {
        if (number5 > 1)
        handleFieldAddition.handleShip5(event, second5, occupiedField, board, menu);

        if (second5.isAdded || number5 < 2) {
            if (number5 > 2)
            handleFieldAddition.handleShip5(event, third5, occupiedField, board, menu);

            if (third5.isAdded || number5 < 3) {
                if (number5 > 3)
                handleFieldAddition.handleShip5(event, fourth5, occupiedField, board, menu);

                if (fourth5.isAdded || number5 < 4) {
                    if (number5 > 4)
                    handleFieldAddition.handleShip5(event, fifth5, occupiedField, board, menu);

                    if (fifth5.isAdded || number5 < 5) {
                        if(number4 > 0)
                        handleFieldAddition.handleShip4(event, first4, occupiedField, board, menu);

                        if (first4.isAdded || number4 < 1) {
                            if (number4 > 1)
                            handleFieldAddition.handleShip4(event, second4, occupiedField, board, menu);

                            if (second4.isAdded || number4 < 2) {
                                if (number4 > 2)
                                handleFieldAddition.handleShip4(event, third4, occupiedField, board, menu);

                                if (third4.isAdded || number4 < 3) {
                                    if (number4 > 3)
                                    handleFieldAddition.handleShip4(event, fourth4, occupiedField, board, menu);

                                    if (fourth4.isAdded || number4 < 4) {
                                        if (number4 > 4)
                                        handleFieldAddition.handleShip4(event, fifth4, occupiedField, board, menu);

                                        if (fifth4.isAdded || number4 < 5) {
                                            if(number3 > 0)
                                            handleFieldAddition.handleShip3(event, first3, occupiedField, board, menu);

                                            if (first3.isAdded || number3 < 1) {
                                                if (number3 > 1)
                                                handleFieldAddition.handleShip3(event, second3, occupiedField, board, menu);

                                                if (second3.isAdded || number3 < 2) {
                                                    if (number3 > 2)
                                                    handleFieldAddition.handleShip3(event, third3, occupiedField, board, menu);

                                                    if (third3.isAdded || number3 < 3) {
                                                        if (number3 > 3)
                                                        handleFieldAddition.handleShip3(event, fourth3, occupiedField, board, menu);

                                                        if (fourth3.isAdded || number3 < 4) {
                                                            if (number3 > 4)
                                                            handleFieldAddition.handleShip3(event, fifth3, occupiedField, board, menu);

                                                            if (fifth3.isAdded || number3 < 5) {
                                                                if(number2 > 0)
                                                                handleFieldAddition.handleShip2(event, first2, occupiedField, board, menu);

                                                                if (first2.isAdded || number2 < 1) {
                                                                    if (number2 > 1)
                                                                    handleFieldAddition.handleShip2(event, second2, occupiedField, board, menu);

                                                                    if (second2.isAdded || number2 < 2) {
                                                                        if (number2 > 2)
                                                                        handleFieldAddition.handleShip2(event, third2, occupiedField, board, menu);

                                                                        if (third2.isAdded || number2 < 3) {
                                                                            if (number2 > 3)
                                                                            handleFieldAddition.handleShip2(event, fourth2, occupiedField, board, menu);

                                                                            if (fourth2.isAdded || number2 < 4) {
                                                                                if (number2 > 4)
                                                                                handleFieldAddition.handleShip2(event, fifth2, occupiedField, board, menu);

                                                                                if (fifth2.isAdded || number2 < 5) {
                                                                                    if(number1 > 0)
                                                                                    handleFieldAddition.handleShip1(event, first1, occupiedField, board, menu);

                                                                                    if (first1.isAdded || number1 < 1) {
                                                                                        if (number1 > 1)
                                                                                        handleFieldAddition.handleShip1(event, second1, occupiedField, board, menu);

                                                                                        if (second1.isAdded || number1 < 2) {
                                                                                            if (number1 > 2)
                                                                                            handleFieldAddition.handleShip1(event, third1, occupiedField, board, menu);

                                                                                            if (third1.isAdded || number1 < 3) {
                                                                                                if (number1 > 3)
                                                                                                handleFieldAddition.handleShip1(event, fourth1, occupiedField, board, menu);

                                                                                                if (fourth1.isAdded || number1 < 4) {
                                                                                                    if (number1 > 4)
                                                                                                    handleFieldAddition.handleShip1(event, fifth1, occupiedField, board, menu);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void ReworkedVersion::showingMenu(sf::RenderWindow& window, Ship5& first5, Ship5& second5, Ship5& third5, Ship5& fourth5, Ship5& fifth5,
    Ship4& first4, Ship4& second4, Ship4& third4, Ship4& fourth4, Ship4& fifth4,
    Ship3& first3, Ship3& second3, Ship3& third3, Ship3& fourth3, Ship3& fifth3,
    Ship2& first2, Ship2& second2, Ship2& third2, Ship2& fourth2, Ship2& fifth2,
    Ship1& first1, Ship1& second1, Ship1& third1, Ship1& fourth1, Ship1& fifth1, Menu& menu) {

    if (menu.isVersionChoosen) {
        if (!first5.isAdded && number5 > 0) {
            menu.displayMessage("Dodaj 1. statek 5-masztowy", window);
        }
        else if (!second5.isAdded && number5 > 1) {
            menu.displayMessage("Dodaj 2. statek 5-masztowy", window);
        }
        else if (!third5.isAdded && number5 > 2) {
            menu.displayMessage("Dodaj 3. statek 5-masztowy", window);
        }
        else if (!fourth5.isAdded && number5 > 3) {
            menu.displayMessage("Dodaj 4. statek 5-masztowy", window);
        }
        else if (!fifth5.isAdded && number5 > 4) {
            menu.displayMessage("Dodaj 5. statek 5-masztowy", window);
        }
        else if (!first4.isAdded && number4 > 0) {
            menu.displayMessage("Dodaj 1. statek 4-masztowy", window);
        }
        else if (!second4.isAdded && number4 > 1) {
            menu.displayMessage("Dodaj 2. statek 4-masztowy", window);
        }
        else if (!third4.isAdded && number4 > 2) {
            menu.displayMessage("Dodaj 3. statek 4-masztowy", window);
        }
        else if (!fourth4.isAdded && number4 > 3) {
            menu.displayMessage("Dodaj 4. statek 4-masztowy", window);
        }
        else if (!fifth4.isAdded && number4 > 4) {
            menu.displayMessage("Dodaj 5. statek 4-masztowy", window);
        }
        else if (!first3.isAdded && number3 > 0) {
            menu.displayMessage("Dodaj 1. statek 3-masztowy", window);
        }
        else if (!second3.isAdded && number3 > 1) {
            menu.displayMessage("Dodaj 2. statek 3-masztowy", window);
        }
        else if (!third3.isAdded && number3 > 2) {
            menu.displayMessage("Dodaj 3. statek 3-masztowy", window);
        }
        else if (!fourth3.isAdded && number3 > 3) {
            menu.displayMessage("Dodaj 4. statek 3-masztowy", window);
        }
        else if (!fifth3.isAdded && number3 > 4) {
            menu.displayMessage("Dodaj 5. statek 3-masztowy", window);
        }
        else if (!first2.isAdded && number2 > 0) {
            menu.displayMessage("Dodaj 1. statek 2-masztowy", window);
        }
        else if (!second2.isAdded && number2 > 1) {
            menu.displayMessage("Dodaj 2. statek 2-masztowy", window);
        }
        else if (!third2.isAdded && number2 > 2) {
            menu.displayMessage("Dodaj 3. statek 2-masztowy", window);
        }
        else if (!fourth2.isAdded && number2 > 3) {
            menu.displayMessage("Dodaj 4. statek 2-masztowy", window);
        }
        else if (!fifth2.isAdded && number2 > 4) {
            menu.displayMessage("Dodaj 5. statek 2-masztowy", window);
        }
        else if (!first1.isAdded && number1 > 0) {
            menu.displayMessage("Dodaj 1. statek 1-masztowy", window);
        }
        else if (!second1.isAdded && number1 > 1) {
            menu.displayMessage("Dodaj 2. statek 1-masztowy", window);
        }
        else if (!third1.isAdded && number1 > 2) {
            menu.displayMessage("Dodaj 3. statek 1-masztowy", window);
        }
        else if (!fourth1.isAdded && number1 > 3) {
            menu.displayMessage("Dodaj 4. statek 1-masztowy", window);
        }
        else if (!fifth1.isAdded && number1 > 4) {
            menu.displayMessage("Dodaj 5. statek 1-masztowy", window);
        }
        else {
            menu.isGameStarted = true;
            menu.toMiddle = true;
            menu.button.setPosition(700, 400);
            menu.buttonText.setString("OK");
            menu.buttonText.setPosition(735, 415);
            menu.displayMessage("Rozpocznij swoja rozgrywke!", window);
        }
    }
}

void ReworkedVersion::handleChanges(HandleFieldAddition& handleFieldAddition, 
    Ship5& first5, Ship5& second5, Ship5& third5, Ship5& fourth5, Ship5& fifth5,
    Ship4& first4, Ship4& second4, Ship4& third4, Ship4& fourth4, Ship4& fifth4,
    Ship3& first3, Ship3& second3, Ship3& third3, Ship3& fourth3, Ship3& fifth3,
    Ship2& first2, Ship2& second2, Ship2& third2, Ship2& fourth2, Ship2& fifth2,
    Ship1& first1, Ship1& second1, Ship1& third1, Ship1& fourth1, Ship1& fifth1, 
    Board& board, OccupiedField& occupiedField, HandleGame& handleGame, Menu& menu) {

    if (number5 > 0) {
        handleFieldAddition.handleCancelChanges5(first5, board, handleGame, menu);
        if (first5.isFieldsOK(handleGame, menu)) {
            handleFieldAddition.handleAcceptChanges5(first5, occupiedField);
        }
    }
    if (number5 > 1) {
        handleFieldAddition.handleCancelChanges5(second5, board, handleGame, menu);
        if (second5.isFieldsOK(handleGame, menu)) {
            handleFieldAddition.handleAcceptChanges5(second5, occupiedField);
        }
    }
    if (number5 > 2) {
        handleFieldAddition.handleCancelChanges5(third5, board, handleGame, menu);
        if (third5.isFieldsOK(handleGame, menu)) {
            handleFieldAddition.handleAcceptChanges5(third5, occupiedField);
        }
    }
    if (number5 > 3) {
        handleFieldAddition.handleCancelChanges5(fourth5, board, handleGame, menu);
        if (fourth5.isFieldsOK(handleGame, menu)) {
            handleFieldAddition.handleAcceptChanges5(fourth5, occupiedField);
        }
    }
    if (number5 > 4) {
        handleFieldAddition.handleCancelChanges5(fifth5, board, handleGame, menu);
        if (fifth5.isFieldsOK(handleGame, menu)) {
            handleFieldAddition.handleAcceptChanges5(fifth5, occupiedField);
        }
    }
    if (number4 > 0) {
        handleFieldAddition.handleCancelChanges4(first4, board, handleGame, menu);
        if (first4.isFieldsOK(handleGame, menu)) {
            handleFieldAddition.handleAcceptChanges4(first4, occupiedField);
        }
    }
    if (number4 > 1) {
        handleFieldAddition.handleCancelChanges4(second4, board, handleGame, menu);
        if (second4.isFieldsOK(handleGame, menu)) {
            handleFieldAddition.handleAcceptChanges4(second4, occupiedField);
        }
    }
    if (number4 > 2) {
        handleFieldAddition.handleCancelChanges4(third4, board, handleGame, menu);
        if (third4.isFieldsOK(handleGame, menu)) {
            handleFieldAddition.handleAcceptChanges4(third4, occupiedField);
        }
    }
    if (number4 > 3) {
        handleFieldAddition.handleCancelChanges4(fourth4, board, handleGame, menu);
        if (fourth4.isFieldsOK(handleGame, menu)) {
            handleFieldAddition.handleAcceptChanges4(fourth4, occupiedField);
        }
    }
    if (number4 > 4) {
        handleFieldAddition.handleCancelChanges4(fifth4, board, handleGame, menu);
        if (fifth4.isFieldsOK(handleGame, menu)) {
            handleFieldAddition.handleAcceptChanges4(fifth4, occupiedField);
        }
    }
    if (number3 > 0) {
        handleFieldAddition.handleCancelChanges3(first3, board, handleGame, menu);
        if (first3.isFieldsOK(handleGame, menu)) {
            handleFieldAddition.handleAcceptChanges3(first3, occupiedField);
        }
    }
    if (number3 > 1) {
        handleFieldAddition.handleCancelChanges3(second3, board, handleGame, menu);
        if (second3.isFieldsOK(handleGame, menu)) {
            handleFieldAddition.handleAcceptChanges3(second3, occupiedField);
        }
    }
    if (number3 > 2) {
        handleFieldAddition.handleCancelChanges3(third3, board, handleGame, menu);
        if (third3.isFieldsOK(handleGame, menu)) {
            handleFieldAddition.handleAcceptChanges3(third3, occupiedField);
        }
    }
    if (number3 > 3) {
        handleFieldAddition.handleCancelChanges3(fourth3, board, handleGame, menu);
        if (fourth3.isFieldsOK(handleGame, menu)) {
            handleFieldAddition.handleAcceptChanges3(fourth3, occupiedField);
        }
    }
    if (number3 > 4) {
        handleFieldAddition.handleCancelChanges3(fifth3, board, handleGame, menu);
        if (fifth3.isFieldsOK(handleGame, menu)) {
            handleFieldAddition.handleAcceptChanges3(fifth3, occupiedField);
        }
    }
    if (number2 > 0) {
        handleFieldAddition.handleCancelChanges2(first2, board);
        if (first2.isFieldsOK()) {
            handleFieldAddition.handleAcceptChanges2(first2, occupiedField);
        }
    }
    if (number2 > 1) {
        handleFieldAddition.handleCancelChanges2(second2, board);
        if (second2.isFieldsOK()) {
            handleFieldAddition.handleAcceptChanges2(second2, occupiedField);
        }
    }
    if (number2 > 2) {
        handleFieldAddition.handleCancelChanges2(third2, board);
        if (third2.isFieldsOK()) {
            handleFieldAddition.handleAcceptChanges2(third2, occupiedField);
        }
    }
    if (number2 > 3) {
        handleFieldAddition.handleCancelChanges2(fourth2, board);
        if (fourth2.isFieldsOK()) {
            handleFieldAddition.handleAcceptChanges2(fourth2, occupiedField);
        }
    }
    if (number2 > 4) {
        handleFieldAddition.handleCancelChanges2(fifth2, board);
        if (fifth2.isFieldsOK()) {
            handleFieldAddition.handleAcceptChanges2(fifth2, occupiedField);
        }
    }
    if (number1 > 0) {
        handleFieldAddition.handleCancelChanges1(first1, board);
        if (first1.isFieldsOK()) {
            handleFieldAddition.handleAcceptChanges1(first1, occupiedField);
        }
    }
    if (number1 > 1) {
        handleFieldAddition.handleCancelChanges1(second1, board);
        if (second1.isFieldsOK()) {
            handleFieldAddition.handleAcceptChanges1(second1, occupiedField);
        }
    }
    if (number1 > 2) {
        handleFieldAddition.handleCancelChanges1(third1, board);
        if (third1.isFieldsOK()) {
            handleFieldAddition.handleAcceptChanges1(third1, occupiedField);
        }
    }
    if (number1 > 3) {
        handleFieldAddition.handleCancelChanges1(fourth1, board);
        if (fourth1.isFieldsOK()) {
            handleFieldAddition.handleAcceptChanges1(fourth1, occupiedField);
        }
    }
    if (number1 > 4) {
        handleFieldAddition.handleCancelChanges1(fifth1, board);
        if (fifth1.isFieldsOK()) {
            handleFieldAddition.handleAcceptChanges1(fifth1, occupiedField);
        }
    }
}

void ReworkedVersion::addingShipsComputer(HandleFieldAddition& handleFieldAddition,
    Ship5& first5Computer, Ship5& second5Computer, Ship5& third5Computer, Ship5& fourth5Computer, Ship5& fifth5Computer,
    Ship4& first4Computer, Ship4& second4Computer, Ship4& third4Computer, Ship4& fourth4Computer, Ship4& fifth4Computer,
    Ship3& first3Computer, Ship3& second3Computer, Ship3& third3Computer, Ship3& fourth3Computer, Ship3& fifth3Computer,
    Ship2& first2Computer, Ship2& second2Computer, Ship2& third2Computer, Ship2& fourth2Computer, Ship2& fifth2Computer,
    Ship1& first1Computer, Ship1& second1Computer, Ship1& third1Computer, Ship1& fourth1Computer, Ship1& fifth1Computer, 
    Board& board, OccupiedField& occupiedFieldComputer, HandleGame& handleGame, Menu& menu){

    if (menu.isGameStarted) {
        if (!first5Computer.isAdded || number5 < 1) {
            if(number5 > 0)
            handleFieldAddition.handleShip5Computer(first5Computer, occupiedFieldComputer, board, handleGame, menu);

            if (!second5Computer.isAdded || number5 < 2) {
                if (number5 > 1)
                handleFieldAddition.handleShip5Computer(second5Computer, occupiedFieldComputer, board, handleGame, menu);

                if (!third5Computer.isAdded || number5 < 3) {
                    if (number5 > 2)
                    handleFieldAddition.handleShip5Computer(third5Computer, occupiedFieldComputer, board, handleGame, menu);

                    if (!fourth5Computer.isAdded || number5 < 4) {
                        if (number5 > 3)
                        handleFieldAddition.handleShip5Computer(fourth5Computer, occupiedFieldComputer, board, handleGame, menu);

                        if (!fifth5Computer.isAdded || number5 < 5) {
                            if (number5 > 4)
                            handleFieldAddition.handleShip5Computer(fifth5Computer, occupiedFieldComputer, board, handleGame, menu);

                            if (!first4Computer.isAdded || number4 < 1) {
                                if(number4 > 0)
                                handleFieldAddition.handleShip4Computer(first4Computer, occupiedFieldComputer, board, handleGame, menu);

                                if (!second4Computer.isAdded || number4 < 2) {
                                    if (number4 > 1)
                                    handleFieldAddition.handleShip4Computer(second4Computer, occupiedFieldComputer, board, handleGame, menu);

                                    if (!third4Computer.isAdded || number4 < 3) {
                                        if (number4 > 2)
                                        handleFieldAddition.handleShip4Computer(third4Computer, occupiedFieldComputer, board, handleGame, menu);

                                        if (!fourth4Computer.isAdded || number4 < 4) {
                                            if (number4 > 3)
                                            handleFieldAddition.handleShip4Computer(fourth4Computer, occupiedFieldComputer, board, handleGame, menu);

                                            if (!fifth4Computer.isAdded || number4 < 5) {
                                                if (number4 > 4)
                                                handleFieldAddition.handleShip4Computer(fifth4Computer, occupiedFieldComputer, board, handleGame, menu);

                                                if (!first3Computer.isAdded || number3 < 1) {
                                                    if(number3 > 0)
                                                    handleFieldAddition.handleShip3Computer(first3Computer, occupiedFieldComputer, board, handleGame, menu);

                                                    if (!second3Computer.isAdded || number3 < 2) {
                                                        if (number3 > 1)
                                                        handleFieldAddition.handleShip3Computer(second3Computer, occupiedFieldComputer, board, handleGame, menu);

                                                        if (!third3Computer.isAdded || number3 < 3) {
                                                            if (number3 > 2)
                                                            handleFieldAddition.handleShip3Computer(third3Computer, occupiedFieldComputer, board, handleGame, menu);

                                                            if (!fourth3Computer.isAdded || number3 < 4) {
                                                                if (number3 > 3)
                                                                handleFieldAddition.handleShip3Computer(fourth3Computer, occupiedFieldComputer, board, handleGame, menu);

                                                                if (!fifth3Computer.isAdded || number3 < 5) {
                                                                    if (number3 > 4)
                                                                    handleFieldAddition.handleShip3Computer(fifth3Computer, occupiedFieldComputer, board, handleGame, menu);

                                                                    if (!first2Computer.isAdded || number2 < 1) {
                                                                        if (number2 > 0)
                                                                        handleFieldAddition.handleShip2Computer(first2Computer, occupiedFieldComputer, board);

                                                                        if (!second2Computer.isAdded || number2 < 2) {
                                                                            if (number2 > 1)
                                                                            handleFieldAddition.handleShip2Computer(second2Computer, occupiedFieldComputer, board);

                                                                            if (!third2Computer.isAdded || number2 < 3) {
                                                                                if (number2 > 2)
                                                                                handleFieldAddition.handleShip2Computer(third2Computer, occupiedFieldComputer, board);

                                                                                if (!fourth2Computer.isAdded || number2 < 4) {
                                                                                    if (number2 > 3)
                                                                                    handleFieldAddition.handleShip2Computer(fourth2Computer, occupiedFieldComputer, board);

                                                                                    if (!fifth2Computer.isAdded || number2 < 5) {
                                                                                        if (number2 > 4)
                                                                                        handleFieldAddition.handleShip2Computer(fifth2Computer, occupiedFieldComputer, board);

                                                                                        if (!first1Computer.isAdded || number1 < 1) {
                                                                                            if(number1 > 0)
                                                                                            handleFieldAddition.handleShip1Computer(first1Computer, occupiedFieldComputer, board);

                                                                                            if (!second1Computer.isAdded || number1 < 2) {
                                                                                                if (number1 > 1)
                                                                                                handleFieldAddition.handleShip1Computer(second1Computer, occupiedFieldComputer, board);

                                                                                                if (!third1Computer.isAdded || number1 < 3) {
                                                                                                    if (number1 > 2)
                                                                                                    handleFieldAddition.handleShip1Computer(third1Computer, occupiedFieldComputer, board);

                                                                                                    if (!fourth1Computer.isAdded || number1 < 4) {
                                                                                                        if (number1 > 3)
                                                                                                        handleFieldAddition.handleShip1Computer(fourth1Computer, occupiedFieldComputer, board);

                                                                                                        if (!fifth1Computer.isAdded || number1 < 5) {
                                                                                                            if (number1 > 4) {
                                                                                                                handleFieldAddition.handleShip1Computer(fifth1Computer, occupiedFieldComputer, board);
                                                                                                            }
                                                                                                            handleGame.isUserTurn = true;
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void ReworkedVersion::shootingUser(sf::Event& event, sf::Sound& sound, sf::SoundBuffer& buffer, HandleGame& handleGame, Board& board, 
    Ship5& first5Computer, Ship5& second5Computer, Ship5& third5Computer, Ship5& fourth5Computer, Ship5& fifth5Computer,
    Ship4& first4Computer, Ship4& second4Computer, Ship4& third4Computer, Ship4& fourth4Computer, Ship4& fifth4Computer,
    Ship3& first3Computer, Ship3& second3Computer, Ship3& third3Computer, Ship3& fourth3Computer, Ship3& fifth3Computer,
    Ship2& first2Computer, Ship2& second2Computer, Ship2& third2Computer, Ship2& fourth2Computer, Ship2& fifth2Computer,
    Ship1& first1Computer, Ship1& second1Computer, Ship1& third1Computer, Ship1& fourth1Computer, Ship1& fifth1Computer){

    if (handleGame.isFieldAvailableComputer(board.getPositionComputer(event))) {
        if (first5Computer.isHit(board.getPositionComputer(event)) && number5 > 0) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (second5Computer.isHit(board.getPositionComputer(event)) && number5 > 1) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (third5Computer.isHit(board.getPositionComputer(event)) && number5 > 2) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (fourth5Computer.isHit(board.getPositionComputer(event)) && number5 > 3) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (fifth5Computer.isHit(board.getPositionComputer(event)) && number5 > 4) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (first4Computer.isHit(board.getPositionComputer(event)) && number4 > 0) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (second4Computer.isHit(board.getPositionComputer(event)) && number4 > 1) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (third4Computer.isHit(board.getPositionComputer(event)) && number4 > 2) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (fourth4Computer.isHit(board.getPositionComputer(event)) && number4 > 3) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (fifth4Computer.isHit(board.getPositionComputer(event)) && number4 > 4) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (first3Computer.isHit(board.getPositionComputer(event)) && number3 > 0) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (second3Computer.isHit(board.getPositionComputer(event)) && number3 > 1) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (third3Computer.isHit(board.getPositionComputer(event)) && number3 > 2) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (fourth3Computer.isHit(board.getPositionComputer(event)) && number3 > 3) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (fifth3Computer.isHit(board.getPositionComputer(event)) && number3 > 4) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (first2Computer.isHit(board.getPositionComputer(event)) && number2 > 0) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (second2Computer.isHit(board.getPositionComputer(event)) && number2 > 1) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (third2Computer.isHit(board.getPositionComputer(event)) && number2 > 2) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (fourth2Computer.isHit(board.getPositionComputer(event)) && number2 > 3) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (fifth2Computer.isHit(board.getPositionComputer(event)) && number2 > 4) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (first1Computer.isHit(board.getPositionComputer(event)) && number1 > 0) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (second1Computer.isHit(board.getPositionComputer(event)) && number1 > 1) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (third1Computer.isHit(board.getPositionComputer(event)) && number1 > 2) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (fourth1Computer.isHit(board.getPositionComputer(event)) && number1 > 3) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (fifth1Computer.isHit(board.getPositionComputer(event)) && number1 > 4) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else {
            board.updateHitComputer(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/notHit.wav");
            handleGame.isUserTurn = false;
            handleGame.isComputerTurn = true;
        }
        handleGame.addHittedFieldComputer(board.getPositionComputer(event));
        sound.setBuffer(buffer);
        sound.setVolume(20);
        sound.play();
    }
}

void ReworkedVersion::shootingComputer(sf::Event& event, sf::Sound& sound, sf::SoundBuffer& buffer, HandleGame& handleGame, 
    Board& board, Menu& menu, Ship5& first5, Ship5& second5, Ship5& third5, Ship5& fourth5, Ship5& fifth5,
    Ship4& first4, Ship4& second4, Ship4& third4, Ship4& fourth4, Ship4& fifth4,
    Ship3& first3, Ship3& second3, Ship3& third3, Ship3& fourth3, Ship3& fifth3,
    Ship2& first2, Ship2& second2, Ship2& third2, Ship2& fourth2, Ship2& fifth2,
    Ship1& first1, Ship1& second1, Ship1& third1, Ship1& fourth1, Ship1& fifth1){

    srand(static_cast<unsigned>(time(nullptr)));

    if (first5.isHit(lastHitPosition) && first5.isSunk && number5 > 0) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (second5.isHit(lastHitPosition) && second5.isSunk && number5 > 1) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (third5.isHit(lastHitPosition) && third5.isSunk && number5 > 2) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (fourth5.isHit(lastHitPosition) && fourth5.isSunk && number5 > 3) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (fifth5.isHit(lastHitPosition) && fifth5.isSunk && number5 > 4) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (first4.isHit(lastHitPosition) && first4.isSunk && number4 > 0) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (second4.isHit(lastHitPosition) && second4.isSunk && number4 > 1) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (third4.isHit(lastHitPosition) && third4.isSunk && number4 > 2) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (fourth4.isHit(lastHitPosition) && fourth4.isSunk && number4 > 3) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (fifth4.isHit(lastHitPosition) && fifth4.isSunk && number4 > 4) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (first3.isHit(lastHitPosition) && first3.isSunk && number3 > 0) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (second3.isHit(lastHitPosition) && second3.isSunk && number3 > 1) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (third3.isHit(lastHitPosition) && third3.isSunk && number3 > 2) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (fourth3.isHit(lastHitPosition) && fourth3.isSunk && number3 > 3) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (fifth3.isHit(lastHitPosition) && fifth3.isSunk && number3 > 4) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (first2.isHit(lastHitPosition) && first2.isSunk && number2 > 0) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (second2.isHit(lastHitPosition) && second2.isSunk && number2 > 1) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (third2.isHit(lastHitPosition) && third2.isSunk && number2 > 2) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (fourth2.isHit(lastHitPosition) && fourth2.isSunk && number2 > 3) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (fifth2.isHit(lastHitPosition) && fifth2.isSunk && number2 > 4) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (first1.isHit(lastHitPosition) && first1.isSunk && number1 > 0) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (second1.isHit(lastHitPosition) && second1.isSunk && number1 > 1) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (third1.isHit(lastHitPosition) && third1.isSunk && number1 > 2) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (fourth1.isHit(lastHitPosition) && fourth1.isSunk && number1 > 3) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (fifth1.isHit(lastHitPosition) && fifth1.isSunk && number1 > 4) {
        lastHitPosition = 0;
        hittedFields.clear();
    }

    do {
        if (lastHitPosition != 0) {
            while (computerShotPosition > 100 || computerShotPosition < 1 || !handleGame.isFieldAvailable(computerShotPosition)) {
                int randomIndex;
                int randomNumber;

                if (menu.isCheckboxShips || hittedFields.size() < 2) {
                    randomIndex = rand() % hittedFields.size();
                    randomNumber = rand() % 4;

                    switch (randomNumber) {
                    case 0:
                        if (hittedFields[randomIndex] > 10)
                            computerShotPosition = hittedFields[randomIndex] - 10;
                        break;
                    case 1:
                        if (hittedFields[randomIndex] < 91)
                            computerShotPosition = hittedFields[randomIndex] + 10;
                        break;
                    case 2:
                        if (hittedFields[randomIndex] % 10 != 1)
                            computerShotPosition = hittedFields[randomIndex] - 1;
                        break;
                    case 3:
                        if (hittedFields[randomIndex] % 10 != 0)
                            computerShotPosition = hittedFields[randomIndex] + 1;
                        break;
                    }
                }
                else if (!menu.isCheckboxShips || handleGame.isVersionClassic) {
                    randomIndex = rand() % hittedFields.size();
                    randomNumber = rand() % 2;

                    
                        if ((hittedFields[0] - 1 == hittedFields[1]) || (hittedFields[0] + 1 == hittedFields[1])) {
                            switch (randomNumber) {
                            case 0:
                                if (hittedFields[randomIndex] % 10 != 1)
                                    computerShotPosition = hittedFields[randomIndex] - 1;
                                break;
                            case 1:
                                if (hittedFields[randomIndex] % 10 != 0)
                                    computerShotPosition = hittedFields[randomIndex] + 1;
                                break;
                            }
                        }
                        else if ((hittedFields[0] - 10 == hittedFields[1]) || (hittedFields[0] + 10 == hittedFields[1])) {
                            switch (randomNumber) {
                            case 0:
                                if (hittedFields[randomIndex] > 10)
                                    computerShotPosition = hittedFields[randomIndex] - 10;
                                break;
                            case 1:
                                if (hittedFields[randomIndex] < 91)
                                    computerShotPosition = hittedFields[randomIndex] + 10;
                                break;
                            }
                        }
                    
                }
            }
        }
        else {
            computerShotPosition = (rand() % 100) + 1;
        }
    } while (!handleGame.isFieldAvailable(computerShotPosition));
    
    if (handleGame.isFieldAvailable(computerShotPosition)) {
        if (first5.isHit(computerShotPosition) && number5 > 0) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (second5.isHit(computerShotPosition) && number5 > 1) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (third5.isHit(computerShotPosition) && number5 > 2) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (fourth5.isHit(computerShotPosition) && number5 > 3) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (fifth5.isHit(computerShotPosition) && number5 > 4) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (first4.isHit(computerShotPosition) && number4 > 0) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (second4.isHit(computerShotPosition) && number4 > 1) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (third4.isHit(computerShotPosition) && number4 > 2) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (fourth4.isHit(computerShotPosition) && number4 > 3) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (fifth4.isHit(computerShotPosition) && number4 > 4) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (first3.isHit(computerShotPosition) && number3 > 0) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (second3.isHit(computerShotPosition) && number3 > 1) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (third3.isHit(computerShotPosition) && number3 > 2) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (fourth3.isHit(computerShotPosition) && number3 > 3) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (fifth3.isHit(computerShotPosition) && number3 > 4) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (first2.isHit(computerShotPosition) && number2 > 0) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (second2.isHit(computerShotPosition) && number2 > 1) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (third2.isHit(computerShotPosition) && number2 > 2) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (fourth2.isHit(computerShotPosition) && number2 > 3) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (fifth2.isHit(computerShotPosition) && number2 > 4) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (first1.isHit(computerShotPosition) && number1 > 0) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (second1.isHit(computerShotPosition) && number1 > 1) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (third1.isHit(computerShotPosition) && number1 > 2) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (fourth1.isHit(computerShotPosition) && number1 > 3) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (fifth1.isHit(computerShotPosition) && number1 > 4) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else {
            board.updateHit(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/notHit.wav");
            handleGame.isUserTurn = true;
            handleGame.isComputerTurn = false;
        }
        handleGame.addHittedField(computerShotPosition);
        sound.setBuffer(buffer);
        sound.setVolume(20);
        sound.play();
    }
}

void ReworkedVersion::handleSunkShipShips(HandleSunkShip& handleSunkShip, HandleGame& handleGame, Board& board, Menu& menu, 
    Ship5& first5, Ship5& second5, Ship5& third5, Ship5& fourth5, Ship5& fifth5,
    Ship4& first4, Ship4& second4, Ship4& third4, Ship4& fourth4, Ship4& fifth4,
    Ship3& first3, Ship3& second3, Ship3& third3, Ship3& fourth3, Ship3& fifth3,
    Ship2& first2, Ship2& second2, Ship2& third2, Ship2& fourth2, Ship2& fifth2,
    Ship1& first1, Ship1& second1, Ship1& third1, Ship1& fourth1, Ship1& fifth1){

    if(number5 > 0)
        handleSunkShip.handleSunkShip5(handleGame, board, menu, first5);
    if(number5 > 1)
        handleSunkShip.handleSunkShip5(handleGame, board, menu, second5);
    if (number5 > 2)
        handleSunkShip.handleSunkShip5(handleGame, board, menu, third5);
    if (number5 > 3)
        handleSunkShip.handleSunkShip5(handleGame, board, menu, fourth5);
    if (number5 > 4)
        handleSunkShip.handleSunkShip5(handleGame, board, menu, fifth5);
    if (number4 > 0)
        handleSunkShip.handleSunkShip4(handleGame, board, menu, first4);
    if (number4 > 1)
        handleSunkShip.handleSunkShip4(handleGame, board, menu, second4);
    if (number4 > 2)
        handleSunkShip.handleSunkShip4(handleGame, board, menu, third4);
    if (number4 > 3)
        handleSunkShip.handleSunkShip4(handleGame, board, menu, fourth4);
    if (number4 > 4)
        handleSunkShip.handleSunkShip4(handleGame, board, menu, fifth4);
    if (number3 > 0)
        handleSunkShip.handleSunkShip3(handleGame, board, menu, first3);
    if (number3 > 1)
        handleSunkShip.handleSunkShip3(handleGame, board, menu, second3);
    if (number3 > 2)
        handleSunkShip.handleSunkShip3(handleGame, board, menu, third3);
    if (number3 > 3)
        handleSunkShip.handleSunkShip3(handleGame, board, menu, fourth3);
    if (number3 > 4)
        handleSunkShip.handleSunkShip3(handleGame, board, menu, fifth3);
    if (number2 > 0)
        handleSunkShip.handleSunkShip2(handleGame, board, menu, first2);
    if (number2 > 1)
        handleSunkShip.handleSunkShip2(handleGame, board, menu, second2);
    if (number2 > 2)
        handleSunkShip.handleSunkShip2(handleGame, board, menu, third2);
    if (number2 > 3)
        handleSunkShip.handleSunkShip2(handleGame, board, menu, fourth2);
    if (number2 > 4)
        handleSunkShip.handleSunkShip2(handleGame, board, menu, fifth2);
    if (number1 > 0)
        handleSunkShip.handleSunkShip1(handleGame, board, menu, first1);
    if (number1 > 1)
        handleSunkShip.handleSunkShip1(handleGame, board, menu, second1);
    if (number1 > 2)
        handleSunkShip.handleSunkShip1(handleGame, board, menu, third1);
    if (number1 > 3)
        handleSunkShip.handleSunkShip1(handleGame, board, menu, fourth1);
    if (number1 > 4)
        handleSunkShip.handleSunkShip1(handleGame, board, menu, fifth1);
}

void ReworkedVersion::handleSunkShipShipsComputer(HandleSunkShip& handleSunkShip, HandleGame& handleGame, Board& board, Menu& menu, 
    Ship5& first5Computer, Ship5& second5Computer, Ship5& third5Computer, Ship5& fourth5Computer, Ship5& fifth5Computer,
    Ship4& first4Computer, Ship4& second4Computer, Ship4& third4Computer, Ship4& fourth4Computer, Ship4& fifth4Computer,
    Ship3& first3Computer, Ship3& second3Computer, Ship3& third3Computer, Ship3& fourth3Computer, Ship3& fifth3Computer,
    Ship2& first2Computer, Ship2& second2Computer, Ship2& third2Computer, Ship2& fourth2Computer, Ship2& fifth2Computer,
    Ship1& first1Computer, Ship1& second1Computer, Ship1& third1Computer, Ship1& fourth1Computer, Ship1& fifth1Computer){

    if (number5 > 0)
        handleSunkShip.handleSunkShip5Computer(handleGame, board, menu, first5Computer);
    if (number5 > 1)
        handleSunkShip.handleSunkShip5Computer(handleGame, board, menu, second5Computer);
    if (number5 > 2)
        handleSunkShip.handleSunkShip5Computer(handleGame, board, menu, third5Computer);
    if (number5 > 3)
        handleSunkShip.handleSunkShip5Computer(handleGame, board, menu, fourth5Computer);
    if (number5 > 4)
        handleSunkShip.handleSunkShip5Computer(handleGame, board, menu, fifth5Computer);
    if (number4 > 0)
        handleSunkShip.handleSunkShip4Computer(handleGame, board, menu, first4Computer);
    if (number4 > 1)
        handleSunkShip.handleSunkShip4Computer(handleGame, board, menu, second4Computer);
    if (number4 > 2)
        handleSunkShip.handleSunkShip4Computer(handleGame, board, menu, third4Computer);
    if (number4 > 3)
        handleSunkShip.handleSunkShip4Computer(handleGame, board, menu, fourth4Computer);
    if (number4 > 4)
        handleSunkShip.handleSunkShip4Computer(handleGame, board, menu, fifth4Computer);
    if (number3 > 0)
        handleSunkShip.handleSunkShip3Computer(handleGame, board, menu, first3Computer);
    if (number3 > 1)
        handleSunkShip.handleSunkShip3Computer(handleGame, board, menu, second3Computer);
    if (number3 > 2)
        handleSunkShip.handleSunkShip3Computer(handleGame, board, menu, third3Computer);
    if (number3 > 3)
        handleSunkShip.handleSunkShip3Computer(handleGame, board, menu, fourth3Computer);
    if (number3 > 4)
        handleSunkShip.handleSunkShip3Computer(handleGame, board, menu, fifth3Computer);
    if (number2 > 0)
        handleSunkShip.handleSunkShip2Computer(handleGame, board, menu, first2Computer);
    if (number2 > 1)
        handleSunkShip.handleSunkShip2Computer(handleGame, board, menu, second2Computer);
    if (number2 > 2)
        handleSunkShip.handleSunkShip2Computer(handleGame, board, menu, third2Computer);
    if (number2 > 3)
        handleSunkShip.handleSunkShip2Computer(handleGame, board, menu, fourth2Computer);
    if (number2 > 4)
        handleSunkShip.handleSunkShip2Computer(handleGame, board, menu, fifth2Computer);
    if (number1 > 0)
        handleSunkShip.handleSunkShip1Computer(handleGame, board, menu, first1Computer);
    if (number1 > 1)
        handleSunkShip.handleSunkShip1Computer(handleGame, board, menu, second1Computer);
    if (number1 > 2)
        handleSunkShip.handleSunkShip1Computer(handleGame, board, menu, third1Computer);
    if (number1 > 3)
        handleSunkShip.handleSunkShip1Computer(handleGame, board, menu, fourth1Computer);
    if (number1 > 4)
        handleSunkShip.handleSunkShip1Computer(handleGame, board, menu, fifth1Computer);
}

void ReworkedVersion::handleRandomShips(HandleFieldAddition& handleFieldAddition, OccupiedField& occupiedField, Board& board, Menu& menu, Ship5& first5, Ship5& second5, Ship5& third5, Ship5& fourth5, Ship5& fifth5,
    Ship4& first4, Ship4& second4, Ship4& third4, Ship4& fourth4, Ship4& fifth4,
    Ship3& first3, Ship3& second3, Ship3& third3, Ship3& fourth3, Ship3& fifth3,
    Ship2& first2, Ship2& second2, Ship2& third2, Ship2& fourth2, Ship2& fifth2,
    Ship1& first1, Ship1& second1, Ship1& third1, Ship1& fourth1, Ship1& fifth1, HandleGame& handleGame){

    if (!first5.isAdded && number5 > 0) {
        handleFieldAddition.handleShip5Random(first5, occupiedField, board, menu, handleGame);
    }
    else if (!second5.isAdded && number5 > 1) {
        handleFieldAddition.handleShip5Random(second5, occupiedField, board, menu, handleGame);
    }
    else if (!third5.isAdded && number5 > 2) {
        handleFieldAddition.handleShip5Random(third5, occupiedField, board, menu, handleGame);
    }
    else if (!fourth5.isAdded && number5 > 3) {
        handleFieldAddition.handleShip5Random(fourth5, occupiedField, board, menu, handleGame);
    }
    else if (!fifth5.isAdded && number5 > 4) {
        handleFieldAddition.handleShip5Random(fifth5, occupiedField, board, menu, handleGame);
    }
    else if (!first4.isAdded && number4 > 0) {
        handleFieldAddition.handleShip4Random(first4, occupiedField, board, menu, handleGame);
    }
    else if (!second4.isAdded && number4 > 1) {
        handleFieldAddition.handleShip4Random(second4, occupiedField, board, menu, handleGame);
    }
    else if (!third4.isAdded && number4 > 2) {
        handleFieldAddition.handleShip4Random(third4, occupiedField, board, menu, handleGame);
    }
    else if (!fourth4.isAdded && number4 > 3) {
        handleFieldAddition.handleShip4Random(fourth4, occupiedField, board, menu, handleGame);
    }
    else if (!fifth4.isAdded && number4 > 4) {
        handleFieldAddition.handleShip4Random(fifth4, occupiedField, board, menu, handleGame);
    }
    else if (!first3.isAdded && number3 > 0) {
        handleFieldAddition.handleShip3Random(first3, occupiedField, board, menu, handleGame);
    }
    else if (!second3.isAdded && number3 > 1) {
        handleFieldAddition.handleShip3Random(second3, occupiedField, board, menu, handleGame);
    }
    else if (!third3.isAdded && number3 > 2) {
        handleFieldAddition.handleShip3Random(third3, occupiedField, board, menu, handleGame);
    }
    else if (!fourth3.isAdded && number3 > 3) {
        handleFieldAddition.handleShip3Random(fourth3, occupiedField, board, menu, handleGame);
    }
    else if (!fifth3.isAdded && number3 > 4) {
        handleFieldAddition.handleShip3Random(fifth3, occupiedField, board, menu, handleGame);
    }
    else if (!first2.isAdded && number2 > 0) {
        handleFieldAddition.handleShip2Random(first2, occupiedField, board, menu);
    }
    else if (!second2.isAdded && number2 > 1) {
        handleFieldAddition.handleShip2Random(second2, occupiedField, board, menu);
    }
    else if (!third2.isAdded && number2 > 2) {
        handleFieldAddition.handleShip2Random(third2, occupiedField, board, menu);
    }
    else if (!fourth2.isAdded && number2 > 3) {
        handleFieldAddition.handleShip2Random(fourth2, occupiedField, board, menu);
    }
    else if (!fifth2.isAdded && number2 > 4) {
        handleFieldAddition.handleShip2Random(fifth2, occupiedField, board, menu);
    }
    else if (!first1.isAdded && number1 > 0) {
        handleFieldAddition.handleShip1Random(first1, occupiedField, board, menu);
    }
    else if (!second1.isAdded && number1 > 1) {
        handleFieldAddition.handleShip1Random(second1, occupiedField, board, menu);
    }
    else if (!third1.isAdded && number1 > 2) {
        handleFieldAddition.handleShip1Random(third1, occupiedField, board, menu);
    }
    else if (!fourth1.isAdded && number1 > 3) {
        handleFieldAddition.handleShip1Random(fourth1, occupiedField, board, menu);
    }
    else if (!fifth1.isAdded && number1 > 4) {
        handleFieldAddition.handleShip1Random(fifth1, occupiedField, board, menu);
    }
}

void ReworkedVersion::handleRandomShipsAll(HandleFieldAddition& handleFieldAddition, OccupiedField& occupiedField, Board& board, Menu& menu, 
    Ship5& first5, Ship5& second5, Ship5& third5, Ship5& fourth5, Ship5& fifth5,
    Ship4& first4, Ship4& second4, Ship4& third4, Ship4& fourth4, Ship4& fifth4,
    Ship3& first3, Ship3& second3, Ship3& third3, Ship3& fourth3, Ship3& fifth3,
    Ship2& first2, Ship2& second2, Ship2& third2, Ship2& fourth2, Ship2& fifth2,
    Ship1& first1, Ship1& second1, Ship1& third1, Ship1& fourth1, Ship1& fifth1, HandleGame& handleGame){

    if (!first5.isAdded && number5 > 0) {
        handleFieldAddition.handleShip5Random(first5, occupiedField, board, menu, handleGame);
    }
    if (!second5.isAdded && number5 > 1) {
        handleFieldAddition.handleShip5Random(second5, occupiedField, board, menu, handleGame);
    }
    if (!third5.isAdded && number5 > 2) {
        handleFieldAddition.handleShip5Random(third5, occupiedField, board, menu, handleGame);
    }
    if (!fourth5.isAdded && number5 > 3) {
        handleFieldAddition.handleShip5Random(fourth5, occupiedField, board, menu, handleGame);
    }
    if (!fifth5.isAdded && number5 > 4) {
        handleFieldAddition.handleShip5Random(fifth5, occupiedField, board, menu, handleGame);
    }
    if (!first4.isAdded && number4 > 0) {
        handleFieldAddition.handleShip4Random(first4, occupiedField, board, menu, handleGame);
    }
    if (!second4.isAdded && number4 > 1) {
        handleFieldAddition.handleShip4Random(second4, occupiedField, board, menu, handleGame);
    }
    if (!third4.isAdded && number4 > 2) {
        handleFieldAddition.handleShip4Random(third4, occupiedField, board, menu, handleGame);
    }
    if (!fourth4.isAdded && number4 > 3) {
        handleFieldAddition.handleShip4Random(fourth4, occupiedField, board, menu, handleGame);
    }
    if (!fifth4.isAdded && number4 > 4) {
        handleFieldAddition.handleShip4Random(fifth4, occupiedField, board, menu, handleGame);
    }
    if (!first3.isAdded && number3 > 0) {
        handleFieldAddition.handleShip3Random(first3, occupiedField, board, menu, handleGame);
    }
    if (!second3.isAdded && number3 > 1) {
        handleFieldAddition.handleShip3Random(second3, occupiedField, board, menu, handleGame);
    }
    if (!third3.isAdded && number3 > 2) {
        handleFieldAddition.handleShip3Random(third3, occupiedField, board, menu, handleGame);
    }
    if (!fourth3.isAdded && number3 > 3) {
        handleFieldAddition.handleShip3Random(fourth3, occupiedField, board, menu, handleGame);
    }
    if (!fifth3.isAdded && number3 > 4) {
        handleFieldAddition.handleShip3Random(fifth3, occupiedField, board, menu, handleGame);
    }
    if (!first2.isAdded && number2 > 0) {
        handleFieldAddition.handleShip2Random(first2, occupiedField, board, menu);
    }
    if (!second2.isAdded && number2 > 1) {
        handleFieldAddition.handleShip2Random(second2, occupiedField, board, menu);
    }
    if (!third2.isAdded && number2 > 2) {
        handleFieldAddition.handleShip2Random(third2, occupiedField, board, menu);
    }
    if (!fourth2.isAdded && number2 > 3) {
        handleFieldAddition.handleShip2Random(fourth2, occupiedField, board, menu);
    }
    if (!fifth2.isAdded && number2 > 4) {
        handleFieldAddition.handleShip2Random(fifth2, occupiedField, board, menu);
    }
    if (!first1.isAdded && number1 > 0) {
        handleFieldAddition.handleShip1Random(first1, occupiedField, board, menu);
    }
    if (!second1.isAdded && number1 > 1) {
        handleFieldAddition.handleShip1Random(second1, occupiedField, board, menu);
    }
    if (!third1.isAdded && number1 > 2) {
        handleFieldAddition.handleShip1Random(third1, occupiedField, board, menu);
    }
    if (!fourth1.isAdded && number1 > 3) {
        handleFieldAddition.handleShip1Random(fourth1, occupiedField, board, menu);
    }
    if (!fifth1.isAdded && number1 > 4) {
        handleFieldAddition.handleShip1Random(fifth1, occupiedField, board, menu);
    }
}

bool ReworkedVersion::isUserWinner(Ship5& first5Computer, Ship5& second5Computer, Ship5& third5Computer, Ship5& fourth5Computer, Ship5& fifth5Computer,
    Ship4& first4Computer, Ship4& second4Computer, Ship4& third4Computer, Ship4& fourth4Computer, Ship4& fifth4Computer,
    Ship3& first3Computer, Ship3& second3Computer, Ship3& third3Computer, Ship3& fourth3Computer, Ship3& fifth3Computer,
    Ship2& first2Computer, Ship2& second2Computer, Ship2& third2Computer, Ship2& fourth2Computer, Ship2& fifth2Computer,
    Ship1& first1Computer, Ship1& second1Computer, Ship1& third1Computer, Ship1& fourth1Computer, Ship1& fifth1Computer) {

    if (!first5Computer.isSunk && number5 > 0) {
        return false;
    }
    if (!second5Computer.isSunk && number5 > 1) {
        return false;
    }
    if (!third5Computer.isSunk && number5 > 2) {
        return false;
    }
    if (!fourth5Computer.isSunk && number5 > 3) {
        return false;
    }
    if (!fifth5Computer.isSunk && number5 > 4) {
        return false;
    }
    if (!first4Computer.isSunk && number4 > 0) {
        return false;
    }
    if (!second4Computer.isSunk && number4 > 1) {
        return false;
    }
    if (!third4Computer.isSunk && number4 > 2) {
        return false;
    }
    if (!fourth4Computer.isSunk && number4 > 3) {
        return false;
    }
    if (!fifth4Computer.isSunk && number4 > 4) {
        return false;
    }
    if (!first3Computer.isSunk && number3 > 0) {
        return false;
    }
    if (!second3Computer.isSunk && number3 > 1) {
        return false;
    }
    if (!third3Computer.isSunk && number3 > 2) {
        return false;
    }
    if (!fourth3Computer.isSunk && number3 > 3) {
        return false;
    }
    if (!fifth3Computer.isSunk && number3 > 4) {
        return false;
    }
    if (!first2Computer.isSunk && number2 > 0) {
        return false;
    }
    if (!second2Computer.isSunk && number2 > 1) {
        return false;
    }
    if (!third2Computer.isSunk && number2 > 2) {
        return false;
    }
    if (!fourth2Computer.isSunk && number2 > 3) {
        return false;
    }
    if (!fifth2Computer.isSunk && number2 > 4) {
        return false;
    }
    if (!first1Computer.isSunk && number1 > 0) {
        return false;
    }
    if (!second1Computer.isSunk && number1 > 1) {
        return false;
    }
    if (!third1Computer.isSunk && number1 > 2) {
        return false;
    }
    if (!fourth1Computer.isSunk && number1 > 3) {
        return false;
    }
    if (!fifth1Computer.isSunk && number1 > 4) {
        return false;
    }

    return true;
}

bool ReworkedVersion::isComputerWinner(Ship5& first5, Ship5& second5, Ship5& third5, Ship5& fourth5, Ship5& fifth5,
    Ship4& first4, Ship4& second4, Ship4& third4, Ship4& fourth4, Ship4& fifth4,
    Ship3& first3, Ship3& second3, Ship3& third3, Ship3& fourth3, Ship3& fifth3,
    Ship2& first2, Ship2& second2, Ship2& third2, Ship2& fourth2, Ship2& fifth2,
    Ship1& first1, Ship1& second1, Ship1& third1, Ship1& fourth1, Ship1& fifth1){
    
    if (!first5.isSunk && number5 > 0) {
        return false;
    }
    if (!second5.isSunk && number5 > 1) {
        return false;
    }
    if (!third5.isSunk && number5 > 2) {
        return false;
    }
    if (!fourth5.isSunk && number5 > 3) {
        return false;
    }
    if (!fifth5.isSunk && number5 > 4) {
        return false;
    }
    if (!first4.isSunk && number4 > 0) {
        return false;
    }
    if (!second4.isSunk && number4 > 1) {
        return false;
    }
    if (!third4.isSunk && number4 > 2) {
        return false;
    }
    if (!fourth4.isSunk && number4 > 3) {
        return false;
    }
    if (!fifth4.isSunk && number4 > 4) {
        return false;
    }
    if (!first3.isSunk && number3 > 0) {
        return false;
    }
    if (!second3.isSunk && number3 > 1) {
        return false;
    }
    if (!third3.isSunk && number3 > 2) {
        return false;
    }
    if (!fourth3.isSunk && number3 > 3) {
        return false;
    }
    if (!fifth3.isSunk && number3 > 4) {
        return false;
    }
    if (!first2.isSunk && number2 > 0) {
        return false;
    }
    if (!second2.isSunk && number2 > 1) {
        return false;
    }
    if (!third2.isSunk && number2 > 2) {
        return false;
    }
    if (!fourth2.isSunk && number2 > 3) {
        return false;
    }
    if (!fifth2.isSunk && number2 > 4) {
        return false;
    }
    if (!first1.isSunk && number1 > 0) {
        return false;
    }
    if (!second1.isSunk && number1 > 1) {
        return false;
    }
    if (!third1.isSunk && number1 > 2) {
        return false;
    }
    if (!fourth1.isSunk && number1 > 3) {
        return false;
    }
    if (!fifth1.isSunk && number1 > 4) {
        return false;
    }

    return true;
}

void ReworkedVersion::winSound(sf::SoundBuffer& buffer, sf::Sound& sound){
    buffer.loadFromFile("sounds/win.wav");
    sound.setBuffer(buffer);
    sound.setVolume(30);
    sound.play();
}

void ReworkedVersion::lossSound(sf::SoundBuffer& buffer, sf::Sound& sound){
    buffer.loadFromFile("sounds/loss.wav");
    sound.setBuffer(buffer);
    sound.setVolume(30);
    sound.play();
}