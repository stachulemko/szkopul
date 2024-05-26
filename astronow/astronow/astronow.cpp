#include <iostream>
using namespace std;

int main() {
    int x, y, l = 1, z = 0, w = 0;
    cin >> x; // Zakładając, że x to liczba wartości do wczytania

    if (x == 1) {
        int k;
        cin >> k; // Zakładając, że jest jedno dodatkowe wejście dla x = 1
        if (k == 15) {
            cout << "DOWN";
        }
        else if (k == 0) {
            cout << "UP";
        }
        else {
            cout << "UNKNOWN";
        }
    }
    else {
        while (l <= x) {
            cin >> y; // Wczytanie wartości 'y'
            if (l == 3) {
                z += y;
            }
            else if (l == 4) {
                w += y;
            }
            l++;
        }
        if (z < w) {
            cout << "UP";
        }
        else if (z > w) {
            cout << "DOWN";
        }
        else {
            cout << "UNKNOWN";
        }
    }
    return 0;
}
