#pragma once
#include <SFML/Graphics.hpp>
#include <string>

class Menu
{
public:
    Menu();
    void resetAll();
    void displayMessage(const std::string& message, sf::RenderWindow& window);
    void displayButtons(sf::RenderWindow& window);
    bool isClicked = false;
    bool isGameStarted = false;
    bool isVersionChoosen = false;
    bool toMiddle = true;
    bool isCheckboxFields = false;
    bool isCheckboxShips = false;
    bool customShips = false;
    void handleCheckboxFields();
    void handleCheckboxShips();
    sf::RectangleShape button;
    sf::Text buttonText;
    sf::RectangleShape buttonRandom;
    sf::Text buttonRandomText;
    sf::Texture resetTexture;
    sf::Sprite resetSprite;
    sf::Texture offTexture;
    sf::Sprite offSprite;
    sf::Texture randomTexture;
    sf::Sprite randomSprite;
    sf::Texture randomAllTexture;
    sf::Sprite randomAllSprite;
    sf::RectangleShape checkboxFields;
    sf::Text fieldsText;
    sf::RectangleShape checkboxShips;
    sf::Text shipsText;
    sf::RectangleShape background;
    sf::Text descShips;
    sf::Text text5;
    sf::Text text4;
    sf::Text text3;
    sf::Text text2;
    sf::Text text1;
    sf::ConvexShape arrowUp5;
    sf::ConvexShape arrowDown5;
    sf::ConvexShape arrowUp4;
    sf::ConvexShape arrowDown4;
    sf::ConvexShape arrowUp3;
    sf::ConvexShape arrowDown3;
    sf::ConvexShape arrowUp2;
    sf::ConvexShape arrowDown2;
    sf::ConvexShape arrowUp1;
    sf::ConvexShape arrowDown1;
    sf::Text number5;
    sf::Text number4;
    sf::Text number3;
    sf::Text number2;
    sf::Text number1;
    sf::RectangleShape buttonShips;
    sf::Text buttonTextShips;
private:
    sf::Text message;
    sf::Font font;
    sf::Text description;
};