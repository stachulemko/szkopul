// naiwasy.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <stack>
using namespace std;
int main()
{   
    cout << " test" << endl;
    /*
    int n;
    string line;
    stack <char> s2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> line;
        for (int g = 0; g < line.size()-1; g++) {
            if (line[g] == '(' or line[g] == '{' or line[g] == '[') {
                s2.push(line[g]);
            }
            else {
                string komb = s2.pop() + k;
                if (komb != "{}" and komb != "[]" and komb != "()") {
                    cout << "nie da sie";
                    return 0;
                }

            }
        }
    }
    cout << "da sie ";
    return 0;
    /
}

