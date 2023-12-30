#include "ClassicVersion.h"

void ClassicVersion::resetAll(){
    lastHitPosition = 0;
    computerShotPosition = 0;
    hittedFields.clear();
}

void ClassicVersion::handleClick(sf::Event& event, HandleFieldAddition& handleFieldAddition, Ship4& first4, Ship3& first3, Ship3& second3, Ship2& first2, Ship2& second2, Ship2& third2, Ship1& first1, Ship1& second1, Ship1& third1, Ship1& fourth1, Board& board, Menu& menu, OccupiedField& occupiedField) {
    handleFieldAddition.handleShip4(event, first4, occupiedField, board, menu);

    if (first4.isAdded) {
        handleFieldAddition.handleShip3(event, first3, occupiedField, board, menu);

        if (first3.isAdded) {
            handleFieldAddition.handleShip3(event, second3, occupiedField, board, menu);

            if (second3.isAdded) {
                handleFieldAddition.handleShip2(event, first2, occupiedField, board, menu);

                if (first2.isAdded) {
                    handleFieldAddition.handleShip2(event, second2, occupiedField, board, menu);

                    if (second2.isAdded) {
                        handleFieldAddition.handleShip2(event, third2, occupiedField, board, menu);

                        if (third2.isAdded) {
                            handleFieldAddition.handleShip1(event, first1, occupiedField, board, menu);

                            if (first1.isAdded) {
                                handleFieldAddition.handleShip1(event, second1, occupiedField, board, menu);

                                if (second1.isAdded) {
                                    handleFieldAddition.handleShip1(event, third1, occupiedField, board, menu);

                                    if (third1.isAdded) {
                                        handleFieldAddition.handleShip1(event, fourth1, occupiedField, board, menu);
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

void ClassicVersion::showingMenu(sf::RenderWindow& window, Ship4& first4, Ship3& first3, Ship3& second3, Ship2& first2, Ship2& second2, Ship2& third2, Ship1& first1, Ship1& second1, Ship1& third1, Ship1& fourth1, Menu& menu) {
    if (menu.isVersionChoosen) {
        if (!first4.isAdded) {
            menu.displayMessage("Dodaj 1. statek 4-masztowy", window);
        }
        else {
            if (!first3.isAdded) {
                menu.displayMessage("Dodaj 1. statek 3-masztowy", window);
            }
            else {
                if (!second3.isAdded) {
                    menu.displayMessage("Dodaj 2. statek 3-masztowy", window);
                }
                else {
                    if (!first2.isAdded) {
                        menu.displayMessage("Dodaj 1. statek 2-masztowy", window);
                    }
                    else {
                        if (!second2.isAdded) {
                            menu.displayMessage("Dodaj 2. statek 2-masztowy", window);
                        }
                        else {
                            if (!third2.isAdded) {
                                menu.displayMessage("Dodaj 3. statek 2-masztowy", window);
                            }
                            else {
                                if (!first1.isAdded) {
                                    menu.displayMessage("Dodaj 1. statek 1-masztowy", window);
                                }
                                else {
                                    if (!second1.isAdded) {
                                        menu.displayMessage("Dodaj 2. statek 1-masztowy", window);
                                    }
                                    else {
                                        if (!third1.isAdded) {
                                            menu.displayMessage("Dodaj 3. statek 1-masztowy", window);
                                        }
                                        else {
                                            if (!fourth1.isAdded) {
                                                menu.displayMessage("Dodaj 4. statek 1-masztowy", window);
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
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void ClassicVersion::handleChanges(HandleFieldAddition& handleFieldAddition, Ship4& first4, Ship3& first3, Ship3& second3, Ship2& first2, Ship2& second2, Ship2& third2, Ship1& first1, Ship1& second1, Ship1& third1, Ship1& fourth1, Board& board, OccupiedField& occupiedField, HandleGame& handleGame, Menu& menu) {
    handleFieldAddition.handleCancelChanges4(first4, board, handleGame, menu);
    if (first4.isFieldsOK(handleGame, menu)) {
        handleFieldAddition.handleAcceptChanges4(first4, occupiedField);
        handleFieldAddition.handleCancelChanges3(first3, board, handleGame, menu);
        if (first3.isFieldsOK(handleGame, menu)) {
            handleFieldAddition.handleAcceptChanges3(first3, occupiedField);
            handleFieldAddition.handleCancelChanges3(second3, board, handleGame, menu);
            if (second3.isFieldsOK(handleGame, menu)) {
                handleFieldAddition.handleAcceptChanges3(second3, occupiedField);
                handleFieldAddition.handleCancelChanges2(first2, board);
                if (first2.isFieldsOK()) {
                    handleFieldAddition.handleAcceptChanges2(first2, occupiedField);
                    handleFieldAddition.handleCancelChanges2(second2, board);
                    if (second2.isFieldsOK()) {
                        handleFieldAddition.handleAcceptChanges2(second2, occupiedField);
                        handleFieldAddition.handleCancelChanges2(third2, board);
                        if (third2.isFieldsOK()) {
                            handleFieldAddition.handleAcceptChanges2(third2, occupiedField);
                            handleFieldAddition.handleCancelChanges1(first1, board);
                            if (first1.isFieldsOK()) {
                                handleFieldAddition.handleAcceptChanges1(first1, occupiedField);
                                handleFieldAddition.handleCancelChanges1(second1, board);
                                if (second1.isFieldsOK()) {
                                    handleFieldAddition.handleAcceptChanges1(second1, occupiedField);
                                    handleFieldAddition.handleCancelChanges1(third1, board);
                                    if (third1.isFieldsOK()) {
                                        handleFieldAddition.handleAcceptChanges1(third1, occupiedField);
                                        handleFieldAddition.handleCancelChanges1(fourth1, board);
                                        if (fourth1.isFieldsOK()) {
                                            handleFieldAddition.handleAcceptChanges1(fourth1, occupiedField);
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

void ClassicVersion::addingShipsComputer(HandleFieldAddition& handleFieldAddition, Ship1& fourth1, Ship4& first4Computer,Ship3& first3Computer, Ship3& second3Computer, Ship2& first2Computer, Ship2& second2Computer, Ship2& third2Computer, Ship1& first1Computer, Ship1& second1Computer, Ship1& third1Computer, Ship1& fourth1Computer, Board& board, OccupiedField& occupiedFieldComputer, HandleGame& handleGame, Menu& menu) {
    if (fourth1.isAdded) {
        if (!first4Computer.isAdded) {
            handleFieldAddition.handleShip4Computer(first4Computer, occupiedFieldComputer, board, handleGame, menu);

            if (!first3Computer.isAdded) {
                handleFieldAddition.handleShip3Computer(first3Computer, occupiedFieldComputer, board, handleGame, menu);

                if (!second3Computer.isAdded) {
                    handleFieldAddition.handleShip3Computer(second3Computer, occupiedFieldComputer, board, handleGame, menu);

                    if (!first2Computer.isAdded) {
                        handleFieldAddition.handleShip2Computer(first2Computer, occupiedFieldComputer, board);

                        if (!second2Computer.isAdded) {
                            handleFieldAddition.handleShip2Computer(second2Computer, occupiedFieldComputer, board);

                            if (!third2Computer.isAdded) {
                                handleFieldAddition.handleShip2Computer(third2Computer, occupiedFieldComputer, board);

                                if (!first1Computer.isAdded) {
                                    handleFieldAddition.handleShip1Computer(first1Computer, occupiedFieldComputer, board);

                                    if (!second1Computer.isAdded) {
                                        handleFieldAddition.handleShip1Computer(second1Computer, occupiedFieldComputer, board);

                                        if (!third1Computer.isAdded) {
                                            handleFieldAddition.handleShip1Computer(third1Computer, occupiedFieldComputer, board);

                                            if (!fourth1Computer.isAdded) {
                                                handleFieldAddition.handleShip1Computer(fourth1Computer, occupiedFieldComputer, board);
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

void ClassicVersion::shootingUser(sf::Event& event, sf::Sound& sound, sf::SoundBuffer& buffer, HandleGame& handleGame, Board& board, Ship4& first4Computer, Ship3& first3Computer, Ship3& second3Computer, Ship2& first2Computer, Ship2& second2Computer, Ship2& third2Computer, Ship1& first1Computer, Ship1& second1Computer, Ship1& third1Computer, Ship1& fourth1Computer) {
    if (handleGame.isFieldAvailableComputer(board.getPositionComputer(event))) {
        if (first4Computer.isHit(board.getPositionComputer(event))) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (first3Computer.isHit(board.getPositionComputer(event))) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (second3Computer.isHit(board.getPositionComputer(event))) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (first2Computer.isHit(board.getPositionComputer(event))) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (second2Computer.isHit(board.getPositionComputer(event))) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (third2Computer.isHit(board.getPositionComputer(event))) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (first1Computer.isHit(board.getPositionComputer(event))) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (second1Computer.isHit(board.getPositionComputer(event))) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (third1Computer.isHit(board.getPositionComputer(event))) {
            board.updateHitComputerCorrect(board.getPositionComputer(event));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (fourth1Computer.isHit(board.getPositionComputer(event))) {
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

void ClassicVersion::shootingComputer(sf::Event& event, sf::Sound& sound, sf::SoundBuffer& buffer, HandleGame& handleGame, Board& board, Ship4& first4, Ship3& first3, Ship3& second3, Ship2& first2, Ship2& second2, Ship2& third2, Ship1& first1, Ship1& second1, Ship1& third1, Ship1& fourth1) {
    srand(static_cast<unsigned>(time(nullptr)));

    if (first4.isHit(lastHitPosition) && first4.isSunk) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (first3.isHit(lastHitPosition) && first3.isSunk) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (second3.isHit(lastHitPosition) && second3.isSunk) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (first2.isHit(lastHitPosition) && first2.isSunk) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (second2.isHit(lastHitPosition) && second2.isSunk) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (third2.isHit(lastHitPosition) && third2.isSunk) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (first1.isHit(lastHitPosition) && first1.isSunk) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (second1.isHit(lastHitPosition) && second1.isSunk) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (third1.isHit(lastHitPosition) && third1.isSunk) {
        lastHitPosition = 0;
        hittedFields.clear();
    }
    if (fourth1.isHit(lastHitPosition) && fourth1.isSunk) {
        lastHitPosition = 0;
        hittedFields.clear();
    }

    do {
        if (lastHitPosition != 0) {
            while (computerShotPosition > 100 || computerShotPosition < 1 || !handleGame.isFieldAvailable(computerShotPosition)) {
                int randomIndex = rand() % hittedFields.size();
                int randomNumber = rand() % 4;
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
        }
        else {
            computerShotPosition = (rand() % 100) + 1;
        }
    } while (!handleGame.isFieldAvailable(computerShotPosition));

    if (handleGame.isFieldAvailable(computerShotPosition)) {
        if (first4.isHit(computerShotPosition)) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (first3.isHit(computerShotPosition)) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (second3.isHit(computerShotPosition)) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (first2.isHit(computerShotPosition)) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (second2.isHit(computerShotPosition)) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (third2.isHit(computerShotPosition)) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (first1.isHit(computerShotPosition)) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (second1.isHit(computerShotPosition)) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (third1.isHit(computerShotPosition)) {
            lastHitPosition = computerShotPosition;
            hittedFields.push_back(computerShotPosition);
            board.updateHitCorrect(computerShotPosition);
            sf::sleep(sf::seconds(1));
            buffer.loadFromFile("sounds/hit.wav");
        }
        else if (fourth1.isHit(computerShotPosition)) {
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

void ClassicVersion::handleSunkShipShips(HandleSunkShip& handleSunkShip, HandleGame& handleGame, Board& board, Menu& menu, Ship4& first4, Ship3& first3, Ship3& second3, Ship2& first2, Ship2& second2, Ship2& third2, Ship1& first1, Ship1& second1, Ship1& third1, Ship1& fourth1) {
    handleSunkShip.handleSunkShip4(handleGame, board, menu, first4);
    handleSunkShip.handleSunkShip3(handleGame, board, menu, first3);
    handleSunkShip.handleSunkShip3(handleGame, board, menu, second3);
    handleSunkShip.handleSunkShip2(handleGame, board, menu, first2);
    handleSunkShip.handleSunkShip2(handleGame, board, menu, second2);
    handleSunkShip.handleSunkShip2(handleGame, board, menu, third2);
    handleSunkShip.handleSunkShip1(handleGame, board, menu, first1);
    handleSunkShip.handleSunkShip1(handleGame, board, menu, second1);
    handleSunkShip.handleSunkShip1(handleGame, board, menu, third1);
    handleSunkShip.handleSunkShip1(handleGame, board, menu, fourth1);
}

void ClassicVersion::handleSunkShipShipsComputer(HandleSunkShip& handleSunkShip, HandleGame& handleGame, Board& board, Menu& menu, Ship4& first4Computer, Ship3& first3Computer, Ship3& second3Computer, Ship2& first2Computer, Ship2& second2Computer, Ship2& third2Computer, Ship1& first1Computer, Ship1& second1Computer, Ship1& third1Computer, Ship1& fourth1Computer) {
    handleSunkShip.handleSunkShip4Computer(handleGame, board, menu, first4Computer);
    handleSunkShip.handleSunkShip3Computer(handleGame, board, menu, first3Computer);
    handleSunkShip.handleSunkShip3Computer(handleGame, board, menu, second3Computer);
    handleSunkShip.handleSunkShip2Computer(handleGame, board, menu, first2Computer);
    handleSunkShip.handleSunkShip2Computer(handleGame, board, menu, second2Computer);
    handleSunkShip.handleSunkShip2Computer(handleGame, board, menu, third2Computer);
    handleSunkShip.handleSunkShip1Computer(handleGame, board, menu, first1Computer);
    handleSunkShip.handleSunkShip1Computer(handleGame, board, menu, second1Computer);
    handleSunkShip.handleSunkShip1Computer(handleGame, board, menu, third1Computer);
    handleSunkShip.handleSunkShip1Computer(handleGame, board, menu, fourth1Computer);
}

void ClassicVersion::handleRandomShips(HandleFieldAddition& handleFieldAddition, OccupiedField& occupiedField, Board& board, Menu& menu, Ship4& first4, Ship3& first3, Ship3& second3, Ship2& first2, Ship2& second2, Ship2& third2, Ship1& first1, Ship1& second1, Ship1& third1, Ship1& fourth1, HandleGame& handleGame) {
    if (!first4.isAdded) {
        handleFieldAddition.handleShip4Random(first4, occupiedField, board, menu, handleGame);
    }
    else if (!first3.isAdded) {
        handleFieldAddition.handleShip3Random(first3, occupiedField, board, menu, handleGame);
    }
    else if (!second3.isAdded) {
        handleFieldAddition.handleShip3Random(second3, occupiedField, board, menu, handleGame);
    }
    else if (!first2.isAdded) {
        handleFieldAddition.handleShip2Random(first2, occupiedField, board, menu);
    }
    else if (!second2.isAdded) {
        handleFieldAddition.handleShip2Random(second2, occupiedField, board, menu);
    }
    else if (!third2.isAdded) {
        handleFieldAddition.handleShip2Random(third2, occupiedField, board, menu);
    }
    else if (!first1.isAdded) {
        handleFieldAddition.handleShip1Random(first1, occupiedField, board, menu);
    }
    else if (!second1.isAdded) {
        handleFieldAddition.handleShip1Random(second1, occupiedField, board, menu);
    }
    else if (!third1.isAdded) {
        handleFieldAddition.handleShip1Random(third1, occupiedField, board, menu);
    }
    else if (!fourth1.isAdded) {
        handleFieldAddition.handleShip1Random(fourth1, occupiedField, board, menu);
    }
}

void ClassicVersion::handleRandomShipsAll(HandleFieldAddition& handleFieldAddition, OccupiedField& occupiedField, Board& board, Menu& menu, Ship4& first4, Ship3& first3, Ship3& second3, Ship2& first2, Ship2& second2, Ship2& third2, Ship1& first1, Ship1& second1, Ship1& third1, Ship1& fourth1, HandleGame& handleGame){
    if (!first4.isAdded) {
        handleFieldAddition.handleShip4Random(first4, occupiedField, board, menu, handleGame);
    }
    if (!first3.isAdded) {
        handleFieldAddition.handleShip3Random(first3, occupiedField, board, menu, handleGame);
    }
    if (!second3.isAdded) {
        handleFieldAddition.handleShip3Random(second3, occupiedField, board, menu, handleGame);
    }
    if (!first2.isAdded) {
        handleFieldAddition.handleShip2Random(first2, occupiedField, board, menu);
    }
    if (!second2.isAdded) {
        handleFieldAddition.handleShip2Random(second2, occupiedField, board, menu);
    }
    if (!third2.isAdded) {
        handleFieldAddition.handleShip2Random(third2, occupiedField, board, menu);
    }
    if (!first1.isAdded) {
        handleFieldAddition.handleShip1Random(first1, occupiedField, board, menu);
    }
    if (!second1.isAdded) {
        handleFieldAddition.handleShip1Random(second1, occupiedField, board, menu);
    }
    if (!third1.isAdded) {
        handleFieldAddition.handleShip1Random(third1, occupiedField, board, menu);
    }
    if (!fourth1.isAdded) {
        handleFieldAddition.handleShip1Random(fourth1, occupiedField, board, menu);
    }
}

bool ClassicVersion::isUserWinner(Ship4& first4Computer, Ship3& first3Computer, Ship3& second3Computer, Ship2& first2Computer, Ship2& second2Computer, Ship2& third2Computer, Ship1& first1Computer, Ship1& second1Computer, Ship1& third1Computer, Ship1& fourth1Computer) {
    if (first4Computer.isSunk && first3Computer.isSunk && second3Computer.isSunk && first2Computer.isSunk && second2Computer.isSunk && third2Computer.isSunk && first1Computer.isSunk && second1Computer.isSunk && third1Computer.isSunk && fourth1Computer.isSunk) {
        return true;
    }
    return false;
}

bool ClassicVersion::isComputerWinner(Ship4& first4, Ship3& first3, Ship3& second3, Ship2& first2, Ship2& second2, Ship2& third2, Ship1& first1, Ship1& second1, Ship1& third1, Ship1& fourth1) {
    if (first4.isSunk && first3.isSunk && second3.isSunk && first2.isSunk && second2.isSunk && third2.isSunk && first1.isSunk && second1.isSunk && third1.isSunk && fourth1.isSunk) {
        return true;
    }
    return false;
}