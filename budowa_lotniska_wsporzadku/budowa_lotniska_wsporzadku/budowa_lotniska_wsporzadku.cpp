// budowa_lotniska_12.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include<vector>
#include <string>
using namespace std;

int  maxY(vector<string>& dlugosci) {
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
    if (maxX > maxY) {
        return maxX;
    }
    else if (maxY > maxX) {
        return maxY;
    }
}
vector<vector<int>> znajdowanie_wspolrzednychY(vector<string>& dlugosci, int dlugoscPasa, int ilosc) {
    vector<vector<int>> wspolrzedne;

    for (int j = 0; j < dlugosci[0].size(); j++) {
        int licznik_tmp = 0;
        for (int i = 0; i < ilosc; i++) {
            if (dlugosci[i][j] != 'X') {
                licznik_tmp++;
            }
            else {
                if (licznik_tmp == dlugoscPasa) {
                    vector<int> wsp2 = { i - licznik_tmp, j,licznik_tmp, i, j };
                    wspolrzedne.push_back(wsp2);
                }
                licznik_tmp = 0;
            }
            //licznik_tmp = 0;
        }
        if (licznik_tmp >= dlugoscPasa) {
            vector<int> wsp2 = { ilosc - licznik_tmp,licznik_tmp, j, ilosc, j };
            wspolrzedne.push_back(wsp2);
        }
        licznik_tmp = 0;
    }
    return wspolrzedne;
    //  0 1 2 3 4 
    // 1 
    // 2 
    // 3 
    // 4 
    // 5 
    //
    //
    //
}

vector<vector<int>>znajdowanie_wspolrzednychX(vector<string>& dlugosci, int dlugoscPasa, int ilosc) {
    vector<vector<int>> wspolrzedne;
    int licznik_tmp = 0;
    for (int i = 0; i < dlugosci.size(); i++) {

        // analiza stringu 
        for (int j = 0; j < ilosc; j++) {
            if (dlugosci[i][j] != 'X') {
                licznik_tmp++;
                //cout<<"++"<<licznik_tmp << endl;
            }
            else {
                //cout<<"end"<<licznik_tmp << endl;
                if (licznik_tmp == dlugoscPasa) {
                    vector<int>wsp2;
                    wsp2.push_back(i);
                    wsp2.push_back(j - licznik_tmp + 1);
                    wsp2.push_back(licznik_tmp);
                    wsp2.push_back(i);
                    wsp2.push_back(j + 1);
                    wspolrzedne.push_back(wsp2);
                    //wsp2.clear();
                }
                else if (licznik_tmp > dlugoscPasa) {

                    //cout << "wychodzi" <<licznik_tmp<< endl;
                }

                licznik_tmp = 0;


            }
        }
        if (licznik_tmp == dlugoscPasa) {
            vector<int>wsp2;
            wsp2.push_back(i);
            wsp2.push_back(ilosc - licznik_tmp);
            wsp2.push_back(licznik_tmp);
            wsp2.push_back(i);
            wsp2.push_back(ilosc);
            wspolrzedne.push_back(wsp2);
            //wsp2.clear();
        }
        else if (licznik_tmp > dlugoscPasa) {

            //cout << "wychodzi" << licznik_tmp << endl;
        }
        licznik_tmp = 0;
    }
    return wspolrzedne;
}

void testY(vector<string>& dlugosci, int dlugoscPasa, int ilosc) {
    vector<vector<int>> wspolrzedne;
    int licznik_tmp = 0;
    string tmp = "";
    for (int i = 0; i < dlugosci.size(); i++) {

        // analiza stringu 
        cout << "-----------------" << endl;
        for (int j = 0; j < ilosc; j++) {
            cout << dlugosci[j][i] << endl;
        }
        cout << "-----------------" << endl;
    }

}

int main()
{

    string ustawienie;
    vector<string>dłuogsc;
    int minimalna_ilosc_pasow;
    int ilosc;
    cin >> ilosc >> minimalna_ilosc_pasow;
    for (int i = 0; i < ilosc; i++)
    {
        cin >> ustawienie;
        dłuogsc.push_back(ustawienie);
    }
    //cout << maxX(dłuogsc);
    //cout<<maxY(dłuogsc);
    //cout << "-----------------" << endl;
    //znajdowanie_wspolrzednychX(dłuogsc, 3, ilosc);

    for (int i = 0; i < znajdowanie_wspolrzednychX(dłuogsc, 3, ilosc).size(); i++)
    {
        for (int j = 0; j < znajdowanie_wspolrzednychX(dłuogsc, 3, ilosc)[i].size(); j++)
        {
            cout << znajdowanie_wspolrzednychX(dłuogsc, 3, ilosc)[i][j] << " ";
        }
    }

    cout << "------------------" << endl;
    for (int i = 0; i < znajdowanie_wspolrzednychY(dłuogsc, 3, ilosc).size(); i++)
    {
        for (int j = 0; j < znajdowanie_wspolrzednychY(dłuogsc, 3, ilosc)[i].size(); j++)
        {
            cout << znajdowanie_wspolrzednychY(dłuogsc, 3, ilosc)[i][j] << " ";
        }
    }

    //cout << "------------------" << endl;

}

