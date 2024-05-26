#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, a, tmp = 0, max1 = 0, max2 = 0, ltmp = 0, licznik = 0, tmp_k = 1;
    cin >> n;
    vector<int> l;

    for (int i = 1; i <= n; i++) {
        cin >> a;
        l.push_back(a);
    }

    for (int y = 0; y < 2; y++) {
        for (int k = 0; k < n; k++) {
            if (l[k] != max1 && l[k] != max2) {
                for (int w = 0; w < n; w++) {
                    if (l[w] == l[k]) {
                        tmp++;
                        ltmp = l[k];
                    }
                }
                if (tmp >= max1) {
                    max2 = max1;
                    max1 = tmp;
                }
                else if (tmp > max2) {
                    max2 = tmp;
                }
            }
            tmp = 0;
            ltmp = 0;
        }
    }
//szczytuje najczesciej wystepujace liczby cyfry
    for (int h = 0; h < n; h++) {
        if ((l[h] == max1 && tmp_k != max1) || (l[h] == max2 && tmp_k != max2) || tmp_k == 0) {
            tmp_k = l[h];
            licznik++;
        }
    }

    cout << licznik;

    return 0;
}
