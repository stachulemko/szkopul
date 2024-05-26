
#include <iostream>
using namespace std;
#include <vector>
int main()
{
	int m, n, a, b, licznik1, licznik2, licznik_aktualny1, licznik_aktualny2;
	cin >> m >> n;
	vector<int> l1;
	vector<int> l2;
	licznik1 = 0;
	licznik2 = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		l1.push_back(a);
		licznik1 = licznik1 + a;
	}
	cout << endl;
	for (int j = 1; j <= n; j++) {
		cin >> b;
		l2.push_back(b);
		licznik2 = licznik2 + b;
	}
	//cout<<endl;
	for (int c = 0; c < n; c++) {
		for (int h = 0; h < n; h++) {
			swap(l1[c], l2[h]);
			licznik_aktualny1 = licznik1 - l1[c] + l2[h];
			licznik_aktualny2 = licznik2 - l2[h] + l1[c];
			if (licznik_aktualny1 == licznik_aktualny2) {
				h = n;
				c = n;
				cout << "DA SIE";
				
			}
			else {
				swap(l1[c], l2[h]);
			}

		}
	}
	if (licznik_aktualny1 != licznik_aktualny2) {
		cout << "NIE DA SIE ";
	}


}