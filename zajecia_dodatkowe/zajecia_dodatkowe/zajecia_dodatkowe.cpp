
#include <iostream>
using namespace std;
int main()
{
	long long int reszta = 5;
	long long int a, b, c,licznik_g=0;
	cin >> a >> b >> c;
	long long int w_a = a;
	long long int  w_b = b;
	while (w_b != 0) {
		int tmp = w_b;
		w_b = w_a % w_b;
		w_a = tmp;
	}
	//cout << w_a;
	//cout << licznik_g;
	long long int  g =(a* b) / w_a;
	long long int w = c / g;
	cout << w;
}

