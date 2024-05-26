

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,licznik=0;
	cin >> a;	
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= a; j++) {
			if (i*j == a) {
				cout << i * j << endl;
				licznik = 2*(i + j);
				i = a + 5;

			}
		}
	}
	for (int i = 2; i <= a; i++) {
		for (int j = 1; j <= a; j++) {
			if (i * j == a) {
				if (2*(i + j) < licznik) {
					licznik = 2*(i + j);
				}

			}
		}
	}
	cout << licznik;
}

