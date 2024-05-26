#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    string b;
    cin >> a;
    cin >> b;

    char a1 = a[0];
    char a2 = b[0];
    
    int l1 = stoi(a.substr(1, 1));
    int l2 = stoi(b.substr(1, 1));

    int ascii_1 = int(a1);
    int ascii_2 = int(a2);
    //cout << a1 << a2 << endl;
    //cout << l1 << l2 << endl;
    while (l1 != l2 or ascii_1 != ascii_2) {
        if (ascii_1 > ascii_2) {
            ascii_1--;
            cout << 'W';
        }
        else if (ascii_1 < ascii_2) {
            ascii_1++;
            cout << 'E';
        }
        if (l1 > l2) {
            l1--;
            cout << 'N';
        }
        else if (l1 < l2) {
            l1++;
            cout << 'S';
        }
        cout << ' ';



    }
}