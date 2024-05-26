

#include <iostream>
using namespace std;
int main()
{
	int n,a,licznik=0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		if (a >= 0) {
			a = a / 10;
			a = a % 10;
			licznik = licznik + a % 10;
			
			
		}
		else {
			if (licznik == 11) {
				licznik = 0;
				cout << a;
			}
		}
	}

}

