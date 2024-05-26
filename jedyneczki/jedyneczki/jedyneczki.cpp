
#include <iostream>
using namespace std;
void sprawdzanie_poczatku_i_konca(string s)
{
	int ilosc_jedynek_poczatek = 0;
	int ilosc_zer_poczatek = 0;
	int ilosc_jedynek_koniec = 0;
	int ilosc_zer_koniec = 0;
	int licznik_poczatek = 0;
	if (s[0] == '1') {
		ilosc_jedynek_poczatek++;
		
		while (s[licznik_poczatek] == '1') {
		    ilosc_jedynek_poczatek++;
			licznik_poczatek++;
		}
		while (s[licznik_poczatek] == '0') {
			ilosc_zer_koniec++;
			licznik_poczatek++;
		}
	}
	int licznik_koniec = s.size() - 1;
	if (s[s.size() - 1] == '1') {
		ilosc_jedynek_koniec++;
		while (s[licznik_koniec] == '1') {
			ilosc_jedynek_koniec++;
			licznik_koniec--;
		}
		while (s[licznik_koniec] == '0') {
			ilosc_zer_koniec++;
			licznik_koniec--;
		}
	}
	cout<<ilosc_jedynek_poczatek<<" "<<ilosc_zer_poczatek<<endl;
	cout << ilosc_jedynek_koniec << " " << ilosc_zer_koniec << endl;
	cout<<licznik_poczatek<<" "<<licznik_koniec<<endl;
}
int main()
{
	string s;
	cin >> s;
	sprawdzanie_poczatku_i_konca(s);
}
