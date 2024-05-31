#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
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
        vector<int> komb = { i, j - licznik_tmp + k , i, j - licznik_tmp + k + dlugoscPasa - 1 };
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
                    vector<int> wsp2 = { i, j - licznik_tmp + 1, i, j };
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
            vector<int> wsp2 = { ilosc - licznik_tmp,i, i, ilosc - 1 };
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
                        vector<int> wsp2 = { i, j - licznik_tmp + 1, i, j };
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
            vector<int> wsp2 = { i, ilosc - licznik_tmp, i, ilosc - 1 };
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
vector<vector<int>>test(vector<string>dlugosci, int ilosc) {
    vector<vector<int>> wspolrzedneX = znajdowanie_wspolrzednychX(dlugosci, 4, ilosc);
    vector<vector<int>> wspolrzedneY = znajdowanie_wspolrzednychY_stare(dlugosci, 4, ilosc);
    vector<vector<int>> wspolny;
    for (int i = 0; i < wspolrzedneX.size(); i++) {
        wspolny.push_back(wspolrzedneX[i]);
    }
    for (int i = 0; i < wspolrzedneY.size(); i++) {
        wspolny.push_back(wspolrzedneY[i]);
    }
    return wspolny;

}
bool przeciecie(int l1x1, int l1y1, int l1x2, int l1y2, int l2x1, int l2y1, int l2x2, int l2y2) {
    //cout << "przeciecie";
    //cout << "l1x1: " << l1x1 << " l1y1: " << l1y1 << " l1x2: " << l1x2 << " l1y2: " << l1y2;
    //cout << "l2x1: " << l2x1 << " l2y1: " << l2y1 << " l2x2: " << l2x2 << " l2y2: " << l2y2 << endl;
    if (l2x1 >= l1x1 and l2x1 <= l1x2 or l2x2 > l1x1 and l2x2 <= l1x2 or l1x1 >= l2x1 and l1x1 <= l2x2 or l1x2 > l2x1 and l1x2 <= l2x2) {
        if (l2y1 >= l1y1 and l2y1 <= l1y2 or l2y2 > l1y1 and l2y2 <= l1y2 or l1y1 >= l2y1 and l1y1 <= l2y2 or l1y2 > l2y1 and l1y2 <= l2y2) {
            return false;
        }
    }
    return true;
}

int multi_przeciecie(vector<string>dlugosci, int ilosc) {

    for (int i = maxKoncowe(maxX(dlugosci), maxY(dlugosci)); i >= 0; i--) {
        vector<vector<int>> wspolrzedneX = znajdowanie_wspolrzednychX(dlugosci, i, ilosc);
        vector<vector<int>> wspolrzedneY = znajdowanie_wspolrzednychY_stare(dlugosci, i, ilosc);
        vector<vector<int>> wspolny;
        //cout << "lotniskax size: " << wspolrzedneX.size() << endl;
        //cout << "lotniskay size: " << wspolrzedneY.size() << endl;
        for (int w = 0; w < wspolrzedneX.size(); w++) {
            if (wspolrzedneX[w].size() == 4) {
                wspolny.push_back(wspolrzedneX[w]);
                //cout << "dodany x" << endl;
            }
            else {
                //cout << "error x" << ": nie poprawny" << wspolrzedneX[w].size() << endl;
            }


        }
        
        for (int w = 0; w < wspolrzedneY.size(); w++) {
            if (wspolrzedneY[w].size() == 4) {
                wspolny.push_back(wspolrzedneY[w]);
                //cout << "dodany y" << endl;
            }
            else {
                //cout << "error y" << ": nie poprawny" << wspolrzedneY[w].size() << endl;
            }
        }
        
        /*
        for (int j = 0; j < wspolny.size(); j++) {
            //cout << "[";
            for (int k = 0; k < wspolny[j].size(); k++) {
                //cout<<wspolny[j][k]<<" ";
            }
            //cout << "]"<<endl;

        }
        */
        //cout << "sprawdzanie KOmbinacji" << endl;
        if (wspolny.size() > 1) {
            /*
            if (i == 4) {
                cout<<"------------------"<<endl;
                for (int i = 0; i < wspolny.size(); i++) {
                    for (int j = 0; j < wspolny[i].size(); j++) {
                        cout << wspolny[i][j] << " ";
                    }
                    cout << endl;
                }
                cout << "------------------" << endl;
            }

            else {
            */
            for (int k = 0; k <= wspolny.size() - 2; k++) {
                for (int j = 1; j <= wspolny.size()-1; j++) {

                    if (przeciecie(wspolny[k][0], wspolny[k][1], wspolny[k][2], wspolny[k][3], wspolny[j][0], wspolny[j][1], wspolny[j][2], wspolny[j][3])) {
                        return i;
                    }

                }
            }
            

        }




    }

}


int main() {
    string ustawienie;
    vector<string> dlugosci;
    int minimalna_ilosc_pasow;
    int ilosc;
    //cout<<przeciecie(0,2,0,4,2,2,2,4)<<endl;
    //exit(0);
    cin >> ilosc >> minimalna_ilosc_pasow;
    for (int i = 0; i < ilosc; i++) {
        cin >> ustawienie;
        dlugosci.push_back(ustawienie);
    }
    if (minimalna_ilosc_pasow == 1) {
		
        cout << maxKoncowe(maxX(dlugosci), maxY(dlugosci));
        return 0;
	}
    else {
        cout << multi_przeciecie(dlugosci, ilosc);
        return 0;
	}
    //cout << 0 << endl;

    /*
    cout << "------------------" << endl;
    
    vector<vector<int>> wyniki = znajdowanie_wspolrzednychX(dlugosci, 3, ilosc);
    for (int i = 0; i < wyniki.size(); i++) {
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
    cout << "------------------" << endl;
    vector<vector<int>> wyniki2 = test(dlugosci, ilosc);
    for (int i = 0; i < wyniki2.size(); i++) {
        for (int j = 0; j < wyniki2[i].size(); j++) {
            cout << wyniki2[i][j] << " ";
        }
        cout << endl;
    }
    cout << "------------------" << endl;
    */
    //cout << "------------------" << endl;
    
    return 0;
}
