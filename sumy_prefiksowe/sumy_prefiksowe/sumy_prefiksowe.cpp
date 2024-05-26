#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> liczby_pierwsze(500000, 1);
    liczby_pierwsze[0] = 0;
    liczby_pierwsze[1] = 0;

    for (int i = 2; i < 500000; i++) {
        if (liczby_pierwsze[i] == 1) {
            for (int j = i + i; j < 500000; j = j + i) {
                liczby_pierwsze[j] = 0;
            }
        }
    }

    vector<int> liczby;

    for (int i = 0; i < 500000; i++) {
        if (liczby_pierwsze[i] == 1) {
            liczby.push_back(i);
        }
    }
    //liczby.size()

    vector<int> polpierwsze(1000000, 0);

    for (int i = 0; i < liczby.size(); i++) {
        for (int j = 0; j < liczby.size(); j++) {
            long long int pom = liczby[i] * liczby[j];
            if (pom < 500000) {
                polpierwsze[pom] = 1;
            }
            else {
                break;
            }
        }
    }


    int a, b,s;
    cin >> a >> b;
    vector<int>lista(500001,0);
    s = 0;
    for (int i = 1; i < 500001; ++i) {
        if (polpierwsze[i-1] == 1) {
            s = s + 1;
        }
        lista[i] = s;
  
    }
cout << lista[b + 1] - lista[a]<<endl;

    int suma = 0;

    for (int i = a; i <= b; i++) {
        suma = suma + polpierwsze[i];
    }
    cout << suma << endl;


    return 0;
}