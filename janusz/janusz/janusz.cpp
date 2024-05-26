#include <iostream>
using namespace std;

int main() {
    int a, b, w;
    cin >> a;
    int l = 0;
    int c = 0, k = 0, j = 0;

    for (int i = 1; i <= a; i++) {
        cin >> b;
        l = l + 1;

        if (l == a-1) {
            c = b;
        }
        else if (l == a ) {
            k = b;
        }
        else if (l == 1) {
            j = b;
            //cout << j;
        }
    }

    if (c > k) {
        cout << "DOWN";
    }
    else if (k > c) {
        cout << "UP";
    }
    else if (j == 15) {
        cout << "DOWN";
    }
    else if (j == 0) {
        cout << "UP";
    }

    return 0;
}
