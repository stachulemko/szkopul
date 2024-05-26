

#include <iostream>
using namespace std;
int main()
{
	long long x, y,a,b,ilosc_5,ilosc_3,ilosc_15;
	cin >> x >> y;
	if (x > y) {
		cout << 0;
		return 0;
	}
	a = x / 5;
	b = y / 5;
	ilosc_5 = b - a;
	if (x % 5 == 0) {
		ilosc_5++;
	}
	a = x / 3;
	b = y / 3;
	ilosc_3 = b - a;
	if (x % 3 == 0) {
		ilosc_3++;

	}
	a = x / 15;
	b = y / 15;
	ilosc_15 = b - a;
	if (x % 15 == 0) {
		ilosc_15++;

	}
	cout << ilosc_3 + ilosc_5 - ilosc_15;
	return 0;
}
