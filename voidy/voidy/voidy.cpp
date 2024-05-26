#include <iostream>

using namespace std;

bool parzystosc(int n);

int main() {

	cout << parzystosc(40);
}

bool parzystosc(int n)
{
	while (n != 0) {
		int cyfra = n % 10;
		if (cyfra == 0) {
			return true;
		}


	}
	return false;
}