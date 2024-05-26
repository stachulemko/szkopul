// skarpetki.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string ciag;
	int lb = 0;
	int lc = 0;
	getline(cin, ciag);
	for (int i = 0; i < ciag.size(); i++) {
		if (ciag[i] == 'B') {
			lb++;
		}
		else {
			lc++;
		}
	}
	cout << lb / 2 + lc / 2 << endl;
   
}

