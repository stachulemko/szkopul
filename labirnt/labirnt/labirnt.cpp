#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> l;
    vector<int> dodatnie;
    vector<int> ujemne;
    for (int i = 0; i < n; i++) {
        int ciag;
        cin >> ciag;
        l.push_back(ciag);
    }
    for (int i = 0; i < l.size(); i++) {
        if (l[i] > 0) {
            dodatnie.push_back(l[i]);

        }

        else if (l[i] < 0) {
            ujemne.push_back(l[i]);

        }

    }
    for (int i = 0; i < dodatnie.size(); i++) {
        cout << dodatnie[i] << endl;

    }
    cout << "##########################" << endl;
    //cout << "--------------";
    for (int i = 0; i < ujemne.size(); i++) {
        cout << ujemne[i] << endl;

    }

    int daminety = 0;
    int uzycia = 0;
    int licznik = 0;

    while (licznik < l.size()) {
        if (l[licznik] < 0) {
            daminety += abs(l[licznik]);
            uzycia++;
            licznik++;
        }

        vector<int> l1;
        while (licznik < l.size() && l[licznik] > 0) {
            l1.push_back(l[licznik]);
            licznik++;
        }
        while (licznik < l.size() && l[licznik] < 0) {
            l1.push_back(l[licznik]);
            licznik++;
        }
        for (int i = 0; i < l1.size(); i++) {
            if (l1[i] > 0) {
                dodatnie.push_back(l1[i]);
            }
            else if (l1[i] < 0) {
                ujemne.push_back(l1[i]);
            }
        }
        cout << "##################"<<endl;
        for (int i = 0; i < l1.size(); i++) {
            cout << l1[i]<<endl;
        }
    }
    //cut << uzycia << endl;
}
