

#include <iostream>
using namespace std;
#include <vector>
int main()
{
	int n,a,suma=0;
	vector<int>l;
	vector<int>l1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		l.push_back(a);
	}
	for (int j = 0; j <l.size() ; j++) {
		for (int k = 0; k < l.size(); k=k+j) {
			suma = suma + l[k];
		}
		l1.push_back(suma);
		suma = 0;
	}
	cout<<max_element(l1.begin(), l1.end());


   
}
