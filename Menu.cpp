#include "Menu.h"

Menu::Menu()
{
    background.setSize(sf::Vector2f(698, 450));
    background.setFillColor(sf::Color::White);
    background.setOutlineColor(sf::Color::Black);
    background.setOutlineThickness(2.0f);
    background.setPosition(400, 230);

    font.loadFromFile("fonts/OpenSans-SemiBold.ttf");

    message.setFont(font);
    message.setCharacterSize(24);
    message.setFillColor(sf::Color::Black);
    message.setPosition(590, 280);

    button.setSize(sf::Vector2f(100, 50));
    button.setPosition(700, 350);
    button.setFillColor(sf::Color::Green);
    button.setOutlineColor(sf::Color::Black);
    button.setOutlineThickness(1.0f);

    buttonText.setFont(font);
    buttonText.setCharacterSize(18);
    buttonText.setFillColor(sf::Color::Black);

    buttonRandom.setSize(sf::Vector2f(100, 50));
    buttonRandom.setPosition(700, 450);
    buttonRandom.setFillColor(sf::Color::Yellow);
    buttonRandom.setOutlineColor(sf::Color::Black);
    buttonRandom.setOutlineThickness(1.0f);

    buttonRandomText.setFont(font);
    buttonRandomText.setCharacterSize(18);
    buttonRandomText.setFillColor(sf::Color::Black);

    resetTexture.loadFromFile("images/restart.png");
    offTexture.loadFromFile("images/offbutton.png");
    randomTexture.loadFromFile("images/random.png");
    randomAllTexture.loadFromFile("images/randomAll.png");

    resetSprite.setTexture(resetTexture);
    resetSprite.setPosition(1300, 43);
    offSprite.setTexture(offTexture);
    offSprite.setPosition(1400, 43);
    randomSprite.setTexture(randomTexture);
    randomSprite.setPosition(50, 43);
    randomAllSprite.setTexture(randomAllTexture);
    randomAllSprite.setPosition(150, 43);

    checkboxFields.setSize(sf::Vector2f(20, 20));
    checkboxFields.setFillColor(sf::Color::Transparent);
    checkboxFields.setOutlineColor(sf::Color::Black);
    checkboxFields.setOutlineThickness(2.0f);
    checkboxFields.setPosition(550, 570);

    checkboxShips.setSize(sf::Vector2f(20, 20));
    checkboxShips.setFillColor(sf::Color::Transparent);
    checkboxShips.setOutlineColor(sf::Color::Black);
    checkboxShips.setOutlineThickness(2.0f);
    checkboxShips.setPosition(550, 620);

    description.setFont(font);
    description.setCharacterSize(20);
    description.setFillColor(sf::Color::Black);
    description.setPosition(548, 524);
    description.setString("Niestandardowe opcje dla trybu wlasnego:");

    fieldsText.setFont(font);
    fieldsText.setCharacterSize(20);
    fieldsText.setFillColor(sf::Color::Black);
    fieldsText.setPosition(610, 567);
    fieldsText.setString("Otaczanie pol po zatopieniu statku");

    shipsText.setFont(font);
    shipsText.setCharacterSize(20);
    shipsText.setFillColor(sf::Color::Black);
    shipsText.setPosition(610, 617);
    shipsText.setString("Dozwolone lamane pozycje statkow");

    text5.setFont(font);
    text5.setCharacterSize(18);
    text5.setFillColor(sf::Color::Black);
    text5.setPosition(440, 364);
    text5.setString("5-masztowe:");

    text4.setFont(font);
    text4.setCharacterSize(18);
    text4.setFillColor(sf::Color::Black);
    text4.setPosition(563, 364);
    text4.setString("4-masztowe:");

    text3.setFont(font);
    text3.setCharacterSize(18);
    text3.setFillColor(sf::Color::Black);
    text3.setPosition(686, 364);
    text3.setString("3-masztowe:");

    text2.setFont(font);
    text2.setCharacterSize(18);
    text2.setFillColor(sf::Color::Black);
    text2.setPosition(809, 364);
    text2.setString("2-masztowe:");

    text1.setFont(font);
    text1.setCharacterSize(18);
    text1.setFillColor(sf::Color::Black);
    text1.setPosition(932, 364);
    text1.setString("1-masztowe:");

    arrowUp5.setPointCount(3);
    arrowUp5.setPoint(0, sf::Vector2f(440, 420));
    arrowUp5.setPoint(1, sf::Vector2f(460, 420));
    arrowUp5.setPoint(2, sf::Vector2f(450, 405));
    arrowUp5.setFillColor(sf::Color::Black);

    arrowDown5.setPointCount(3);
    arrowDown5.setPoint(0, sf::Vector2f(440, 430));
    arrowDown5.setPoint(1, sf::Vector2f(460, 430));
    arrowDown5.setPoint(2, sf::Vector2f(450, 445));
    arrowDown5.setFillColor(sf::Color::Black);

    arrowUp4.setPointCount(3);
    arrowUp4.setPoint(0, sf::Vector2f(563, 420));
    arrowUp4.setPoint(1, sf::Vector2f(583, 420));
    arrowUp4.setPoint(2, sf::Vector2f(573, 405));
    arrowUp4.setFillColor(sf::Color::Black);

    arrowDown4.setPointCount(3);
    arrowDown4.setPoint(0, sf::Vector2f(563, 430));
    arrowDown4.setPoint(1, sf::Vector2f(583, 430));
    arrowDown4.setPoint(2, sf::Vector2f(573, 445));
    arrowDown4.setFillColor(sf::Color::Black);

    arrowUp3.setPointCount(3);
    arrowUp3.setPoint(0, sf::Vector2f(686, 420));
    arrowUp3.setPoint(1, sf::Vector2f(706, 420));
    arrowUp3.setPoint(2, sf::Vector2f(696, 405));
    arrowUp3.setFillColor(sf::Color::Black);

    arrowDown3.setPointCount(3);
    arrowDown3.setPoint(0, sf::Vector2f(686, 430));
    arrowDown3.setPoint(1, sf::Vector2f(706, 430));
    arrowDown3.setPoint(2, sf::Vector2f(696, 445));
    arrowDown3.setFillColor(sf::Color::Black);

    arrowUp2.setPointCount(3);
    arrowUp2.setPoint(0, sf::Vector2f(809, 420));
    arrowUp2.setPoint(1, sf::Vector2f(829, 420));
    arrowUp2.setPoint(2, sf::Vector2f(819, 405));
    arrowUp2.setFillColor(sf::Color::Black);

    arrowDown2.setPointCount(3);
    arrowDown2.setPoint(0, sf::Vector2f(809, 430));
    arrowDown2.setPoint(1, sf::Vector2f(829, 430));
    arrowDown2.setPoint(2, sf::Vector2f(819, 445));
    arrowDown2.setFillColor(sf::Color::Black);

    arrowUp1.setPointCount(3);
    arrowUp1.setPoint(0, sf::Vector2f(932, 420));
    arrowUp1.setPoint(1, sf::Vector2f(952, 420));
    arrowUp1.setPoint(2, sf::Vector2f(942, 405));
    arrowUp1.setFillColor(sf::Color::Black);

    arrowDown1.setPointCount(3);
    arrowDown1.setPoint(0, sf::Vector2f(932, 430));
    arrowDown1.setPoint(1, sf::Vector2f(952, 430));
    arrowDown1.setPoint(2, sf::Vector2f(942, 445));
    arrowDown1.setFillColor(sf::Color::Black);

    number5.setFont(font);
    number5.setCharacterSize(40);
    number5.setFillColor(sf::Color::Black);
    number5.setPosition(490, 400);
    number5.setString("0");

    number4.setFont(font);
    number4.setCharacterSize(40);
    number4.setFillColor(sf::Color::Black);
    number4.setPosition(613, 400);
    number4.setString("1");

    number3.setFont(font);
    number3.setCharacterSize(40);
    number3.setFillColor(sf::Color::Black);
    number3.setPosition(736, 400);
    number3.setString("2");

    number2.setFont(font);
    number2.setCharacterSize(40);
    number2.setFillColor(sf::Color::Black);
    number2.setPosition(859, 400);
    number2.setString("3");

    number1.setFont(font);
    number1.setCharacterSize(40);
    number1.setFillColor(sf::Color::Black);
    number1.setPosition(982, 400);
    number1.setString("4");

    buttonShips.setSize(sf::Vector2f(100, 50));
    buttonShips.setPosition(700, 350);
    buttonShips.setFillColor(sf::Color::Green);
    buttonShips.setOutlineColor(sf::Color::Black);
    buttonShips.setOutlineThickness(1.0f);
    buttonShips.setPosition(700, 510);

    buttonTextShips.setFont(font);
    buttonTextShips.setCharacterSize(18);
    buttonTextShips.setFillColor(sf::Color::Black);
    buttonTextShips.setString("GRAJ");
    buttonTextShips.setPosition(729, 525);
}

void Menu::resetAll(){
    isClicked = false;
    isGameStarted = false;
    isVersionChoosen = false;
    toMiddle = true;
    customShips = false;
    button.setPosition(700, 350);
}

void Menu::displayMessage(const std::string& messageToShow, sf::RenderWindow& window)
{
    message.setString(messageToShow);

    if (!isClicked) {
        if (!toMiddle) {
            message.setPosition(650, 150);
            message.setCharacterSize(16);
            background.setSize(sf::Vector2f(298, 60));
            background.setPosition(600, 130);
        }
        else {
            message.setPosition(590, 280);
            message.setCharacterSize(24);
            background.setSize(sf::Vector2f(698, 450));
            background.setPosition(400, 230);
        }
        if (!isGameStarted && !customShips) {
            window.draw(background);
            window.draw(message);
        }
    }
}

void Menu::displayButtons(sf::RenderWindow& window) 
{
    if (!isClicked) {
        if (!isVersionChoosen && !isGameStarted && !customShips) {
            window.draw(button);
            window.draw(buttonText);
            window.draw(buttonRandom);
            window.draw(buttonRandomText);
            window.draw(checkboxFields);
            window.draw(checkboxShips);
            window.draw(fieldsText);
            window.draw(shipsText);
            window.draw(description);
        }
        if (isGameStarted && !customShips) {
            background.setSize(sf::Vector2f(698, 300));
            window.draw(background);
            window.draw(message);
            window.draw(button);
            window.draw(buttonText);
        }
        if (customShips && !isVersionChoosen) {
            background.setSize(sf::Vector2f(698, 400));
            window.draw(background);
            window.draw(descShips);
            window.draw(text5);
            window.draw(text4);
            window.draw(text3);
            window.draw(text2);
            window.draw(text1);
            window.draw(arrowUp5);
            window.draw(arrowDown5);
            window.draw(arrowUp4);
            window.draw(arrowDown4);
            window.draw(arrowUp3);
            window.draw(arrowDown3);
            window.draw(arrowUp2);
            window.draw(arrowDown2);
            window.draw(arrowUp1);
            window.draw(arrowDown1);
            window.draw(number5);
            window.draw(number4);
            window.draw(number3);
            window.draw(number2);
            window.draw(number1);
            window.draw(buttonShips);
            window.draw(buttonTextShips);
            descShips.setFont(font);
            descShips.setCharacterSize(20);
            descShips.setFillColor(sf::Color::Black);
            descShips.setPosition(528, 300);
            descShips.setString("Wybierz jakie statki beda uczestniczyc w grze:");
        }
    }

    window.draw(resetSprite);
    window.draw(offSprite);
    window.draw(randomSprite);
    window.draw(randomAllSprite);
}

void Menu::handleCheckboxFields() {
    if (!isGameStarted) {
        isCheckboxFields = !isCheckboxFields;

    }

    if (isCheckboxFields) {
        checkboxFields.setFillColor(sf::Color::Black);
    }
    else {
        checkboxFields.setFillColor(sf::Color::Transparent);
    }
}

void Menu::handleCheckboxShips(){
    if (!isGameStarted) {
        isCheckboxShips = !isCheckboxShips;
    }

    if (isCheckboxShips) {
        checkboxShips.setFillColor(sf::Color::Black);
    }
    else {
        checkboxShips.setFillColor(sf::Color::Transparent);
    }
}