#include "OccupiedField.h"

void OccupiedField::deleteFields() {
	for (int i = 0; i < occupiedFields.size();i++) {
		occupiedFields.pop_back();
	}
}

void OccupiedField::repairFields() {
	set<int> uniqueSet(occupiedFields.begin(), occupiedFields.end());
	vector<int> uniqueVector(uniqueSet.begin(), uniqueSet.end());

	deleteFields();
	occupiedFields = uniqueVector;
}

void OccupiedField::resetAll(){
	occupiedFields.clear();
}

void OccupiedField::addOccupiedField(vector <int> fields) {
	for (int i = 0; i < fields.size();i++) {
		int topLeft = fields[i] - 11;
		if (topLeft > 0 && ((fields[i] - 1) % 10 != 0) && fields[i] > 10) {
			occupiedFields.push_back(topLeft);
		}
		int top = fields[i] - 10;
		if (top > 0 && fields[i] > 10) {
			occupiedFields.push_back(top);
		}
		int topRight = fields[i] - 9;
		if (topRight > 0 && fields[i] > 10 && (fields[i] % 10 != 0)) {
			occupiedFields.push_back(topRight);
		}
		int left = fields[i] - 1;
		if (left > 0 && ((fields[i] - 1) % 10 != 0)) {
			occupiedFields.push_back(left);
		}
		int right = fields[i] + 1;
		if (right > 0 && (fields[i] % 10 != 0)) {
			occupiedFields.push_back(right);
		}
		int bottomLeft = fields[i] + 9;
		if (bottomLeft > 0 && ((fields[i] - 1) % 10 != 0) && fields[i] < 91) {
			occupiedFields.push_back(bottomLeft);
		}
		int bottom = fields[i] + 10;
		if (bottom > 0 && fields[i] < 91) {
			occupiedFields.push_back(bottom);
		}
		int bottomRight = fields[i] + 11;
		if (bottomRight > 0 && (fields[i] % 10 != 0) && fields[i] < 91) {
			occupiedFields.push_back(bottomRight);
		}
		occupiedFields.push_back(fields[i]);
	}

	repairFields();
}

void OccupiedField::writeOccupiedFields() {
	for (int i=0; i < occupiedFields.size(); i++) {
		//cout << occupiedFields[i] << endl;
	}
}

vector <int> OccupiedField::getOccupiedFields() const{
	return occupiedFields;
}

int OccupiedField::getOccupiedField(int field) const{
	return occupiedFields[field];
}

bool OccupiedField::isPositionOccupied(int position, vector <int> fields) const{
	for (int occupiedPosition : fields)
	{
		if (position == occupiedPosition)
		{
			return true; // Ta pozycja jest zajêta
		}
	}
	return false; // Ta pozycja nie jest zajêta
}

bool OccupiedField::isPositionOccupiedComputer(vector <int> ship) const{
	for (int num1 : ship) {
		for (int num2 : occupiedFields) {
			if (num1 == num2) {
				return true;  // Znaleziono duplikat
			}
		}
	}

	return false;  // Brak duplikatów
}