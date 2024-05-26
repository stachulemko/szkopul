#include <iostream>
using namespace std;

int main() {
    int n,flaga=true, a, max_poz = 0, max_l = 0, tmp_l = 1; // tmp_l = 1 na początku, ponieważ pojedynczy element jest niemalejącym ciągiem
    cin >> n;
    int* l = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a;
        l[i] = a;
    }
    for (int j = 0; j < n; j++) {
        for (int k = 2; k <= l[j] / 2; k++) {
            if (l[j] % k ==0 ) {
                flaga = false;

            }
        }
        if (flaga == true) {
            cout << l[j];
        }
    }
    
}