
#include <iostream>
using namespace std;
#include <string>
#include <vector>
int main()	
{
	int n,flaga=false;
	char a;
	cin >>n;
	vector<int> l;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		cout << "wstawiam"<<endl;
		l.push_back(a);

	}
	for (int j = 0; j < n/2; j++) {
		if ((to_string(l[j]) + to_string(l[n - j - 1])) == "()") {
			flaga = true;
		}
		else if ((to_string(l[j]) + to_string(l[n - j-1])) == "{}") {
			flaga = true;


		}
		else if ((to_string(l[j]) + to_string(l[n - j - 1])) == "[]") {
			flaga = true;
		}
		else if (flaga==false){
			cout << "nie poprawny";
			return 0;
		}
		flaga = false;


	}
	cout << "poprawny";




}


