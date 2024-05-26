

#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,l1=0,l2=0,l3=0,tmp=0;
	string a, b;
	vector<string>l;
	vector<char>stos;
	cin >> n;
	cin >> a;
	//l.push_back(a);
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == '{' ) {
			stos.push_back(a[i]);
			

		}
		else if (a[i] == '(') {
			stos.push_back(a[i]);
			
		}
		else if (a[i] == '[') {
			stos.push_back(a[i]);


		}
		else if (a[i] != '(' and a[i] != '[' and a[i] != '{') {
			if (!stos.empty()) {
				char x= stos[stos.size() - 1];
				string j = "";
				j = j + x;
				j = j + a[i];
				cout << j<<endl;
				
				
				if (j == "{}" or j == "[]" or j == "()") {
					stos.pop_back();

				}
				else {
					cout << "nie da sie "<<x;

					cout << j << endl;
					return 0;
				}

			}
			else {
				cout << "nie da sie ";
				cout << i;
				//cout << j << endl;
				return 0;
			}
			
		}
	}
	
	cout << "da sie ";
	
	

}
