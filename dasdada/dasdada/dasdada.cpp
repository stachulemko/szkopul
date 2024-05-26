#include <iostream>
using namespace std;

int main() {
    int n, a, max_poz = 0, max_l = 0, tmp_l = 1,licznik_tmp=0,l_max=0,tmp_poz,l_poz=0; // tmp_l = 1 na początku, ponieważ pojedynczy element jest niemalejącym ciągiem
    cin >> n;
    int* l = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a;
        l[i] = a;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; i < n; i++) {
            if (l[i] == l[j]) {
                licznik_tmp = licznik_tmp + 1;
                tmp_poz = l[i];
            }
        }
        if (licznik_tmp > l_max) {
            l_poz = tmp_poz;

        }
        licznik_tmp = 0;
        tmp_poz = 0;
    }
    cout << l_poz;

}