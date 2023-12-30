#include "Ship2.h"

void Ship2::resetAll(){
    isAdded = false;
    isSunk = false;
    fields.clear();
}

void Ship2::addField(int field)
{
    fields.push_back(field);
}

void Ship2::deleteField()
{
    fields.clear();
}

bool Ship2::isHit(int field) const
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

int Ship2::numberOfFields() const{
    return fields.size();
}

int Ship2::getField(int field) const{
    return fields[field];
}

vector <int> Ship2::getFields() const{
    return fields;
}

bool Ship2::isFieldsOK() const{
    if (fields.size() < 2) {
        return false; // Za ma³o pól, aby spe³niæ warunek
    }

    vector<bool> visited(2, false); // Lista odwiedzonych pól
    queue<int> q; // Kolejka do przeszukiwania BFS
    set<int> uniqueFields; // Zbiór, aby przechowywaæ unikalne indeksy pól

    // Rozpocznij od pierwszego pola
    int start = 0;
    visited[start] = true;
    q.push(start);
    uniqueFields.insert(fields[start]);

    // Rozpocznij przeszukiwanie BFS
    while (!q.empty()) {
        int current = q.front();
        q.pop();

        // SprawdŸ, czy pole s¹siaduje z innymi polami
        for (int i = 0; i < 2; i++) {
            if (i != current && !visited[i] &&
                (fields[current] == fields[i] + 1 ||
                    fields[current] == fields[i] - 1 ||
                    fields[current] == fields[i] + 10 ||
                    fields[current] == fields[i] - 10)) {
                visited[i] = true;
                q.push(i);
                uniqueFields.insert(fields[i]);
            }
        }
    }

    // SprawdŸ, czy wszystkie pola s¹ unikalne
    if (uniqueFields.size() != 2) {
        return false; // Nie wszystkie pola s¹ unikalne.
    }

    // SprawdŸ, czy wszystkie pola zosta³y odwiedzone
    for (int i = 0; i < 2; i++) {
        if (!visited[i]) {
            return false; // Nie mo¿na znaleŸæ po³¹czenia miêdzy polami - jest to niew³aœciwy uk³ad pól statku.
        }
    }

    //SprawdŸ, czy jedynym punktem stycznoœci jakiegoœ pola nie jest po³¹czenie np 80-81, czyli z dwóch róznych stron planszy
    for (int i = 0; i < 2; i++) {
        if (fields[i] % 10 == 0) {
            int nextNumber = fields[i] + 1;
            if (find(fields.begin(), fields.end(), nextNumber) != fields.end()) {
                return false;
            }
        }
    }

    return true; // Wszystkie pola s¹ po³¹czone ze sob¹ i s¹ unikalne
}