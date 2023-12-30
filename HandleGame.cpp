#include "HandleGame.h"

void HandleGame::resetAll(){
	isUserTurn = false;
	isComputerTurn = false;
	isVersionClassic = false;
	isVersionReworked = false;
	hittedFields.clear();
	hittedFieldsComputer.clear();
	additionalFieldsToUpdate.clear();
	additionalFieldsToUpdateComputer.clear();
}

void HandleGame::addHittedField(int field) {
	hittedFields.push_back(field);
}

bool HandleGame::isFieldAvailable(int field) const{
	for (int fields : hittedFields) {
		if (fields == field) {
			return false;
		}
	}
	return true;
}

void HandleGame::addHittedFieldComputer(int field) {
	hittedFieldsComputer.push_back(field);
}

bool HandleGame::isFieldAvailableComputer(int field) const{
	for (int uaf : hittedFieldsComputer) {
		if (uaf == field) {
			return false;
		}
	}
	return true;
}

bool HandleGame::isShipSunk(vector<int> fields) const{
	for (int element : fields) {
		bool found = false;

		for (int element2 : hittedFields) {
			if (element == element2) {
				found = true;
				break;
			}
		}

		if (!found) {
			return false;
		}
	}

	return true;
}

bool HandleGame::isShipSunkComputer(vector<int> fields) const{
	for (int element : fields) {
		bool found = false;

		for (int element2 : hittedFieldsComputer) {
			if (element == element2) {
				found = true;
				break;
			}
		}

		if (!found) {
			return false;
		}
	}

	return true;
}

void HandleGame::updateAdditionalFields(vector<int> fields) {
	for (int i = 0; i < fields.size();i++) {
		int topLeft = fields[i] - 11;
		if (topLeft > 0 && ((fields[i] - 1) % 10 != 0) && fields[i] > 10) {
			additionalFieldsToUpdate.push_back(topLeft);
		}
		int top = fields[i] - 10;
		if (top > 0 && fields[i] > 10) {
			additionalFieldsToUpdate.push_back(top);
		}
		int topRight = fields[i] - 9;
		if (topRight > 0 && fields[i] > 10 && (fields[i] % 10 != 0)) {
			additionalFieldsToUpdate.push_back(topRight);
		}
		int left = fields[i] - 1;
		if (left > 0 && ((fields[i] - 1) % 10 != 0)) {
			additionalFieldsToUpdate.push_back(left);
		}
		int right = fields[i] + 1;
		if (right > 0 && (fields[i] % 10 != 0)) {
			additionalFieldsToUpdate.push_back(right);
		}
		int bottomLeft = fields[i] + 9;
		if (bottomLeft > 0 && ((fields[i] - 1) % 10 != 0) && fields[i] < 91) {
			additionalFieldsToUpdate.push_back(bottomLeft);
		}
		int bottom = fields[i] + 10;
		if (bottom > 0 && fields[i] < 91) {
			additionalFieldsToUpdate.push_back(bottom);
		}
		int bottomRight = fields[i] + 11;
		if (bottomRight > 0 && (fields[i] % 10 != 0) && fields[i] < 91) {
			additionalFieldsToUpdate.push_back(bottomRight);
		}
		additionalFieldsToUpdate.push_back(fields[i]);
	}

	set<int> uniqueSet(additionalFieldsToUpdate.begin(), additionalFieldsToUpdate.end());
	vector<int> uniqueVector(uniqueSet.begin(), uniqueSet.end());

	for (int i = 0; i < additionalFieldsToUpdate.size();i++) {
		additionalFieldsToUpdate.pop_back();
	}

	additionalFieldsToUpdate = uniqueVector;

	for (int i = 0; i < additionalFieldsToUpdate.size();) {
		bool shouldErase = false;

		for (int j = 0; j < fields.size(); j++) {
			if (additionalFieldsToUpdate[i] == fields[j]) {
				shouldErase = true;
				break;
			}
		}

		if (shouldErase) {
			additionalFieldsToUpdate.erase(additionalFieldsToUpdate.begin() + i);
		}
		else {
			++i;
		}
	}
}

void HandleGame::updateAdditionalFieldsComputer(vector<int> fields){
	for (int i = 0; i < fields.size();i++) {
		int topLeft = fields[i] - 11;
		if (topLeft > 0 && ((fields[i] - 1) % 10 != 0) && fields[i] > 10) {
			additionalFieldsToUpdateComputer.push_back(topLeft);
		}
		int top = fields[i] - 10;
		if (top > 0 && fields[i] > 10) {
			additionalFieldsToUpdateComputer.push_back(top);
		}
		int topRight = fields[i] - 9;
		if (topRight > 0 && fields[i] > 10 && (fields[i] % 10 != 0)) {
			additionalFieldsToUpdateComputer.push_back(topRight);
		}
		int left = fields[i] - 1;
		if (left > 0 && ((fields[i] - 1) % 10 != 0)) {
			additionalFieldsToUpdateComputer.push_back(left);
		}
		int right = fields[i] + 1;
		if (right > 0 && (fields[i] % 10 != 0)) {
			additionalFieldsToUpdateComputer.push_back(right);
		}
		int bottomLeft = fields[i] + 9;
		if (bottomLeft > 0 && ((fields[i] - 1) % 10 != 0) && fields[i] < 91) {
			additionalFieldsToUpdateComputer.push_back(bottomLeft);
		}
		int bottom = fields[i] + 10;
		if (bottom > 0 && fields[i] < 91) {
			additionalFieldsToUpdateComputer.push_back(bottom);
		}
		int bottomRight = fields[i] + 11;
		if (bottomRight > 0 && (fields[i] % 10 != 0) && fields[i] < 91) {
			additionalFieldsToUpdateComputer.push_back(bottomRight);
		}
		additionalFieldsToUpdateComputer.push_back(fields[i]);
	}

	set<int> uniqueSet(additionalFieldsToUpdateComputer.begin(), additionalFieldsToUpdateComputer.end());
	vector<int> uniqueVector(uniqueSet.begin(), uniqueSet.end());

	for (int i = 0; i < additionalFieldsToUpdateComputer.size();i++) {
		additionalFieldsToUpdateComputer.pop_back();
	}

	additionalFieldsToUpdateComputer = uniqueVector;

	for (int i = 0; i < additionalFieldsToUpdateComputer.size();) {
		bool shouldErase = false;

		for (int j = 0; j < fields.size(); j++) {
			if (additionalFieldsToUpdateComputer[i] == fields[j]) {
				shouldErase = true;
				break;
			}
		}

		if (shouldErase) {
			additionalFieldsToUpdateComputer.erase(additionalFieldsToUpdateComputer.begin() + i);
		}
		else {
			++i;
		}
	}
}

void HandleGame::simulateMouseClick(sf::RenderWindow& window){
	HWND hMyWindow = window.getSystemHandle();// Uzyskaj uchwyt do okna Twojego programu

	RECT rect;
	GetClientRect(hMyWindow, &rect);
	int x = (rect.right - rect.left) / 2;
	int y = (rect.bottom - rect.top) / 2;

	// Wyœlij komunikat WM_LBUTTONDOWN
	PostMessage(hMyWindow, WM_LBUTTONDOWN, MK_LBUTTON, MAKELPARAM(x, y));

	// Wyœlij komunikat WM_LBUTTONUP
	PostMessage(hMyWindow, WM_LBUTTONUP, 0, MAKELPARAM(x, y));
}

void HandleGame::chooseVersion(Menu& menu, sf::RenderWindow& window){
	if (!menu.isVersionChoosen) {
		menu.displayMessage("Wybierz wersje gry w statki:", window);
		menu.buttonText.setString("KLASYK");
		menu.buttonText.setPosition(716, 365);
		menu.buttonRandomText.setString("WLASNY");
		menu.buttonRandomText.setPosition(714, 465);
	}
	else if(menu.isVersionChoosen && !menu.isGameStarted){
		menu.toMiddle = false;
	}
}
