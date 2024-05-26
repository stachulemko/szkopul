#include <iostream>	
using namespace std;

int main()
{
	int n, a;
	cin >> n;
	int* tab = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a;
		tab[i] = a;
	}
	for(int j = n-1; j >= 0; j=j-1)
	{
		cout << tab[j];
	}
	


}