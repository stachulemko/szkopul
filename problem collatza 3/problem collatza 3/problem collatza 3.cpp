#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<long long int >l(1801,0);
    long long int max = 0;
    for (long long int i = 9780657630; i <= 50000000000; i++) {

        long long int  licznik = 1;
        long long int  liczba = i;

        while (liczba != 1) {
            if (liczba % 2 != 0) {
                liczba = liczba * 3 + 1;

            }
            else {
                liczba = liczba / 2;
            }
            licznik++;
            
        }
        if (i == 872) {
            cout << licznik;
        }
        if (licznik < 1801) {
            l[licznik] = i;
        }
        if (licznik > max) {
            max = licznik;
            cout << licznik<<' '<<i<<endl;
        }
        
        //cout << licznik << endl;
        
    }
    for (int i = 0; i < 1801; i++) {
        //cout << l[i]<<' '<< i << endl;
    }
    int a;
    cin >> a;
    if (a == 1) {
        cout << 1;
        return 0;
    }
    for (int i = 0; i < l.size(); i++) {
        if (l[i] == a) {
            cout << i+1;
            return 0;
        }
    }
   
    
}

