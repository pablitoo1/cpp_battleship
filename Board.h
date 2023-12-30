#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Board {
public:
    Board();

    void resetAll();
    int getPosition(const sf::Event& event) const;
    int getPositionComputer(const sf::Event& event) const;
    void update(int field);
    void updateComputer(int field);
    void cancelUpdate(vector <int> fieldsToDelete);
    void draw(sf::RenderWindow& window);
    void updateHit(int field);
    void updateHitComputer(int field);
    void updateHitCorrect(int field);
    void updateHitComputerCorrect(int field);
    void updateHitSunk(int field);
    void updateHitSunkComputer(int field);

private:
    vector<sf::RectangleShape> userBoard;
    vector<sf::RectangleShape> userBoardBorder;
    vector<sf::RectangleShape> computerBoard;
    vector<sf::RectangleShape> computerBoardBorder;
    sf::Texture backgroundTexture;
    sf::Sprite background;
    sf::Font font;
    sf::Text title;
    sf::Text user;
    sf::Text computer;
    vector<sf::Text> userColumnLabel;
    vector<sf::Text> userRowLabel;
    vector<sf::Text> computerColumnLabel;
    vector<sf::Text> computerRowLabel;
};