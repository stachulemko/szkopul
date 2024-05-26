

#include <iostream>
using namespace std;
int main()
{
	char b;
	int licznik=0,a;
	string g = "";
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b;
		if (b >= 48 and b <= 57) {
			if (licznik != 5) {
				licznik++;
				g = g + b;
			}
			else {
				cout << g;
				return 0;
			}
		}
		    
		

		

	}
	return 0;

}