
#include <iostream>
#include <string>
using namespace std;
int main()
{
	long long int n;
	cin >> n;
	string ciag;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	getline(cin, ciag);
	int licznik = 0;
	//cout << ciag.size() << endl;
	for (int i = 0; i < ciag.size(); i++) {
		if (int(ciag[i]) >= 48 and int(ciag[i]) <= 57) {
			cout << stoi(ciag.substr(i, 1)) << endl;
			int tmp = stoi(ciag.substr(i, 1));
			//cout << tmp << endl;
			licznik = licznik + tmp ;
		}
	}
	cout << licznik;
}	

