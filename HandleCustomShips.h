#pragma once
#include <sstream>
#include "Menu.h"

using namespace std;

class HandleCustomShips
{
public:
	void handleAdd5(Menu& menu);
	void handleAdd4(Menu& menu);
	void handleAdd3(Menu& menu);
	void handleAdd2(Menu& menu);
	void handleAdd1(Menu& menu);
	void handleDel5(Menu& menu);
	void handleDel4(Menu& menu);
	void handleDel3(Menu& menu);
	void handleDel2(Menu& menu);
	void handleDel1(Menu& menu);
	int shipsValue(Menu& menu);
	int value5(Menu& menu);
	int value4(Menu& menu);
	int value3(Menu& menu);
	int value2(Menu& menu);
	int value1(Menu& menu);
};