#include <iostream>
#include <string> 
using namespace std;

int main()
{
    int l=0;
    string n;
    int cyfra;
    cin >> n;
    for (int j = 0; j < n.size(); j++) {
        if (n[j] != 'x') {
            //string cyfra(n[j]);
            cyfra = stoi(n.substr(j,1));
            l = l + cyfra;
            //cout << "cyfra " << cyfra << endl;
            //cout << "l " << l << endl;
        }


    }
    int reszta = l % 9;
    if (reszta == 0) {
        if (l == 0) cout << 9;
        else cout << 0;
    }
    else {
        cout << 9 - reszta;
    }

}