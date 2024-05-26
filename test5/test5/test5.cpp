#include <iostream>
using namespace std;
int main()
{
    int x, a, l_tmp=1, poz_tmp = 0, max_tmp = 0, max_poz=0;
    cin >> x;
    int* tab = new int[x];
    for (int i = 0; i < x; i++) {
        cin >> a;
        tab[i] = a;

    }
    for (int j = 1; j < x; j++) {
        if (tab[j - 1] < tab[j]) {
            l_tmp++;

        }
        else {
            if (l_tmp>max_tmp){
                max_tmp = l_tmp;
                max_poz = poz_tmp;
        }
        l_tmp = 1;
        poz_tmp = tab[j];


}