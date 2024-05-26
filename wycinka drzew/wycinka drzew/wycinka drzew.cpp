#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a, c, d, b;
    vector<int> l1;
    vector<int> l2;
    vector<int> l3;

    cin >> a;
    cin >> b;
    for (int i = 0; i < a; i++) {
        cin >> c;
        l1.push_back(c);
    }
    for (int i = 0; i < a; i++) {
        cin >> d;
        l2.push_back(d);
    }
    for (int i = 0; i < l2.size(); i++) {
        if (i + 1 < l1.size()) {
            if (l2[i] > l1[i + 1]) {
                if (l2[i] - l1[i + 1] < 6) {
                    l3.push_back(l2[i]);
                }
            }
            else {
                if (l1[i + 1] - l2[i] < 6) {
                    l3.push_back(l2[i]);
                }
            }
        }
    }
    for (int i = 0; i < l3.size(); i++) {
        cout << l3[i] << endl;
    }

    return 0;
}
