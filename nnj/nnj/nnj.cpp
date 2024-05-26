#include <iostream>
using namespace std;

int main() {
    int x, y, l1 = 0, k = 0, w = 0, c = 0, l2 = 0,s,v=0,a,l3=0;
    cin >> x >> y;

    for (int i = x; i <= y; i++) {
        if (i % 5 == 0) {
            k = i;
            w = 1;
        }
        if (w == 1) {
            i = y + 1;
            w = 0;
        }
    }

    for (int g = x; g <= y; g++) {
        if (g % 3 == 0) {
            c = g;
            w = 1;
        }
        if (w == 1) {
            g = y + 1;
            w = 0;
        }
    }

    for (int b = x; b <= y; b++) {
        if (b % 15 == 0) {
            s = b;
            v = v + 1;

        }
        if (v == 1) {
            b = y + 5;
        }

    }
    for (int a = s; a <= y; a = a + 15) {
        l3 = l3 + 1;

    }
    //cout << l3; 


    for (int d = k; d <= y; d = d + 5) {
        l1 = l1 + 1;
    }
    for (int m = c; m <= y; m = m + 3) {
        l2 = l2 + 1;
    }

    cout << l1 + l2-l3;
    return 0;
}
