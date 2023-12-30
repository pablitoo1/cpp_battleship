#include "HandleCustomShips.h"

void HandleCustomShips::handleAdd5(Menu& menu){
	string liczbaS = menu.number5.getString();
	istringstream iss(liczbaS);
	int liczba = 0;
	iss >> liczba;

	liczba = liczba + 1;

	ostringstream oss;
	oss << liczba;
	string liczbaSt = oss.str();

	if (shipsValue(menu) <= 20) {
		menu.number5.setString(liczbaSt);
	}
}

void HandleCustomShips::handleAdd4(Menu& menu) {
	string liczbaS = menu.number4.getString();
	istringstream iss(liczbaS);
	int liczba = 0;
	iss >> liczba;

	liczba = liczba + 1;

	ostringstream oss;
	oss << liczba;
	string liczbaSt = oss.str();

	if (shipsValue(menu) <= 21 && liczba <= 5) {
		menu.number4.setString(liczbaSt);
	}
}

void HandleCustomShips::handleAdd3(Menu& menu) {
	string liczbaS = menu.number3.getString();
	istringstream iss(liczbaS);
	int liczba = 0;
	iss >> liczba;

	liczba = liczba + 1;

	ostringstream oss;
	oss << liczba;
	string liczbaSt = oss.str();

	if (shipsValue(menu) <= 22 && liczba <= 5) {
		menu.number3.setString(liczbaSt);
	}
}

void HandleCustomShips::handleAdd2(Menu& menu) {
	string liczbaS = menu.number2.getString();
	istringstream iss(liczbaS);
	int liczba = 0;
	iss >> liczba;

	liczba = liczba + 1;

	ostringstream oss;
	oss << liczba;
	string liczbaSt = oss.str();

	if (shipsValue(menu) <= 23 && liczba <= 5) {
		menu.number2.setString(liczbaSt);
	}
}

void HandleCustomShips::handleAdd1(Menu& menu) {
	string liczbaS = menu.number1.getString();
	istringstream iss(liczbaS);
	int liczba = 0;
	iss >> liczba;

	liczba = liczba + 1;

	ostringstream oss;
	oss << liczba;
	string liczbaSt = oss.str();

	if (shipsValue(menu) <= 24 && liczba <= 5) {
		menu.number1.setString(liczbaSt);
	}
}

void HandleCustomShips::handleDel5(Menu& menu) {
	string liczbaS = menu.number5.getString();
	istringstream iss(liczbaS);
	int liczba = 0;
	iss >> liczba;

	if (liczba - 1 >= 0) {
		liczba = liczba - 1;
	}

	ostringstream oss;
	oss << liczba;
	string liczbaSt = oss.str();

	if (shipsValue(menu) > 5) {
		menu.number5.setString(liczbaSt);
	}
}

void HandleCustomShips::handleDel4(Menu& menu) {
	string liczbaS = menu.number4.getString();
	istringstream iss(liczbaS);
	int liczba = 0;
	iss >> liczba;

	if (liczba - 1 >= 0) {
		liczba = liczba - 1;
	}

	ostringstream oss;
	oss << liczba;
	string liczbaSt = oss.str();

	if (shipsValue(menu) > 4) {
		menu.number4.setString(liczbaSt);
	}
}

void HandleCustomShips::handleDel3(Menu& menu) {
	string liczbaS = menu.number3.getString();
	istringstream iss(liczbaS);
	int liczba = 0;
	iss >> liczba;

	if (liczba - 1 >= 0) {
		liczba = liczba - 1;
	}

	ostringstream oss;
	oss << liczba;
	string liczbaSt = oss.str();

	if (shipsValue(menu) > 3) {
		menu.number3.setString(liczbaSt);
	}
}

void HandleCustomShips::handleDel2(Menu& menu) {
	string liczbaS = menu.number2.getString();
	istringstream iss(liczbaS);
	int liczba = 0;
	iss >> liczba;

	if (liczba - 1 >= 0) {
		liczba = liczba - 1;
	}

	ostringstream oss;
	oss << liczba;
	string liczbaSt = oss.str();

	if (shipsValue(menu) > 2) {
		menu.number2.setString(liczbaSt);
	}
}

void HandleCustomShips::handleDel1(Menu& menu) {
	string liczbaS = menu.number1.getString();
	istringstream iss(liczbaS);
	int liczba = 0;
	iss >> liczba;

	if (liczba - 1 >= 0) {
		liczba = liczba - 1;
	}

	ostringstream oss;
	oss << liczba;
	string liczbaSt = oss.str();

	if (shipsValue(menu) > 1) {
		menu.number1.setString(liczbaSt);
	}
}

int HandleCustomShips::shipsValue(Menu& menu){
	string liczbaS5 = menu.number5.getString();
	istringstream iss5(liczbaS5);
	int liczba5 = 0;
	iss5 >> liczba5;

	string liczbaS4 = menu.number4.getString();
	istringstream iss4(liczbaS4);
	int liczba4 = 0;
	iss4 >> liczba4;

	string liczbaS3 = menu.number3.getString();
	istringstream iss3(liczbaS3);
	int liczba3 = 0;
	iss3 >> liczba3;

	string liczbaS2 = menu.number2.getString();
	istringstream iss2(liczbaS2);
	int liczba2 = 0;
	iss2 >> liczba2;

	string liczbaS1 = menu.number1.getString();
	istringstream iss1(liczbaS1);
	int liczba1 = 0;
	iss1 >> liczba1;

	int value = liczba5 * 5 + liczba4 * 4 + liczba3 * 3 + liczba2 * 2 + liczba1;

	return value;
}

int HandleCustomShips::value5(Menu& menu){
	string liczbaS = menu.number5.getString();
	istringstream iss(liczbaS);
	int liczba = 0;
	iss >> liczba;

	return liczba;
}

int HandleCustomShips::value4(Menu& menu) {
	string liczbaS = menu.number4.getString();
	istringstream iss(liczbaS);
	int liczba = 0;
	iss >> liczba;

	return liczba;
}

int HandleCustomShips::value3(Menu& menu) {
	string liczbaS = menu.number3.getString();
	istringstream iss(liczbaS);
	int liczba = 0;
	iss >> liczba;

	return liczba;
}

int HandleCustomShips::value2(Menu& menu) {
	string liczbaS = menu.number2.getString();
	istringstream iss(liczbaS);
	int liczba = 0;
	iss >> liczba;

	return liczba;
}

int HandleCustomShips::value1(Menu& menu) {
	string liczbaS = menu.number1.getString();
	istringstream iss(liczbaS);
	int liczba = 0;
	iss >> liczba;

	return liczba;
}