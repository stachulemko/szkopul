#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Funkcja maxY zwraca maksymalną liczbę kolejnych znaków innych niż 'X' w kolumnach
int maxY(vector<string>& dlugosci) {
    int max = 0;

    for (int i = 0; i < dlugosci.size(); i++) {
        int licznik_tmp = 0;
        for (int j = 0; j < dlugosci[i].size(); j++) {
            if (dlugosci[j][i] != 'X') {
                licznik_tmp++;
            }
            else {
                if (licznik_tmp > max) {
                    max = licznik_tmp;
                }
                licznik_tmp = 0;
            }
        }

        if (licznik_tmp > max) {
            max = licznik_tmp;
        }
    }
    return max;
}

// Funkcja maxX zwraca maksymalną liczbę kolejnych znaków innych niż 'X' w wierszach
int maxX(vector<string>& dlugosci) {
    int max = 0;
    for (int i = 0; i < dlugosci.size(); i++) {
        int licznik_tmp = 0;
        for (int j = 0; j < dlugosci[i].size(); j++) {
            if (dlugosci[i][j] != 'X') {
                licznik_tmp++;
            }
            else {
                if (licznik_tmp > max) {
                    max = licznik_tmp;
                }
                licznik_tmp = 0;
            }
        }

        if (licznik_tmp > max) {
            max = licznik_tmp;
        }
    }
    return max;
}

// Funkcja maxKoncowe zwraca maksymalną wartość spośród maxX i maxY
int maxKoncowe(int maxX, int maxY) {
    if (maxX > maxY) {
        return maxX;
    }
    else {
        return maxY;
    }
}

// Funkcja znajdowanie_wspolrzednych znajduje współrzędne pasa o określonej długości
vector<vector<int>> znajdowanie_wspolrzednych(vector<string>& dlugosci, int dlugoscPasa) {
    vector<vector<int>> wspolrzedne;
    int max = 0;
    for (int i = 0; i < dlugosci.size(); i++) {
        int licznik_tmp = 0;
        for (int j = 0; j < dlugosci[i].size(); j++) {
            if (dlugosci[i][j] != 'X') {
                licznik_tmp++;
            }
            else {
                if (licznik_tmp > max) {
                    max = licznik_tmp;
                }
                if (licznik_tmp >= dlugoscPasa) {
                    vector<int> wsp2;
                    wsp2.push_back(i);
                    wsp2.push_back(j - licznik_tmp);
                    wsp2.push_back(j);
                    wsp2.push_back(licznik_tmp);
                    wspolrzedne.push_back(wsp2);
                }
                licznik_tmp = 0;
            }
        }

        if (licznik_tmp >= dlugoscPasa) {
            vector<int> wsp2;
            wsp2.push_back(i);
            wsp2.push_back(dlugosci[i].size() - licznik_tmp);
            wsp2.push_back(dlugosci[i].size());
            wsp2.push_back(licznik_tmp);
            wspolrzedne.push_back(wsp2);
        }
    }
    return wspolrzedne;
}

int main() {
    string ustawienie;
    vector<string> dlugosci;
    int minimalna_ilosc_pasow;
    int ilosc;

    cin >> ilosc >> minimalna_ilosc_pasow;
    for (int i = 0; i < ilosc; i++) {
        cin >> ustawienie;
        dlugosci.push_back(ustawienie);
    }

    cout << maxX(dlugosci) << endl;
    cout << maxY(dlugosci) << endl;

    int dlugoscPasa = maxKoncowe(maxX(dlugosci), maxY(dlugosci));
    vector<vector<int>> wspolrzedne = znajdowanie_wspolrzednych(dlugosci, dlugoscPasa);

    // Wyświetlanie współrzędnych
    for (const auto& wsp : wspolrzedne) {
        cout << "Początek: " << wsp[1] << ", Koniec: " << wsp[2] << ", Długość: " << wsp[3] << endl;
    }

    return 0;
}
