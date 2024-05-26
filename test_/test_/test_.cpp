#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

vector<int> laczenie_rodzinnych(vector<int> l) {
    vector<int> l_gotowe;
    int tmp = l[0];

    bool flaga = true;

    if (tmp < 0) {
        flaga = false;
    }
    int suma = tmp;
    for (int i = 1; i < l.size(); i++) {
        if (!flaga) {
            if (l[i] < 0) {
                suma += l[i];
            }
            else {
                l_gotowe.push_back(suma);
                suma = 0;
                suma += l[i];
                flaga = true;
            }
        }
        else {
            if (l[i] > 0) {
                suma += l[i];
            }
            else {
                l_gotowe.push_back(suma);
                suma = 0;
                suma += l[i];
                flaga = false;
            }

        }
    }
    l_gotowe.push_back(suma);
    return l_gotowe;
}

int main() {
    string n;
    cin >> n;
    vector<int> l1;
    vector<int> l2;
    int licznik0 = 0;
    int licznik1 = 0;
    for (int i = 0; i < n.size(); i++) {
        if (n[i] == '1') {
            licznik1--;
            if (!l1.empty() && licznik0 != 0) {
                l1.push_back(licznik0);
                licznik0 = 0;
            }
        }
        else if (n[i] == '0') {
            licznik0++;
            if (!l1.empty() && licznik1 != 0) {
                l1.push_back(licznik1);
                licznik1 = 0;
            }
        }
    }

    if (licznik1 != 0)
        l1.push_back(licznik1);
    else if (licznik0 != 0)
        l1.push_back(licznik0);

    int liczba_ujemnych = 0;
    for (int i = 0; i < l1.size(); i++) {
        if (l1[i] < 0) {
            liczba_ujemnych++;
        }
    }

    while (liczba_ujemnych != 1 && liczba_ujemnych > 0) {
        int min_ready = 0;
        int roznica_tmp = 0;
        int roznica = 0;
        int ujemne_tmp = 0;
        int dodatnie_tmp = 0;
        int min_tmp = abs(l1[0]);
        int min_tmp_index = 0;
        for (int j = 0; j < min(3, (int)l1.size()); j++) { // Poprawiona iteracja
            if (l1[j] < 0) {
                ujemne_tmp += l1[j];
            }
            else if (l1[j] > 0) {
                dodatnie_tmp += l1[j];
            }
        }
        for (int j = 1; j < min(3, (int)l1.size()); j++) { // Poprawiona iteracja
            if (abs(l1[j]) < min_tmp) {
                min_tmp = abs(l1[j]);
                min_tmp_index = j;
            }
        }
        roznica_tmp = dodatnie_tmp + ujemne_tmp;

        for (int i = 0; i < l1.size(); i++) {
            //cout << l1[i] << ' ';
        }
        for (int i = 0; i < l1.size() - 1; i++) {
            if (i + 3 < l1.size() - 1) {
                int dodatnie = 0;
                int ujmene = 0;
                for (int j = i; j < i + 3; j++) {

                    if (l1[j] < 0) {
                        ujmene += l1[j];
                    }
                    else if (l1[j] > 0) {
                        dodatnie += l1[j];
                    }
                }
                int min = abs(l1[i]);
                int min_index = i;
                cout << "min" << min << endl;
                cout << "min_index" << min_index << endl;
                for (int j = i + 1; j < i + 3; j++) {
                    if (abs(l1[j]) < min) {
                        min = abs(l1[j]);
                        min_ready = l1[j];
                    }
                }
                //cout << "######################" << endl;
                //cout << dodatnie << endl;
                //cout << ujmene << endl;
                //cout << min << endl;
                //cout << "######################" << endl;
                roznica = dodatnie + ujmene;
                // cout << "min_tmp_index" << min_tmp_index << endl;
                 //cout << "roznica_tmp" << roznica_tmp << endl;
                 //cout << "roznica" << roznica << endl;
                if (roznica > roznica_tmp) {
                    //cout << "dadasdadsadasasdasd" << endl;
                    roznica_tmp = roznica;
                    min_tmp = min;
                    min_tmp_index = min_index;
                    // cout << "min_tmp_index" << min_tmp_index << endl;
                }



            }
        }
        cout << "^^^^^^^^^^^^dasdas^^^^^^^^^^^" << endl;
        cout << min_tmp << endl;
        cout << min_tmp_index << endl;
        cout << min_ready << endl;
        cout << "^^^^^^^^^^^^adsasda^^^^^^^^^^^" << endl;
        l1.erase(l1.begin() + min_tmp_index);
        cout << "********************************" << endl;
        for (int i = 0; i < l1.size(); i++) {
            cout << l1[i] << endl;
        }
        cout << "********************************" << endl;
        l1.clear();
        l1 = laczenie_rodzinnych(l1);

    }
    for (int i = 0; i < l1.size(); i++) {
        cout << l1[i] << endl;
    }

}
