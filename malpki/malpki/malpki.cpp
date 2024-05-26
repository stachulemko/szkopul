#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x;
    y = x + 2;
    for (int i = 1; i <= y; i++) {
        cout << "#";
    }
    cout << endl;
    for (int j = 0; j <3; j++) {
        if (j == 1) {
            for (int k = 1; k <= x; k++) {
                cout << "@";
            }
        }
        else {
            cout << "#";
        }
    }
    cout << endl;
    for (int w = 1; w <= y; w++) {
        cout << "#";
    }
    return 0;
}
