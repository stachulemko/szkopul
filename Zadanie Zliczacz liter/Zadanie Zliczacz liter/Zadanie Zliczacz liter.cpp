#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // to consume the newline character after n

    vector<int> alfabet(52, 0); // Initialize vector with 52 zeros for 26 uppercase and 26 lowercase letters

    for (int j = 0; j < n; j++) {
        string zdanie;
        getline(cin, zdanie);

        for (int i = 0; i < zdanie.size(); i++) {
            char ch = zdanie[i];
            if (ch >= 'A' && ch <= 'Z') {
                alfabet[ch - 'A']++;
            }
            else if (ch >= 'a' && ch <= 'z') {
                alfabet[ch - 'a' + 26]++;
            }
        }
    }
    for (int i = 26; i < 52; i++) {
        if (alfabet[i] > 0) {
            cout << static_cast<char>('a' + (i - 26)) << ' ' << alfabet[i] << endl;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (alfabet[i] > 0) {
            cout << static_cast<char>('A' + i) << ' ' << alfabet[i] << endl;
        }
    }
    

    return 0;
}
