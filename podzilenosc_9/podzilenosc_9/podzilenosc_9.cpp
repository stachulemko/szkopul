#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long int n;
    cin >> n;

    long long int licznik = 0;
    long long int reszta;
    long long int tmp = n;

    while (n != 0) {
        reszta = n % 10;
        licznik += reszta;
        n = n / 10;
    }

    if (licznik % 9 == 0) {
        cout << tmp;
        return 0;
    }
    else {
        string li = to_string(tmp);
        string li2 = to_string(tmp);

        for (long long int i = 0; i < li2.size(); i++) {
            for (long long int j = 0; j <= 9; j++) {
                li2[i] = char(j + '0');
                long long int liczba = stoi(li2);
                long long int l = 0;
                while (liczba != 0) {
                    long long int r = liczba % 10;
                    l += r;
                    liczba = liczba / 10;
                }
                if (l % 9 == 0 && li2[0] != '0') {
                    cout << stoi(li2) << endl;
                    return 0;
                }
                li2 = li;
            }
        }
    }
    return 0;
}
