#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{

	string ciag;
	getline(cin, ciag);
	//cout << ciag;
	int O = 0;
	int I = 0;
	int J = 0;
	int E = 0;
	for (int i = 0; i < ciag.size(); i++) {
		if (ciag[i] == 'O') {
			O++;


		}
		else if (ciag[i] == 'I') {
			I++;
		}
		else if (ciag[i] == 'J') {
			J++;
		}
		else if (ciag[i] == 'E') {
			E++;
		}
	}

	string test;
	if (O >= 1 and I >= 1 and J >= 1) {
		//O--;
		//I--;
		//J--;
		test = test + 'T';


	}
	
	else {
		test = test + 'N';
	}
	//cout << test << endl;
	if (O >= 1 and I >= 1 and J >= 1 and E>=1) {
		//O--;
		//I--;
		//J--;
		test = test + 'T';


	}
	else {
		test = test + 'N';
	}
	if (I >= 2 and O>=1) {
		//O--;
		//I--;
		//J--;
		test = test + 'T';


	}
	else {
		test = test + 'N';
	}
	cout << test << endl;
	return 0;
}
 