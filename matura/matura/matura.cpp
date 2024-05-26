#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int a,b,c;
	int licznik = 0;
	int licznik_35 = 0;
	int tmp_a = 0;
	int tmp_b = 0;
	int tmp_c = 0;
	int max = 0;
	cin >> a >> b >> c;
	while (a != 0) {
		tmp_a += a % 10;
		a = a / 10;
	}
	while (b != 0) {
		tmp_b += b % 10;
		b = b / 10;
	}
	while (c != 0) {
		tmp_c += c % 10;
		c = c / 10;
	}
	if (tmp_a + tmp_b + tmp_c == 35) {
		licznik_35++;
	}
	max = tmp_a + tmp_b + tmp_c;
	for (int i = 1; i < 1000; i++) {
		cin >> a>>b>>c;
		int suma_a = 0;
		int suma_b = 0;
		int suma_c = 0;
		while (a != 0) {
			suma_a += a % 10;
			a = a / 10;
		}
		while (b != 0) {
			suma_b += b % 10;
			b = b / 10;
		}
		while (c != 0) {
			suma_c += c % 10;
			c = c / 10;
		}
		if (suma_a + suma_b + suma_c==35) {
			licznik_35 += 1;
		}
		if (suma_a + suma_b + suma_c > max) {
			max = suma_a + suma_b + suma_c;
		}
	}
	cout << licznik_35 << endl;
	cout << max << endl;
	//cout << licznik << endl;

	
}
