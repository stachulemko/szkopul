#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> l;
    int n, liczba;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> liczba;
        l.push_back(liczba);
    }

    sort(l.begin(), l.end(), greater<int>());

    for (int i = 0; i< 10; i++) {
        cout << l[i] <<' ';
    }

    return 0;
}
