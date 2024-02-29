#include "Ship1.h"

void Ship1::resetAll(){
    isAdded = false;
    isSunk = false;
    fields.clear();
}

void Ship1::addField(int field)
{
    fields.push_back(field);
}

void Ship1::deleteField()
{
    fields.clear();
}

bool Ship1::isHit(int field) const
{
    for (int shipField : fields)
    {
        if (shipField == field)
        {
            return true;
        }
    }
    return false;
}

int Ship1::numberOfFields() const{
    return fields.size();
}

int Ship1::getField(int field) const{
    return fields[field];
}

vector <int> Ship1::getFields() const{
    return fields;
}

bool Ship1::isFieldsOK() const{
    if (fields.size() < 1) {
        return false;
    }

    if(fields[0] > 100) {
        return false;
    }

    return true;
}