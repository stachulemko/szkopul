#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<int> l1;

    for (int i = 0; i < 1000; i++) {
        cin >> n;
        int l = 0;
        int tmp = n;

        // Check for prime
        for (int j = 2; j <= n / 2; j++) {
            if (n % j == 0) {
                l++;
                break;
            }
        }

        // If prime, add to vector
        if (l == 0) {
            l1.push_back(tmp);
        }
    }

    // Output primes
    cout << "###############################3" << endl;
    cout << "###############################3" << endl;
    for (int i = 0; i < l1.size(); i++) {
        if (l1[i] >= 4000 and l1[i] <= 5000) {
            cout << l1[i] << endl;
        }

    }

    return 0;
}
