#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, liczba;
    cin >> n;
    vector<int> l;
    vector<int> l1;

    // Wczytywanie elementów do wektora l
    for (int i = 0; i < n; i++) {
        cin >> liczba;
        l.push_back(liczba);
    }

    // Sortowanie wektora l
    sort(l.begin(), l.end());

    // Zliczanie unikalnych elementów
    for (int i = 0; i < l.size(); i++) {
        if (i == 0 || l[i] != l[i - 1]) {
            l1.push_back(1);
        }
        else {
            l1.back()++;
        }
    }

    // Usuwanie elementów z parzystą liczbą wystąpień
    for (int i = 0; i < l1.size(); i++) {
        if (l1[i] % 2 == 0) {
            // Utwórz iterator do usuwanego elementu
            auto it = l1.begin() + i;
            // Usuń element wskazywany przez iterator
            l1.erase(it);
            // Zmniejsz i, aby pominąć element, który został przesunięty
            i--;
        }
    }

    // Wyświetlanie wyniku
    if (l1.size() > 1) {
        cout << "NIE" << endl;
    }
    else {
        cout << "TAK" << endl;
    }

    return 0;
}
