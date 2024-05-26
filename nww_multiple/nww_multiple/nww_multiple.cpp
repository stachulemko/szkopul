// nww.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
using namespace std;
bool czy_dizelnik(vector<int>l,int a) {
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
vector<int>znajdywanie_najdluzszego_ciagu_dzielnikow(int liczby) {
    vector<int>tmp;
    vector<int>max;
    for (int i = 1; i <= liczby/2; i++) {
        tmp.push_back(i);
        if (nwwDlaVectora(tmp) == liczby and tmp.size()>=2) {
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
void znajdywanie_najdluzszego_ciagu_dzielnikow1(int liczba) {
    int tmp_start=1,tmp_end=1,tmp_size=0;
    int max_start,max_end,max_size=0;
    vector<int>max;
    int polowa = liczba / 2;
    for (int i = 1; i <= polowa; i++) {
        if (liczba% i == 0) {
			tmp_end = i;
			tmp_size++;
 
		}
        else {
            if (tmp_size > max_size){
                max_start = tmp_start;
                max_end = tmp_end;
                max_size = tmp_size;
            }
			tmp_start = i;
			tmp_end = i;
			tmp_size = 1;
					
		}

    }
    if (max_size > 1) {
		cout << max_start << " " << max_end << endl;
	}
    else {
		cout << "NIE" << endl;
	}
    
    //max.push_back(max_start);
    //max.push_back(max_end);
    //max.push_back(tmp_size);
    //return max;
}




int main() {
    int liczba_liczb_pod;
    int liczba;
    vector<int>pom;
    cin >> liczba_liczb_pod;
    for (int i = 0; i < liczba_liczb_pod; i++) {
        cin >> liczba;
        pom.push_back(liczba);
    }
    /*for (int i = 0; i < pom.size(); i++) {
        if (znajdywanie_najdluzszego_ciagu_dzielnikow(pom[i]).size() == 0) {
            cout << "NIE" << endl;
        }
        else {
            cout << znajdywanie_najdluzszego_ciagu_dzielnikow(pom[i])[0] << " " << znajdywanie_najdluzszego_ciagu_dzielnikow(pom[i])[znajdywanie_najdluzszego_ciagu_dzielnikow(pom[i]).size() - 1]<<endl;
        }
	}*/
    for (int i = 0; i < pom.size(); i++) {
		znajdywanie_najdluzszego_ciagu_dzielnikow1(pom[i]);
	}
	return 0;   
    

}
