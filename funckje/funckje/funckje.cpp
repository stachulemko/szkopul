#include <iostream>
using namespace std;

bool liczbaDuzychLiter(int a) {
    while (a != 0 ) {
        int r = a % 10;
        if (r == 0) {
            return true;

        }
        a = a / 10;
    }
    return false;
}

int main() {
    int a;
    cin >> a;
    cout << liczbaDuzychLiter(a);
    return 0;
}
