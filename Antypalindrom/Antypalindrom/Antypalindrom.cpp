// Antypalindrom.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <algorithm> 
#include<iostream>
#include<string>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string l;
	cin >> l;
	int licznik = 0;
	for (int i = 0; i < l.size()+1; i++) {
		for (int j = 0; j < l.size()+1; j++) {
			string sub = l.substr(i, j);
			size_t pos = l.find(sub);

			while (pos != string::npos) {
				pos = l.find(sub, pos + 1); 
				string l1 = l.erase(pos, sub.size());
				for (int i = 0; i < l1.size(); i++) {
					for (int j = 0; j < l1.size(); j++) {
						if (l1[i, j] == reverse(l1.begin(), l1.end()));
					}
				}

			}
		}
	}
}

