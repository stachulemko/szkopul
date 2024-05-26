#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n, a, b;
	cin >> n;
	for (int z = 1; z <= n; z++) {
		cin >> a >> b;
		vector<int> l_1;
		vector<int> l_2;
		for (int i = 2; i <= a / 2 or i == a; i++) {
			if (a % i == 0) {
				for (int k = 2; k <= i / 2; k++) {
					if (a % k == 0) {
						break;
					}
				}
				l_1.push_back(i);
			}
		}
		for (int k = 2; k <= a / 2; k++) {
			if (a % k == 0) {
				break;
			}
		}
		l_1.push_back(a);

		for (int i = 2; i <= b / 2; i++) {
			if (b % i == 0) {
				for (int k = 2; k <= i / 2; k++) {
					if (b % k == 0) {
						break;
					}
				}
				l_2.push_back(i);
			}
		}
		for (int k = 2; k <= b / 2; k++) {
			if (b % k == 0) {
				break;
			}
		}
		l_2.push_back(b);

		int licznik = 0;
		for (int i = 0; i < l_1.size(); i++) {
			for (int j = 0; j < l_2.size(); j++) {
				if (l_1[i] == l_2[j]) {
					licznik++;
				}
			}
		}
		if (licznik == 0) {
			cout << "NIE" << endl;
		}
		else {
			cout << "TAK" << endl;
		}
	}
	return 0;
}
