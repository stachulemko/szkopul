
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int a, b, c, d;
	vector<int>l1;
	vector<int>l2;
	vector<int>l3;
	vector<int>l4;
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		cin >> c;
		l2.push_back(c);
	}
	for (int i = 0; i < a; i++) {
		cin >> d;
		l1.push_back(d);
	}
	for (int i = 0; i < l2.size(); i++) {
		if (i + 1 < l2.size()) {
			if (l2[i] > l2[i + 1]) {
				if (l2[i] - l2[i + 1] < b) {
					l3.push_back(i);
				}
			}
			else {
				if (l2[i + 1] - l2[i] < b) {
					l3.push_back(i);
				}

			}



		}
		

	}
	if (l2[l2.size()-2] > l2[l2.size()-1]) {
		if (l2[l2.size()-2] - l2[l2.size()-1] < b) {
			l3.push_back(l2.size()-1);
		}
	}
	else {
		if (l2[l2.size()-1] - l2[l2.size()-2] < b) {
			l3.push_back(l2.size()-1);	
		}

	}
	for (int i = 0; i < l3.size(); i++) {
		if (i + 1 < l3.size()) {
			if (l2[l3[i]] > l2[l3[i + 1]]) {
				l4.push_back(l3[i]);
			}
			else {
				l4.push_back(l3[i]);
				}
		}


	}
	cout << "##################################" << endl;
	cout << "##################################" << endl;
	cout << "##################################" << endl;
	for (int i = 0; i < l3.size(); i++) {
		cout << l3[i] << endl;
	}
	cout << "##################################" << endl;
	cout << "##################################" << endl;
	cout << "##################################" << endl;

}
