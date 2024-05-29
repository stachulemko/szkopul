#include <iostream>
#include <vector>
#include <string>
using namespace std;

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

vector<vector<int>> znajdowanie_komb(int dlugoscPasa, int j, int licznik_tmp, int i) {
    vector<vector<int>> kombinacje;
    int k = 0;
    while (licznik_tmp - k >= dlugoscPasa) {
        vector<int> komb = { i, j - licznik_tmp + k , dlugoscPasa, i, j - licznik_tmp + k + dlugoscPasa-1 };
        kombinacje.push_back(komb);
        k++;
    }
    return kombinacje;
}

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

int maxKoncowe(int maxX, int maxY) {
    return max(maxX, maxY);
}

vector<vector<int>> znajdowanie_wspolrzednychY_stare(vector<string>& dlugosci, int dlugoscPasa, int ilosc) {
    vector<vector<int>> wspolrzedne;
    for (int i = 0; i < dlugosci.size(); i++) {
        int licznik_tmp = 0;
        for (int j = 0; j < ilosc; j++) {
            if (dlugosci[j][i] != 'X') {
                licznik_tmp++;
            }
            else {
                if (licznik_tmp == dlugoscPasa) {
                    vector<int> wsp2 = { i, j - licznik_tmp + 1, dlugoscPasa, i, j };
                    wspolrzedne.push_back(wsp2);
                }
                else if (licznik_tmp > dlugoscPasa) {
                    vector<vector<int>> kombinacje = znajdowanie_komb(dlugoscPasa, j, licznik_tmp, i);
                    for (int i = 0; i < kombinacje.size(); i++) {
                        wspolrzedne.push_back(kombinacje[i]);
                    }
                }
                licznik_tmp = 0;
            }
        }
        if (licznik_tmp == dlugoscPasa) {
            vector<int> wsp2 = { ilosc-licznik_tmp,i, dlugoscPasa, i, ilosc - 1 };
            wspolrzedne.push_back(wsp2);
        }
        else if (licznik_tmp > dlugoscPasa) {
            vector<vector<int>> kombinacje = znajdowanie_komb(dlugoscPasa, ilosc, licznik_tmp, i);
            for (int i = 0; i < kombinacje.size(); i++) {
                wspolrzedne.push_back(kombinacje[i]);
            }
        }

    }
    return wspolrzedne;
}

vector<vector<int>> znajdowanie_wspolrzednychX(vector<string>& dlugosci, int dlugoscPasa, int ilosc) {
    vector<vector<int>> wspolrzedne;

    for (int i = 0; i < dlugosci.size(); i++) {
        int licznik_tmp = 0;
        for (int j = 0; j < ilosc; j++) {
            if (dlugosci[i][j] != 'X') {
                licznik_tmp++;
            }
            else {
                if (licznik_tmp >= dlugoscPasa) {
                    if (licznik_tmp == dlugoscPasa) {
                        vector<int> wsp2 = { i, j - licznik_tmp + 1, dlugoscPasa, i, j };
                        wspolrzedne.push_back(wsp2);
                    }
                    else if (licznik_tmp > dlugoscPasa) {
                        vector<vector<int>> kombinacje = znajdowanie_komb(dlugoscPasa, j, licznik_tmp, i);
                        for (int i = 0; i < kombinacje.size(); i++) {
							wspolrzedne.push_back(kombinacje[i]);
						}
                    }
                }
                licznik_tmp = 0;
            }
        }
        if (licznik_tmp == dlugoscPasa) {
            vector<int> wsp2 = { i, ilosc - licznik_tmp, dlugoscPasa, i, ilosc - 1 };
            wspolrzedne.push_back(wsp2);
        }
        else if (licznik_tmp > dlugoscPasa) {
            vector<vector<int>> kombinacje = znajdowanie_komb(dlugoscPasa, ilosc, licznik_tmp, i);
            for (int i = 0; i < kombinacje.size(); i++) {
                wspolrzedne.push_back(kombinacje[i]);
            }
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

    cout << "------------------" << endl;
    vector<vector<int>> wyniki = znajdowanie_wspolrzednychX(dlugosci, 3, ilosc);
    for (int i = 0;i<wyniki.size();i++) {
        for (int j = 0; j < wyniki[i].size(); j++) {
			cout << wyniki[i][j] << " ";
		}
        cout << endl;
    }
    cout << "------------------" << endl;
    vector<vector<int>> wyniki1 = znajdowanie_wspolrzednychY_stare(dlugosci, 3, ilosc);
    for (int i = 0; i < wyniki1.size(); i++) {
        for (int j = 0; j < wyniki1[i].size(); j++) {
            cout << wyniki1[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
