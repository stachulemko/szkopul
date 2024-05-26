#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, a,licznik=0;
    vector<int> l;
    vector<int> l1;

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        l.push_back(a);
    
    }
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
            if (l[j] % l[k] != 0) {
                licznik++;

            }
        }
        cout << licznik << endl;
    }   licznik = 0;
}