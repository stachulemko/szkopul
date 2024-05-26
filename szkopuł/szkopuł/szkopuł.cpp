
using namespace std;
#include <iostream>

int main()
{
	int n,w,k,min;
	cin >> n;
	cin >> w;
	min = w;
	for (int i = 2; i <= n; i++) {
		cin >> k;
		if (min>k){
			min = k;
		}

	}
	cout << min;
}

