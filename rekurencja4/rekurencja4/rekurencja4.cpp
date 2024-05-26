#include <iostream>
using namespace std;

double pierwiastek(double a,double b,double p) {
    
    if (abs(p-a*a) <0.000001) {
        cout <<"a = " << a << endl;
        return a;
    }
    else {
        return pierwiastek((b + a) / 2, p/a,p);

    }
}

int main() {
    float a;
    double wynik = 0;
    cout << "Podaj liczbę: ";
    cin >> a;
    wynik=pierwiastek(a,1,a);
    cout<<"wynik =" << wynik << endl;
    cout<< pierwiastek(a, 1, a);
    return 0;
}
 