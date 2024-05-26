#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> l;


    for (int i = 0; i < n; i++) {
        int liczba;
        cin >> liczba;              // 5 3 2 1
        l.push_back(liczba);
    }
    int min = l[0];
    int diff = -1;
    for (int i = 1; i < l.size(); i++) {
        
        if (l[i] - min > diff) {
            diff = l[i] - min;

        }
        if (l[i] < min) {
            min = l[i];
        }
    }
    cout << diff;
    return 0;
}
