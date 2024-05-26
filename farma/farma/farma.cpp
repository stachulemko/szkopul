#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int krowy = 0;
    int kury = 0;
    if (4 * x == y) {
        
        cout << kury <<' ' << x;
        return 0;
    }
    else if (2 * x == y) {
        cout << x<<' ' << krowy;
        return 0;
    }
    for (int i = 1; i <= x; ++i) {
        if (4 * i <= y and (x - i) * 2 + 4 * i == y) {
            cout << x - i << ' ' <<i<< endl;
            return 0;
        }
       
    }
}
