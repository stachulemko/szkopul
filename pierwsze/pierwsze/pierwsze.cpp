

#include <iostream>
using namespace std;
int main()
{
	int x,p;
	cin >> x;
	if (x == 1) {
		cout << "NIE";
	}
	p = x / 2;
	int flaga = true;
	for (int i = 2; i <= p; i++) {
		if (x % i == 0){
			flaga = false;
			cout << "NIE";
			return 0;

		}

	}
	if (flaga == true) {
		cout << "TAK";
	}
	return 0;

}

