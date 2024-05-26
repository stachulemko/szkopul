#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>l;

    for (int i = 1; i <= 1800; i++) {
        int licznik = 1;
        int liczba = i;
        while (liczba != 1) {
            if (liczba % 2 != 0) {
                liczba = liczba * 3 + 1;

            }
            else {
                liczba = liczba / 2;
            }
            licznik++;

        }
        l.push_back(licznik);
        cout << i<< " :" << licznik<< endl;
    }
}