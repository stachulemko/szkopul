// nww.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
using namespace std;
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
    vector<int>l;
    vector<int>max;
    for (int i = 1; i <= liczby/2; i++) {
        l.push_back(i);
        cout << "dodawanie do vectora l: " << i << endl;
        if (max.size() < l.size()) {
            cout<<"========================="<<endl;
            for (int j = 0; j < l.size(); j++) {
				cout << l[j] <<endl;
			}
            cout << "=========================" << endl;
            
            if (nwwDlaVectora(l) == liczby) {
                max.clear();
                for (int k = 0; k < l.size(); k++) {
					max.push_back(l[k]);
				}
                for (int w = 0; w < max.size(); w++) {
                    cout<<"max: "<<max[w]<<endl;    
                }
            }
            else if(l.size()>=2) {
                l.clear();
            }
        }

    }
    return max;
}
 

int main() {
    
    znajdywanie_najdluzszego_ciagu_dzielnikow(12);
    
}
