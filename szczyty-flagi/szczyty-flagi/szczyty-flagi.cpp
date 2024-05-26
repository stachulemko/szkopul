#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, a, l1 = 0, l2 = 1, l3 = 2, flaga = false;
    cin >> n;
    vector<int> l;

    for (int i = 0; i < n; i++) {
        cin >> a;
        l.push_back(a);
    }
    for (int j = 2; j < n/2 or j==n; j++) {
        if (n % j == 0) {
            cout << j;
            if (l3 <= n) {
                if (l3 >= j) {
                    if (l[l2] > l[l1] && l[l2] > l[l3]) {
                        cout << "dasdasdasd";
                        flaga = true;
                        l1++;
                        l2++;
                        l3++;
                    }
                }
                else {
                    if (flaga == false) {
                        break;
                    }

                }

                
                
            }
            l1 = 1;
            l2 = 2;
            l3 = 3;
            if (flaga == true) {
                cout << a;
                return 0;
            }
        }
    }

    return 0;
}
