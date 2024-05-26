#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n, a, b, jedynka_bizaca = 0, j_index = 0, zero_bizaca=0, z_j_index=0;
	cin >> n;
	vector<int> l;
	vector<int> l1;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		l.push_back(a);
	}
	for (int j = 1; j <= n; j++) {
		cin >> b;
		l1.push_back(b);

	}
	for (int k = 0; k < n; k++) {
		if (l1[k] == 1) {
			jedynka_bizaca = l[k];
			j_index = k;
			k = n + 1;
			//k = k + 1;
		}
	}
	for (int k = j_index; k < n; k++) {
		if (l1[k] == 1) {
			jedynka_bizaca = l[k];
			j_index = k;
			//k = k + 1;
		}
		if (jedynka_bizaca > l[k]) {
			l[k] = -1;

		}
		else {
			l[j_index] = -1;

		}
	}
	for (int k = l.size()-1; k >= 1; k--) {
		if (l1[k] == 0) {
		    zero_bizaca = l[k];
			z_j_index = k;
			//cout << z_j_index;
			k = l.size()-(l.size()+5);
			//k = k + 1;
		}
	}
	for (int k = z_j_index; k >0; k--) {
		if (l1[k] == 0) {
			zero_bizaca = l[k];
			z_j_index = k;
			//k = k + 1;
		}
		if (jedynka_bizaca > l[k]) {
			l[k] = -1;

		}
		else {
			l[j_index] = -1;

		}
	}
	for (int w = 0; w < n; w++) {
		cout << l[w];
	}



}