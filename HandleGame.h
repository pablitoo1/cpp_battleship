#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window/Mouse.hpp>
#include <vector>
#include <set>
#include <iostream>
#include <windows.h>
#include "Menu.h"

using namespace std;

class HandleGame
{
public:
	void resetAll();
	bool isUserTurn = false;
	bool isComputerTurn = false;
	bool isVersionClassic = false;
	bool isVersionReworked = false;
	void addHittedField(int field);
	bool isFieldAvailable(int field) const;
	void addHittedFieldComputer(int field);
	bool isFieldAvailableComputer(int field) const;
	bool isShipSunk(vector <int> fields) const;
	bool isShipSunkComputer(vector <int> fields) const;
	void updateAdditionalFields(vector <int> fields);
	void updateAdditionalFieldsComputer(vector <int> fields);
	void simulateMouseClick(sf::RenderWindow& window);
	void chooseVersion(Menu& menu, sf::RenderWindow& window);

	vector <int> additionalFieldsToUpdate;
	vector <int> additionalFieldsToUpdateComputer;
private:
	vector <int> hittedFields;
	vector <int> hittedFieldsComputer;
};