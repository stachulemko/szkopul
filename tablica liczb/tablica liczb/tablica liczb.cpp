#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t,licznik=0,lg_w=0; // liczba testów
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;

        for (int j = a; j <= b; j++) {
            int n = j;
            vector<int> factors;
            int k = 2;

            while (n > 1) {
                while (n % k == 0) {
                    factors.push_back(k);
                    n /= k;
                }
                ++k;    
            }
            for (int w = 0; w < factors.size(); w++) {
                for (int h = 2; h < j / 2; h++) {
                    if (factors[w] % h == 0) {
                        break;
                    }
                    else if (factors[w] % h != 0) {
                        licznik++;
                    }
                }
                if (licznik >= 2) {
                    lg_w++;
                }
                licznik = 0;
       
            }
            
            //factors.clear();
        }
        cout << lg_w << endl;
        lg_w = 0;

    }
    return 0;
}
