#include <map>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char a;
    int b;
    map<char, int>l;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        l[a] +=b;
    }
    cout << "-----" << endl;
    for (auto i : l) {
        cout << i.first << " " << i.second << endl;
    }
}