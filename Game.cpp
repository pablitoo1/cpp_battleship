#include "Game.h"

void Game::run()
{
    sf::RenderWindow window(sf::VideoMode(1500, 900), "Gra w statki", sf::Style::Titlebar | sf::Style::Close);

    icon.loadFromFile("images/icon.png");
    window.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());

    music.openFromFile("sounds/szanty.mp3");
    music.setVolume(10);
    music.setLoop(true);
    music.play();

    while (window.isOpen())
    {
        window.clear();

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            else if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
            {
                sf::Vector2i mousePosition = sf::Mouse::getPosition(window);
                if (!handleGame.isComputerTurn &&  menu.resetSprite.getGlobalBounds().contains(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y))) {
                    restartGame();
                }
                if (!handleGame.isComputerTurn && menu.offSprite.getGlobalBounds().contains(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y))) {
                    window.close();
                }
                if (menu.button.getGlobalBounds().contains(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y))){
                    if (restart) {
                        restartGame();
                        restart = false;
                    }
                    else if (!menu.isVersionChoosen) {
                        menu.isVersionChoosen = true;
                        handleGame.isVersionClassic = true;
                        handleGame.isVersionReworked = false;
                    }
                    else {
                        if (menu.isGameStarted) {
                            menu.isClicked = true;
                        }
                    }
                }
                if (menu.buttonRandom.getGlobalBounds().contains(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y))){
                    if (!menu.isVersionChoosen) {
                        menu.customShips = true;
                    }
                }
                if (menu.buttonShips.getGlobalBounds().contains(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y)) && !menu.isGameStarted) {
                    reworkedVersion.setNumbers(handleCustomShips, menu);
                    menu.customShips = false;
                    menu.isVersionChoosen = true;
                    handleGame.isVersionClassic = false;
                    handleGame.isVersionReworked = true;
                }
                if (menu.randomSprite.getGlobalBounds().contains(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y))) {
                    if (menu.isVersionChoosen) {
                        if (handleGame.isVersionClassic) {
                            classicVersion.handleRandomShips(handleFieldAddition, occupiedField, board, menu, first4, first3, second3, first2, second2, third2, first1, second1, third1, fourth1, handleGame);
                        }
                        else if (handleGame.isVersionReworked) {
                            reworkedVersion.handleRandomShips(handleFieldAddition, occupiedField, board, menu, first5, second5, third5, fourth5, fifth5, first4, second4, third4, fourth4, fifth4, first3, second3, third3, fourth3, fifth3, first2, second2, third2, fourth2, fifth2, first1, second1, third1, fourth1, fifth1, handleGame);
                        }
                    }
                }
                if (menu.randomAllSprite.getGlobalBounds().contains(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y))) {
                    if (menu.isVersionChoosen) {
                        if (handleGame.isVersionClassic) {
                            classicVersion.handleRandomShipsAll(handleFieldAddition, occupiedField, board, menu, first4, first3, second3, first2, second2, third2, first1, second1, third1, fourth1, handleGame);
                        }
                        else if (handleGame.isVersionReworked) {
                            reworkedVersion.handleRandomShipsAll(handleFieldAddition, occupiedField, board, menu, first5, second5, third5, fourth5, fifth5, first4, second4, third4, fourth4, fifth4, first3, second3, third3, fourth3, fifth3, first2, second2, third2, fourth2, fifth2, first1, second1, third1, fourth1, fifth1, handleGame);
                        }
                    }
                }
                if (!menu.isVersionChoosen && !menu.isGameStarted && (menu.checkboxFields.getGlobalBounds().contains(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y)) || menu.fieldsText.getGlobalBounds().contains(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y)))) {
                    menu.handleCheckboxFields();
                }
                if (!menu.isVersionChoosen && !menu.isGameStarted && (menu.checkboxShips.getGlobalBounds().contains(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y)) || menu.shipsText.getGlobalBounds().contains(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y)))) {
                    menu.handleCheckboxShips();
                }
                if (menu.arrowUp5.getGlobalBounds().contains(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y))) {
                    handleCustomShips.handleAdd5(menu);
                }
                if (menu.arrowDown5.getGlobalBounds().contains(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y))) {
                    handleCustomShips.handleDel5(menu);
                }
                if (menu.arrowUp4.getGlobalBounds().contains(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y))) {
                    handleCustomShips.handleAdd4(menu);
                }
                if (menu.arrowDown4.getGlobalBounds().contains(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y))) {
                    handleCustomShips.handleDel4(menu);
                }
                if (menu.arrowUp3.getGlobalBounds().contains(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y))) {
                    handleCustomShips.handleAdd3(menu);
                }
                if (menu.arrowDown3.getGlobalBounds().contains(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y))) {
                    handleCustomShips.handleDel3(menu);
                }
                if (menu.arrowUp2.getGlobalBounds().contains(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y))) {
                    handleCustomShips.handleAdd2(menu);
                }
                if (menu.arrowDown2.getGlobalBounds().contains(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y))) {
                    handleCustomShips.handleDel2(menu);
                }
                if (menu.arrowUp1.getGlobalBounds().contains(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y))) {
                    handleCustomShips.handleAdd1(menu);
                }
                if (menu.arrowDown1.getGlobalBounds().contains(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y))) {
                    handleCustomShips.handleDel1(menu);
                }
                else if (board.getPosition(event) != 0 && !handleGame.isUserTurn && !handleGame.isComputerTurn) {
                    if (handleGame.isVersionClassic) {
                        classicVersion.handleClick(event, handleFieldAddition, first4, first3, second3, first2, second2, third2, first1, second1, third1, fourth1, board, menu, occupiedField);
                    }
                    else if (handleGame.isVersionReworked) {
                        reworkedVersion.handleClick(event, handleFieldAddition, first5, second5, third5, fourth5, fifth5, first4, second4, third4, fourth4, fifth4, first3, second3, third3, fourth3, fifth3, first2, second2, third2, fourth2, fifth2, first1, second1, third1, fourth1, fifth1, board, menu, occupiedField);
                    }
                }
                else if (menu.isClicked && handleGame.isUserTurn && board.getPositionComputer(event) != 0) {
                    if (handleGame.isVersionClassic) {
                        classicVersion.shootingUser(event, sound, buffer, handleGame, board, first4Computer, first3Computer, second3Computer, first2Computer, second2Computer, third2Computer, first1Computer, second1Computer, third1Computer, fourth1Computer);
                    }
                    else if (handleGame.isVersionReworked) {
                        reworkedVersion.shootingUser(event, sound, buffer, handleGame, board, first5Computer, second5Computer, third5Computer, fourth5Computer, fifth5Computer, first4Computer, second4Computer, third4Computer, fourth4Computer, fifth4Computer, first3Computer, second3Computer, third3Computer, fourth3Computer, fifth3Computer, first2Computer, second2Computer, third2Computer, fourth2Computer, fifth2Computer, first1Computer, second1Computer, third1Computer, fourth1Computer, fifth1Computer);
                    }
                }
                else if (menu.isClicked && handleGame.isComputerTurn) {
                    if (computerShootClock.getElapsedTime().asSeconds() > 1) {
                        if (handleGame.isVersionClassic) {
                            classicVersion.shootingComputer(event, sound, buffer, handleGame, board, first4, first3, second3, first2, second2, third2, first1, second1, third1, fourth1);
                        }
                        else if (handleGame.isVersionReworked) {
                            reworkedVersion.shootingComputer(event, sound, buffer, handleGame, board, menu, first5, second5, third5, fourth5, fifth5, first4, second4, third4, fourth4, fifth4, first3, second3, third3, fourth3, fifth3, first2, second2, third2, fourth2, fifth2, first1, second1, third1, fourth1, fifth1);
                        }
                        computerShootClock.restart();
                    }
                }
            }
            
        }
        window.clear();

        if (handleGame.isComputerTurn && !restart) {
            handleGame.simulateMouseClick(window);
        }

        board.draw(window);

        if (handleGame.isVersionClassic) {
            classicVersion.handleChanges(handleFieldAddition, first4, first3, second3, first2, second2, third2, first1, second1, third1, fourth1, board, occupiedField, handleGame, menu);
            classicVersion.showingMenu(window, first4, first3, second3, first2, second2, third2, first1, second1, third1, fourth1, menu);
            classicVersion.handleSunkShipShips(handleSunkShip, handleGame, board, menu, first4, first3, second3, first2, second2, third2, first1, second1, third1, fourth1);
            classicVersion.handleSunkShipShipsComputer(handleSunkShip, handleGame, board, menu, first4Computer, first3Computer, second3Computer, first2Computer, second2Computer, third2Computer, first1Computer, second1Computer, third1Computer, fourth1Computer);
            classicVersion.addingShipsComputer(handleFieldAddition, fourth1, first4Computer, first3Computer, second3Computer, first2Computer, second2Computer, third2Computer, first1Computer, second1Computer, third1Computer, fourth1Computer, board, occupiedFieldComputer, handleGame, menu);
        }
        else if (handleGame.isVersionReworked) {
            reworkedVersion.handleChanges(handleFieldAddition, first5, second5, third5, fourth5, fifth5, first4, second4, third4, fourth4, fifth4, first3, second3, third3, fourth3, fifth3, first2, second2, third2, fourth2, fifth2, first1, second1, third1, fourth1, fifth1, board, occupiedField, handleGame, menu);
            reworkedVersion.showingMenu(window, first5, second5, third5, fourth5, fifth5, first4, second4, third4, fourth4, fifth4, first3, second3, third3, fourth3, fifth3, first2, second2, third2, fourth2, fifth2, first1, second1, third1, fourth1, fifth1, menu);
            reworkedVersion.handleSunkShipShips(handleSunkShip, handleGame, board, menu, first5, second5, third5, fourth5, fifth5, first4, second4, third4, fourth4, fifth4, first3, second3, third3, fourth3, fifth3, first2, second2, third2, fourth2, fifth2, first1, second1, third1, fourth1, fifth1);
            reworkedVersion.handleSunkShipShipsComputer(handleSunkShip, handleGame, board, menu, first5Computer, second5Computer, third5Computer, fourth5Computer, fifth5Computer, first4Computer, second4Computer, third4Computer, fourth4Computer, fifth4Computer, first3Computer, second3Computer, third3Computer, fourth3Computer, fifth3Computer, first2Computer, second2Computer, third2Computer, fourth2Computer, fifth2Computer, first1Computer, second1Computer, third1Computer, fourth1Computer, fifth1Computer);
            reworkedVersion.addingShipsComputer(handleFieldAddition, first5Computer, second5Computer, third5Computer, fourth5Computer, fifth5Computer, first4Computer, second4Computer, third4Computer, fourth4Computer, fifth4Computer, first3Computer, second3Computer, third3Computer, fourth3Computer, fifth3Computer, first2Computer, second2Computer, third2Computer, fourth2Computer, fifth2Computer, first1Computer, second1Computer, third1Computer, fourth1Computer, fifth1Computer, board, occupiedFieldComputer, handleGame, menu);
        }

        handleGame.chooseVersion(menu, window);

        if (reworkedVersion.isUserWinner(first5Computer, second5Computer, third5Computer, fourth5Computer, fifth5Computer, first4Computer, second4Computer, third4Computer, fourth4Computer, fifth4Computer, first3Computer, second3Computer, third3Computer, fourth3Computer, fifth3Computer, first2Computer, second2Computer, third2Computer, fourth2Computer, fifth2Computer, first1Computer, second1Computer, third1Computer, fourth1Computer, fifth1Computer)
            || classicVersion.isUserWinner(first4Computer, first3Computer, second3Computer, first2Computer, second2Computer, third2Computer, first1Computer, second1Computer, third1Computer, fourth1Computer)) {
            if (soundEnd.getStatus() != sf::Sound::Playing) {
                reworkedVersion.winSound(bufferEnd, soundEnd);
            }
            menu.isClicked = false;
            menu.displayMessage("Gratulacje! Jestes zwyciezca!", window);
            menu.buttonText.setString("Od nowa!");
            menu.buttonText.setPosition(710, 415);
            restart = true;
        }
        if (reworkedVersion.isComputerWinner(first5, second5, third5, fourth5, fifth5, first4, second4, third4, fourth4, fifth4, first3, second3, third3, fourth3, fifth3, first2, second2, third2, fourth2, fifth2, first1, second1, third1, fourth1, fifth1)
            || classicVersion.isComputerWinner(first4, first3, second3, first2, second2, third2, first1, second1, third1, fourth1)) {
            if (soundEnd.getStatus() != sf::Sound::Playing) {
                reworkedVersion.lossSound(bufferEnd, soundEnd);
            }
            menu.isClicked = false;
            menu.displayMessage("Niestety! Zostales pokonany!", window);
            menu.buttonText.setString("Od nowa!");
            menu.buttonText.setPosition(710, 415);
            restart = true;
        }

        menu.displayButtons(window);

        window.display();
    }
}

void Game::restartGame()
{
    first5.resetAll();
    first5Computer.resetAll();
    second5.resetAll();
    second5Computer.resetAll();
    third5.resetAll();
    third5Computer.resetAll();
    fourth5.resetAll();
    fourth5Computer.resetAll();
    fifth5.resetAll();
    fifth5Computer.resetAll();
    first4.resetAll();
    first4Computer.resetAll();
    second4.resetAll();
    second4Computer.resetAll();
    third4.resetAll();
    third4Computer.resetAll();
    fourth4.resetAll();
    fourth4Computer.resetAll();
    fifth4.resetAll();
    fifth4Computer.resetAll();
    first3.resetAll();
    first3Computer.resetAll();
    second3.resetAll();
    second3Computer.resetAll();
    third3.resetAll();
    third3Computer.resetAll();
    fourth3.resetAll();
    fourth3Computer.resetAll();
    fifth3.resetAll();
    fifth3Computer.resetAll();
    first2.resetAll();
    first2Computer.resetAll();
    second2.resetAll();
    second2Computer.resetAll();
    third2.resetAll();
    third2Computer.resetAll();
    fourth2.resetAll();
    fourth2Computer.resetAll();
    fifth2.resetAll();
    fifth2Computer.resetAll();
    first1.resetAll();
    first1Computer.resetAll();
    second1.resetAll();
    second1Computer.resetAll();
    third1.resetAll();
    third1Computer.resetAll();
    fourth1.resetAll();
    fourth1Computer.resetAll();
    fifth1.resetAll();
    fifth1Computer.resetAll();
    reworkedVersion.resetAll();
    classicVersion.resetAll();
    menu.resetAll();
    occupiedField.resetAll();
    occupiedFieldComputer.resetAll();
    handleGame.resetAll();
    board.resetAll();
}