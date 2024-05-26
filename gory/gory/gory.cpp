#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, a, l1 = 0, l2 = 1, l3 = 2;
    //cin >> n;
    vector<int> l;
    n = 12;
    l = { 1, 5, 3, 4, 3, 4, 1, 2, 3, 4, 6, 2 };

    /*for (int i = 0; i < n; i++) {
        cin >> a;
        l.push_back(a);
    }*/
    //cout << n / 2 << endl;
    for (int j = 2; j <= n / 2 ; j++) { 
        if (n % j == 0) { 
            int lo = n / j; // liczba odcinkow
            int flaga = true;   // flaga glowna podzialu
            //cout << "---------licba odcinkow : " << lo << " o dl: " << j << endl;
            for (int k = 0; k < lo; k++) {  // nr odcinka
                int flaga_od = false;
                for (int w = 0; w < j; w++) {  // pozycja wzgledna w odcinku
                    //cout << "odcinek: " << k  << " dl:"<<j<<" poz: " << k * j + w << " poz wzgledna " << w << endl;
                    if (k * j + w - 1 >= 0 and k * j + w + 1 < n) {
                        //cout << "odcinek: " << k << " elementy: " << l[k * j + w - 1] << " " << l[k * j + w] << " " << l[k * j + w + 1] << endl;
                        if (l[k * j + w] > l[k * j + w - 1] and l[k * j + w] > l[k * j + w + 1]) {
                            flaga_od = true;
                            //cout << "true: " << "odcinek: " << k << " elementy: " << l[k * j + w - 1] << " " << l[k * j + w] << " " << l[k * j + w + 1] << endl;
                            break;
                        }
                    }
                }
                if (flaga_od == false) {
                    flaga = false;
                    //cout << "break" << endl;
                    break;
                }
            }
            if (flaga == true) {
              cout << lo;
              return 0;
            }
        }
    }
    cout << 0;
    return 0;   
}
