#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long x;
    cin >> x; // Liczba
    double base = 2.0; // Podstawa logarytmu
    // Obliczanie logarytmu o podstawie base z liczby x
    long long result =int(log(x) / log(base))+1;
    cout << result;

    //std::cout << "Logarytm o podstawie " << base << " z " << x << " wynosi: " << result << std::endl;

    return 0;
}
