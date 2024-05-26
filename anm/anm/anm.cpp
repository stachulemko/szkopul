#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string ciag;
    cin >> n;
    cin.ignore(); 
    getline(cin, ciag); 
    int licznik = 0;
    for (int i = 0; i < ciag.size(); i++) {
        if (isdigit(ciag[i])) {
            licznik += (ciag[i] - '0');
        }
    }
    cout << licznik << endl;
    return 0;
}
