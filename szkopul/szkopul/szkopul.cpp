

#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    int a, b;
    vector<int>l;
    vector<int>l1;
    cin >> a;
    cin >> b;
    for (int i = 0; i < b; i++) {
        l1.push_back(0);
    }
    for (int i = 1; i <= a; i++) {
        //int j = 1;
        for (int j = 0; j < b; j = j + i) {
            l1[j ] = l1[j] + 1;
        }
    }
    for (int i = 0; i < l1.size(); i++) {
        cout << l1[i]<<' ';
    }
    

    
}


