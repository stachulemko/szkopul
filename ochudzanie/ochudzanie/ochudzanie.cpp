#include <vector>
#include <iostream>
using namespace std;

int main() {
    int n, a, poz = 0, l = 1, maxpoz = 0, maxl = 0;
    cin >> n;
    vector<int> liczby(n);

    for (int i = 0; i < n; i++) {
        cin >> a;
        liczby[i] = a;
    }

    for (int j = 1; j < n; j++) {
        if (liczby[j] >= liczby[j - 1]) {
            l++;
        }
        else {
            if (l > maxl) {
                maxl = l;
                maxpoz = poz;
            }
            poz = j;
            l = 1;
        }
    }

    // Sprawdzenie, czy ostatni podciąg jest najdłuższy
    if (l > maxl) {
        maxl = l;
        maxpoz = poz;
    }

    // Wypisanie podciągu o najdłuższej długości
    for (int k = maxpoz; k < maxpoz + maxl; k++) {
        cout << liczby[k] << " ";
    }

    return 0;
}
