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
    for (int dzielnik = 2; dzielnik <= n / 2; dzielnik++) {
        if (n % dzielnik == 0) {
            int d_o = dzielnik;
            int l_o = n / dzielnik;
            //cout <<"d_o: "<< d_o << endl;
            //cout <<"l_o: " << l_o << endl;
            int flaga = true;
            for (int k = 0; k < l_o; k++) {
                if (flaga == false) {
                    break;
                }
                int flaga_od = false;
                for (int w = 0; w < d_o; w++) {
                    //cout <<"nr_odcinka: " << k<<endl;
                    //cout << "element: " << k * d_o + w << endl;
                    if (k * d_o + w - 1 >= 0 and k * d_o + w + 1 < n) {
                        if (l[k * d_o + w] > l[k * d_o + w - 1] and l[k * d_o + w] > l[k * d_o + w + 1]) {
                            flaga_od = true;
                            //cout << "ok: "<<k<<endl;
                            break;
                            
                        }
                    }


                }
                if (flaga_od == false) {
                    flaga = false;
                    //cout << "zepsucie flagi" << endl;
                }
                

                
                
            }
            if (flaga == true) {
                cout << l_o;
                return 0;
            }
            

            
            
        }
    }
}