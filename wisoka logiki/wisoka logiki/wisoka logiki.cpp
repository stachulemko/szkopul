
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a,b;
    string wypowiedzi,imiona;
    cin >> a >> b;
    getline(cin, imiona);
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    for (int i = 1; i <= b; i++)
    {
        getline(cin, wypowiedzi);
        //cout<<obl(line);
    }
}



