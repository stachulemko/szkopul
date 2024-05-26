// tasma.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,k,max=0,tmp=0,l_max=0,ll=0,dz=0;
	cin >> n;
	vector<int>l;
	for (int i = 1; i <= n; i++) {
		cin >> k;
		l.push_back(k);

	}
	for (int j = 0; j < n; j++) {
		for (int k = 0; k < n; k++) {
			if (l[k] == l[j]) {
				tmp += 1;
			}
		}
		if (tmp >= max) {
			max = tmp;
		}
		tmp = 0;
		
	}
	for (int w = 0; w < n; w++) {
		if (l[w] == max) {
			l_max += 1;
		}
		else{
			ll += 1;
		}
		//ll += 1;
		

		}
	    if (l_max > ll) {
			dz += 1;
			l_max = 0;
			ll = 0;
		//w = w + 1;


	}
	cout << dz;
	


}