// nww.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
using namespace std;
bool czy_dizelnik(vector<int>l, int a) {
    bool flaga = true;
    for (int i = 0; i < l.size(); i++) {
        if (a % l[i] != 0) {
            flaga = false;
        }
    }
    return flaga;
}
int nwd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int nww(int a, int b) {
    return abs(a * b) / nwd(a, b);
}


int nwwDlaVectora(const std::vector<int>& vec) {
    return std::accumulate(vec.begin(), vec.end(), 1, nww);
}
//blad jest taki ze musze czysci wtedy kiedy jest wiecej niz 2 elelemnty w vectorze
vector<int>znajdywanie_najdluzszej(int liczby) {
    vector<int>tmp;
    for (int i = 1; i <= liczby / 2; i++) {
        tmp.push_back(i);
        //bool flaga = false;
        for (int j = i + 1; j <= liczby / 2; j++) {
            tmp.push_back(j);
            int nww = nwwDlaVectora(tmp);
            if (nww == liczby and tmp.size() >= 2) {
                return tmp;
                //flaga = true;
            }
            else if (nww > liczby) {
                tmp.clear();
                break;
            }
        }
    }
    tmp.clear();
    return tmp;
}
vector<int>znajdywanie_najdluzszego_ciagu_dzielnikow(int liczby) {
    vector<int>tmp;
    vector<int>max;
    for (int i = 1; i <= liczby / 2; i++) {
        tmp.push_back(i);
        if (nwwDlaVectora(tmp) == liczby and tmp.size() >= 2) {
            if (tmp.size() > max.size()) {
                max = tmp;
                return max;
            }
        }
        else if (czy_dizelnik(tmp, liczby) == false) {
            tmp.clear();
        }

    }
    return max;

}


int main() {
    int liczba_liczb_pod;
    int liczba;
    vector<int>pom;
    cin >> liczba_liczb_pod;
    for (int i = 0; i < liczba_liczb_pod; i++) {
        cin >> liczba;
        if (liczba % 2 != 0) {
            pom.push_back(-1);
        }
        else {
            pom.push_back(liczba);
        }
        
    }
    /*
    for (int i = 0; i < pom.size(); i++) {
        if (znajdywanie_najdluzszego_ciagu_dzielnikow(pom[i]).size() == 0) {
            cout << "NIE" << endl;
        }
        else {
            cout << znajdywanie_najdluzszego_ciagu_dzielnikow(pom[i])[0] << " " << znajdywanie_najdluzszego_ciagu_dzielnikow(pom[i])[znajdywanie_najdluzszego_ciagu_dzielnikow(pom[i]).size() - 1] << endl;
        }
    }
    cout<<"__________________________"<<endl;
    */
    for (int i = 0; i < pom.size(); i++) {
        if (pom[i] == -1) {
			cout << "NIE" << endl;
            continue;
		}
        
        if (znajdywanie_najdluzszej(pom[i]).size() == 0) {
            cout << "NIE" << endl;
        }
        else {
            cout << znajdywanie_najdluzszej(pom[i])[0] << " " << znajdywanie_najdluzszego_ciagu_dzielnikow(pom[i])[znajdywanie_najdluzszego_ciagu_dzielnikow(pom[i]).size() - 1] << endl;
        }
    }



}