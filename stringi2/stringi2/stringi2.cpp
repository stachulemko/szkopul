#include <iostream>
#include <string>
using namespace std;

int main() {

    int n, a, flaga = true;
    cin >> n;
    int* tab = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a;
        tab[i] = a;
    }
    for (int j = 0; j < n; j++) {
        if (tab[j] < tab[j + 1]) {
            flaga = true;

        }
        else if(tab[j]>tab[j+1]) {
            flaga = false;
        }
    }
    if (flaga == true) {    
        cout << "rosnacy";
    }
    else if (flaga == false) {
        cout << "malejacy";
    }

}