
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	string n;
	cin >> n;
	vector<int>l;
	for (int i = 0; i < n.size(); i++) {
		l.push_back(n[i] - '0');
	}
	int p = 0;
	int k = 0;

	int liczba_jedynek = 0;

	int liczba_zer = 0;

	int tmp_jedynek = 0;

	int tmp_zer = 0;

	int licznik = 0;
	int liczba_ruchow = 0;
	if (licznik == 0 and l[licznik] == 1) {
		//cout << "test";
		while (l[licznik] == 1) {
			tmp_jedynek++;
			licznik++;
		}
		
	}
	if (l[licznik] == 0 ) {
		while (l[licznik] == 0) {
			tmp_zer++;
			licznik++;
		}
		
	}
	p = licznik;
	if (tmp_jedynek > tmp_zer) {
		liczba_jedynek = liczba_jedynek + tmp_jedynek;
		liczba_ruchow = liczba_ruchow + tmp_zer;
	}
	else if(tmp_jedynek < tmp_zer){
		liczba_ruchow = liczba_ruchow + tmp_jedynek;
	}
	else if (tmp_jedynek == tmp_zer) {
		liczba_ruchow = liczba_ruchow + tmp_jedynek;
		liczba_jedynek = liczba_jedynek + tmp_jedynek;
	}
	tmp_jedynek = 0;
	tmp_zer = 0;
	licznik = l.size()-1;
	if (licznik == l.size()-1 and l[licznik] == 1) {
		//cout << "test";
		while (l[licznik] == 1) {
			tmp_jedynek++;
			licznik--;
		}

	}
	if (l[licznik] == 0) {
		while (l[licznik] == 0) {
			tmp_zer++;
			licznik--;

		}

	}
	k = licznik;
	if (tmp_jedynek > tmp_zer) {
		liczba_jedynek = liczba_jedynek + tmp_jedynek;
		liczba_ruchow = liczba_ruchow + tmp_zer;
	}
	else if (tmp_jedynek < tmp_zer) {
		liczba_ruchow = liczba_ruchow + tmp_jedynek;
	}
	else if (tmp_jedynek == tmp_zer) {
		liczba_ruchow = liczba_ruchow + tmp_jedynek;
		liczba_jedynek = liczba_jedynek + tmp_jedynek;
	}
	
	//cout << liczba_ruchow<<endl;
	//cout << liczba_jedynek << endl;
	//cout << 'p' << p << endl;
	//cout << 'k' << k << endl;
	tmp_zer = 0;
	tmp_jedynek = 0;
	for (int i = p; i < k; i++) {
		licznik = p;
		while (l[licznik] == 1) {
			tmp_jedynek++;
			licznik++;
		}
		while (l[licznik] == 0) {
			tmp_zer++;
			licznik++;
		}
		while (l[licznik] == 1) {
			tmp_jedynek++;
			licznik++;
		}
		i = licznik;
		if (tmp_jedynek+liczba_jedynek > tmp_zer) {
			liczba_jedynek = liczba_jedynek + tmp_jedynek;
			liczba_ruchow = liczba_ruchow + tmp_zer;
		}
		else if (tmp_jedynek+liczba_jedynek < tmp_zer) {
			liczba_ruchow = liczba_ruchow + tmp_jedynek;
		}
		else if (tmp_jedynek == tmp_zer) {
			liczba_ruchow = liczba_ruchow + tmp_jedynek;
			liczba_jedynek = liczba_jedynek + tmp_jedynek;
		}
		tmp_jedynek = 0;
		tmp_zer = 0;

	}
	cout<< liczba_ruchow << endl;

}

