
#include <iostream>
#include <string>

using namespace std;
	
int main()
{
	long long int n;
	cin >> n;

	int licznik = 0;
	int reszta;
	int tmp = n;

	while (n != 0) {

		reszta = n % 10;
		licznik += reszta;

		//cout << reszta<<endl;
		n = n / 10;
		//cout << n << endl;

	}
	if (licznik % 9 == 0) {
		cout << tmp;
		return 0;
	}
	else {
		string li = to_string(tmp);
		string li2 = to_string(tmp);
		cout << li2 << endl;
		//cout << li2.size()<<endl;
		//int liczba = tmp;
		for (int i = 0; i < li2.size()-1; i++) {
			//cout << li2[i];
			for (int j = 1; j <= 9; j++) {
				li2[i] = j;
				cout << li2 << endl;
				li2 = li;
			}
		}
	}
}

