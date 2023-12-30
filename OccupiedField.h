#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include<iostream>
#include <set>

using namespace std;

class OccupiedField
{
private:
	vector <int> occupiedFields;
public:
	void resetAll();
	void addOccupiedField(vector <int> fields);
	void writeOccupiedFields();
	vector <int> getOccupiedFields() const;
	int getOccupiedField(int field) const;
	void repairFields();
	void deleteFields();
	bool isPositionOccupied(int position, vector <int> fields) const;
	bool isPositionOccupiedComputer(vector <int> ship) const;
};