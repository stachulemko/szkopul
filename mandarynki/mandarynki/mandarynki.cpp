    #include <iostream>
    using namespace std;

    int main() {
        int max = 1,max_nww=0;
        int pojemnosc_koszyka;
        cin >> pojemnosc_koszyka;

        for (int j = 1; j <= pojemnosc_koszyka; j++) {
            for (int i = j + 1; i <= pojemnosc_koszyka; i++) {
                int reszta;
                int tmp_i = i;
                int tmp_j = j;


                while (tmp_j != 0) {
                    reszta = tmp_i % tmp_j;
                    tmp_i = tmp_j;
                    tmp_j = reszta;
                }


                if (tmp_j > max) {
                    max = tmp_i;
                }
            }
        }
        //cout << max<<endl;
        for (int j = 1; j <= pojemnosc_koszyka; j++) {
            for (int i = j + 1; i <= pojemnosc_koszyka; i++) {
                if (((j * i) / max) > max_nww) {
                    max_nww = (j * i) / max;

                }
            }

        }
        cout << max_nww+max<<endl;
    }