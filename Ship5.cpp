#include "Ship5.h"

void Ship5::resetAll(){
    isAdded = false;
    isSunk = false;
    fields.clear();
}

void Ship5::addField(int field)
{
    fields.push_back(field);
}

void Ship5::deleteField()
{
    fields.clear();
}

bool Ship5::isHit(int field) const
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

int Ship5::numberOfFields() const{
    return fields.size();
}

int Ship5::getField(int field) const{
    return fields[field];
}

vector <int> Ship5::getFields() const{
    return fields;
}

bool Ship5::isFieldsOK(HandleGame& handleGame, Menu& menu) const{
    if (fields.size() < 5) {
        return false; // Za ma³o pól, aby spe³niæ warunek
    }

    vector<bool> visited(5, false); // Lista odwiedzonych pól
    queue<int> q; // Kolejka do przeszukiwania BFS
    set<int> uniqueFields; // Zbiór, aby przechowywaæ unikalne indeksy pól

    // Rozpocznij od pierwszego pola
    int start = 0;
    visited[start] = true;
    q.push(start);
    uniqueFields.insert(fields[start]);
    bool poziom = true, pion = true;

    // Rozpocznij przeszukiwanie BFS
    while (!q.empty()) {
        int current = q.front();
        q.pop();

        // SprawdŸ, czy pole s¹siaduje z innymi polami
        if (handleGame.isVersionClassic || !menu.isCheckboxShips) {
            for (int i = 0; i < 5; i++) {
                if (i != current && !visited[i] &&
                    (fields[current] == fields[i] + 1 ||
                        fields[current] == fields[i] - 1) && poziom) {
                    visited[i] = true;
                    q.push(i);
                    uniqueFields.insert(fields[i]);
                    pion = false;
                }
                if (i != current && !visited[i] &&
                    (fields[current] == fields[i] + 10 ||
                        fields[current] == fields[i] - 10) && pion) {
                    visited[i] = true;
                    q.push(i);
                    uniqueFields.insert(fields[i]);
                    poziom = false;
                }
            }
        }
        else if (menu.isCheckboxShips) {
            for (int i = 0; i < 5; i++) {
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
    }

    // SprawdŸ, czy wszystkie pola s¹ unikalne
    if (uniqueFields.size() != 5) {
        return false; // Nie wszystkie pola s¹ unikalne.
    }

    // SprawdŸ, czy wszystkie pola zosta³y odwiedzone
    for (int i = 0; i < 5; i++) {
        if (!visited[i]) {
            return false; // Nie mo¿na znaleŸæ po³¹czenia miêdzy polami - jest to niew³aœciwy uk³ad pól statku.
        }
    }

    //SprawdŸ, czy jedynym punktem stycznoœci jakiegoœ pola nie jest po³¹czenie np 80-81, czyli z dwóch róznych stron planszy
    for (int i = 0; i < 5; i++) {
        if (fields[i] % 10 == 0) {
            int nextNumber = fields[i] + 1;
            if (find(fields.begin(), fields.end(), nextNumber) != fields.end()) {
                return false;
            }
        }
    }

    return true; // Wszystkie pola s¹ po³¹czone ze sob¹ i s¹ unikalne
}