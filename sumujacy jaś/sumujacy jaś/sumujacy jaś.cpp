#include <vector>
#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath> // Dla funkcji round
#include <iomanip> // Dla manipulatorów strumieniowych
using namespace std;

int main()
{
    int n;
    string liczba;
    cin >> n;
    double licznik = 0;

    for (int i = 0; i < n; i++) {
        cin >> liczba;

        if (liczba[0] == '+') {
            liczba.erase(0, 1);
            if (liczba.find(',') != string::npos) {
                liczba[liczba.find(',')] = '.';
                licznik = licznik + stof(liczba);
            }
            else {
                licznik = licznik + stoi(liczba);
            }
            //cout << licznik << endl;
        }
        else if (liczba[0] == '-') {
            liczba.erase(0, 1);
            if (liczba.find(',') != string::npos) {
                liczba[liczba.find(',')] = '.';
                licznik = licznik - stof(liczba);
            }
            else {
                licznik = licznik - stoi(liczba);
            }
            //cout << licznik << endl;
        }
        else {
            if (liczba.find(',') != string::npos) {
                liczba[liczba.find(',')] = '.';
                licznik = licznik + stof(liczba);
            }
            else {
                licznik = licznik + stoi(liczba);
            }
            //cout << licznik << endl;
        }
    }

    //cout << licznik << endl;

    string l = to_string(licznik);
    double tmp=0;
    if (l.find('.') != string::npos) {
        
    }
    else {
        cout << licznik << endl;
    }

    

    return 0;
}
