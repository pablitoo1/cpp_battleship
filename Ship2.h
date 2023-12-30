#pragma once
#include <vector>
#include <iostream>
#include <queue> //kolejka do przeszukiwania BFS
#include <set> //nag³ówek do obs³ugi zbiorów

using namespace std;

class Ship2
{
public:
	void resetAll();
	void addField(int field);
	void deleteField();
	bool isHit(int field) const;
	int numberOfFields() const;
	int getField(int field) const;
	vector <int> getFields() const;
	bool isFieldsOK() const;
	bool isAdded = false;
	bool isSunk = false;
private:
	vector <int> fields;
};