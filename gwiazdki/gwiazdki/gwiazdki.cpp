#include <iostream>
using namespace std;

int main() {
    int a,p,w,l=-1;
    cin >> a;
    p = a / 2;
    for (int i = 2; i < p;i++ ) {
        if (a % i == 0) {
            l = i;
            break;

        }


    }
    cout << l << endl;
    if (l > -1) {
        w = l;
        while(w<a) {
            w = w * l;
        }
        if (w > a) {
            cout << "nie ma";

        }
        if (w == a) {
            cout << w;
        }
    }
    else {
        cout << "nie mam" << endl;
    }

}