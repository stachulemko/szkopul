#include <vector>
#include <iostream>
using namespace std;
vector<string>Lotnisko(string ustawienie) {
	vector<string>lotnisko;
	string tmp = "";
	for (int i = 0; i < ustawienie.size(); i++) {
		if (ustawienie[i] == 'X') {
			lotnisko.push_back(tmp);
			tmp.clear();
		}
		else {
			tmp += ustawienie[i];
		}
		

	}
	return lotnisko;
}
int main()
{
vector<string>main;
string ustawienie;
int minimalna_ilosc_pasow;
int ilosc>>minimalna_ilosc_pasow;
cin >> ilosc >> minimalna_ilosc_pasow;
for (int i = 0; i < ilosc; i++) {
	cin>>ustawienie;
	main.push_back(Lotnisko(ustawienie));
	
}

}

