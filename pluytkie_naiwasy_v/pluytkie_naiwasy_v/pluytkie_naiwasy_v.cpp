

#include <iostream>
#include <vector>
using namespace std;
int program(string nawiasy,int zgl) {
	int licznik = 0;
	int przsuwania = 0;
	for (int i = 0; i < nawiasy.size(); i++) {
		//cout << "i=" << i << endl;
		//cout << nawiasy[i] << endl;
		if (nawiasy[i] = '(') {
			//licznik++;		
			if (licznik >= zgl ) {
				//nawiasy[i] = ')';
				//cout << "odejmujemy bo licznik=" << licznik << endl;
				licznik = licznik - 1;
				przsuwania++;
			}
			else {
				licznik++;
			}

		}
		else if (nawiasy[i] == ')') {

			if (licznik<=0) {
				//cout << "dodajemy" << endl;
				//nawiasy[i] = '(';
				licznik = licznik + 1;
				przsuwania++;
			}
			else {
				licznik--;
			}
			
		}
		//cout << licznik << endl;
		//cout << nawiasy[i] << endl;
		//cout << "-----------" << endl;
		
	}
	//cout << nawiasy << endl;
	return przsuwania;
}



int main()
{
	int len;
	int zgl;
	string nawiasy;
	cin >> len >> zgl;
	cin >> nawiasy;
	cout << program(nawiasy, zgl);

}
