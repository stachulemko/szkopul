#include <iostream>
#include <list>
#include <vector>


using namespace std;



int main() {
	int m, k, s, p1, p2;
	vector<int>lista;
	vector<int>lista2;
	cin >> m;
	cin >> k;
	//cout << "sadaasdada";
	lista = { 0,2,3,7,5,1,3,9 };
	//lista2 = ( 7, 0 );
	s = 0;
	for (int i = 0; i <= 7; ++i)
	{
		s = s + lista[i];
		lista2.push_back(s);
	}
	p1 = lista2[k + 1] - lista[(k + 1) - m];
	//p2 = lista2[(k - 1) + m] - lista[(k + 1)];
	cout << p1 <<endl;
	//p3 = lista2[k + m];
	//p4 = lista2[k - m];

	//if ((m + m / 2) % 2 != 0)
	//{
		//p6 = lista2[k + m / 2] + lista[k - m / 2];

	//}

     









}