

#include <iostream>
#include <vector>
using namespace std;
int liczenieZaglebienia(string nawiasy) {
	int zaglebienie = 0;
	int zaglebienieMax = 0;
	int zaglebeienie_index_max = 0;
	for (int i = 0; i < nawiasy.size(); i++) {
		//cout<<"zaglebienie :" << zaglebienie << endl;
		//cout<<"aglebienieMax :"<< zaglebienieMax << endl;
		if (zaglebienie > zaglebienieMax) {
			zaglebienieMax = zaglebienie;
			zaglebeienie_index_max = i;
		}
		if (nawiasy[i] == '(') {
			zaglebienie++;
		}
		else if (nawiasy[i] == ')') {
			zaglebienie--;
		}
	}
	return zaglebeienie_index_max - 1;
}
string przesuwanie_elelmntow(string nawiasy) {
	int zgl = liczenieZaglebienia(nawiasy);
	string nawiasy2 = nawiasy;
	if (nawiasy2[zgl] == '(') {
		nawiasy2[zgl] = ')';
	}
	else if (nawiasy2[zgl] == ')') {
		nawiasy2[liczenieZaglebienia(nawiasy2)] = '(';
	}
	if (nawiasy2[zgl + 1] == '(') {
		nawiasy2[zgl + 1] = ')';
	}
	else if (nawiasy2[zgl + 1] == ')') {
		nawiasy2[zgl + 1] = '(';
	}
	return nawiasy2;
}
int indexZaglebienia(string nawiasy) {
	string nw = nawiasy;
	int zaglebienie = 0;
	int zaglebienieMax = 0;
	int zaglebeienie_index_max = 0;
	for (int i = 0; i < nw.size(); i++) {
		//cout<<"zaglebienie :" << zaglebienie << endl;
		//cout<<"aglebienieMax :"<< zaglebienieMax << endl;
		if (zaglebienie > zaglebienieMax) {
			zaglebienieMax = zaglebienie;
			zaglebeienie_index_max = i;
		}
		if (nw[i] == '(') {
			zaglebienie++;
		}
		else if (nw[i] == ')') {
			zaglebienie--;
		}
	}
	return zaglebienieMax;
}

int koniec(string nawiasy,int zgl) {
	string naw = nawiasy;	
	int liczba_zagl = indexZaglebienia(nawiasy);
	int l = 0;
	while (liczba_zagl!=zgl) {
		naw=przesuwanie_elelmntow(nawiasy);
		liczba_zagl = indexZaglebienia(naw);
		l += 2;


	}
	return l;
}



int main()
{
	int len;
	int zgl;
	string nawiasy;
	cin >> len >> zgl;
	cin >> nawiasy;
	cout << liczenieZaglebienia(nawiasy) << endl;;
	//cout << przesuwanie_elelmntow(nawiasy) << endl;
	cout << "koniec" << koniec(nawiasy,zgl) << endl;
}
