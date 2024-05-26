#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, a;
    cin >> n;
    vector<int> v;
    int* tab = new int[n];
    int* tab1 = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> a;
        tab[i] = a;
    }

    for (int j = 0; j < n; j++) {
        int l = 0; 
        for (int k = 0; k < n; k++) {
            if (tab[j] == tab[k]) {
                l = l + 1;
            }
        }
        v.push_back(l);
    }

    int max = v[0];
    for (auto it = v.begin() + 1; it < v.end(); ++it) {
        if (*it > max) { 
            max = *it;
        }
    }

    cout << max << endl;

}
