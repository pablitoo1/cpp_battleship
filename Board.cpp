#include "Board.h"

Board::Board() {
    userBoard.resize(100);
    userBoardBorder.resize(100);
    computerBoard.resize(100);
    computerBoardBorder.resize(100);
    userColumnLabel.resize(10);
    userRowLabel.resize(10);
    computerColumnLabel.resize(10);
    computerRowLabel.resize(10);

    for (int i = 0; i < 100;i++) {
        userBoard[i].setSize(sf::Vector2f(50, 50));
        userBoard[i].setFillColor(sf::Color(0, 90, 255));
        userBoardBorder[i].setSize(userBoard[i].getSize());
        userBoardBorder[i].setPosition(userBoard[i].getPosition());
        userBoardBorder[i].setFillColor(sf::Color::Transparent);
        userBoardBorder[i].setOutlineColor(sf::Color::White);
        userBoardBorder[i].setOutlineThickness(2.0f);
        computerBoard[i].setSize(sf::Vector2f(50, 50));
        computerBoard[i].setFillColor(sf::Color(170, 170, 170));
        computerBoardBorder[i].setSize(computerBoard[i].getSize());
        computerBoardBorder[i].setPosition(computerBoard[i].getPosition());
        computerBoardBorder[i].setFillColor(sf::Color::Transparent);
        computerBoardBorder[i].setOutlineColor(sf::Color::White);
        computerBoardBorder[i].setOutlineThickness(2.0f);
    }

    for (int i = 0; i < 10; i++) {
        userColumnLabel[i].setPosition(217 + (50 * i), 216);
        userColumnLabel[i].setString(string(1, 'A' + i));
        userColumnLabel[i].setFont(font);
        userColumnLabel[i].setCharacterSize(24);
        userColumnLabel[i].setFillColor(sf::Color::White);

        userRowLabel[i].setPosition(167, 259 + (50 * i));
        userRowLabel[i].setString(to_string(i+1));
        userRowLabel[i].setFont(font);
        userRowLabel[i].setCharacterSize(24);
        userRowLabel[i].setFillColor(sf::Color::White);

        computerColumnLabel[i].setPosition(817 + (50 * i), 216);
        computerColumnLabel[i].setString(string(1, 'A' + i));
        computerColumnLabel[i].setFont(font);
        computerColumnLabel[i].setCharacterSize(24);
        computerColumnLabel[i].setFillColor(sf::Color::White);

        computerRowLabel[i].setPosition(1317, 259 + (50 * i));
        computerRowLabel[i].setString(to_string(i + 1));
        computerRowLabel[i].setFont(font);
        computerRowLabel[i].setCharacterSize(24);
        computerRowLabel[i].setFillColor(sf::Color::White);

        for (int j = 0; j < 10; j++) {
            userBoard[(i * 10) + j].setPosition(200 + (50 * j), 250 + (50 * i));
            userBoardBorder[(i * 10) + j].setPosition(200 + (50 * j), 250 + (50 * i));
            computerBoard[(i * 10) + j].setPosition(800 + (50 * j), 250 + (50 * i));
            computerBoardBorder[(i * 10) + j].setPosition(800 + (50 * j), 250 + (50 * i));
        }
    }

    backgroundTexture.loadFromFile("images/background.jpg");
    background.setTexture(backgroundTexture);

    font.loadFromFile("fonts/OpenSans-SemiBold.ttf");

    title.setFont(font);
    title.setString("GRA W STATKI");
    title.setStyle(sf::Text::Bold);
    title.setCharacterSize(62);
    title.setFillColor(sf::Color::White);
    title.setPosition(532, 30);

    user.setFont(font);
    user.setString("Gracz");
    user.setCharacterSize(30);
    user.setFillColor(sf::Color::White);
    user.setPosition(420, 170);

    computer.setFont(font);
    computer.setString("Komputer");
    computer.setCharacterSize(30);
    computer.setFillColor(sf::Color::White);
    computer.setPosition(990, 170);
}

void Board::resetAll(){
    for (int i = 0; i < 100;i++) {
        userBoard[i].setFillColor(sf::Color(0, 90, 255));
        userBoardBorder[i].setFillColor(sf::Color::Transparent);
        userBoardBorder[i].setOutlineColor(sf::Color::White);
        computerBoard[i].setFillColor(sf::Color(170, 170, 170));
        computerBoardBorder[i].setFillColor(sf::Color::Transparent);
        computerBoardBorder[i].setOutlineColor(sf::Color::White);
    }
}

int Board::getPosition(const sf::Event& event) const{
    if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
        sf::Vector2f mousePosition(static_cast<float>(event.mouseButton.x), static_cast<float>(event.mouseButton.y));

        for (int i = 0; i < userBoard.size(); i++) {
            if (userBoard[i].getGlobalBounds().contains(mousePosition)) {
                return (i + 1);
            }
        }
        return 0;
    }
}

int Board::getPositionComputer(const sf::Event& event) const{
    if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
        sf::Vector2f mousePosition(static_cast<float>(event.mouseButton.x), static_cast<float>(event.mouseButton.y));

        for (int i = 0; i < computerBoard.size(); i++) {
            if (computerBoard[i].getGlobalBounds().contains(mousePosition)) {
                return (i + 1);
            }
        }
        return 0;
    }
}


void Board::update(int field) {
    userBoard[field-1].setFillColor(sf::Color(50, 50, 50));
}

void Board::updateComputer(int field) {
    computerBoard[field - 1].setFillColor(sf::Color(50, 50, 50));
}

void Board::cancelUpdate(vector <int> fieldsToDelete) {
    for (int i = 0; i < fieldsToDelete.size(); i++) {
        userBoard[fieldsToDelete[i]-1].setFillColor(sf::Color(0, 90, 255));
    }
}

void Board::draw(sf::RenderWindow& window) {

    window.draw(background);

    for (int i = 0; i < 100; i++) {
        window.draw(userBoard[i]);
        window.draw(userBoardBorder[i]);
        window.draw(computerBoard[i]);
        window.draw(computerBoardBorder[i]);
    }

    for (int i = 0; i < 10; i++) {
        window.draw(userColumnLabel[i]);
        window.draw(userRowLabel[i]);
        window.draw(computerColumnLabel[i]);
        window.draw(computerRowLabel[i]);
    }

    window.draw(title);
    window.draw(user);
    window.draw(computer);
}

void Board::updateHit(int field) {
    userBoard[field - 1].setFillColor(sf::Color(255, 80, 80));
}

void Board::updateHitComputer(int field) {
    computerBoard[field - 1].setFillColor(sf::Color(255, 80, 80));
}

void Board::updateHitCorrect(int field) {
    userBoard[field - 1].setFillColor(sf::Color(128, 0, 0));
}

void Board::updateHitComputerCorrect(int field) {
    computerBoard[field - 1].setFillColor(sf::Color(128, 0, 0));
}

void Board::updateHitSunk(int field){
    userBoard[field - 1].setFillColor(sf::Color(70, 0, 0));
}

void Board::updateHitSunkComputer(int field){
    computerBoard[field - 1].setFillColor(sf::Color(70, 0, 0));
}