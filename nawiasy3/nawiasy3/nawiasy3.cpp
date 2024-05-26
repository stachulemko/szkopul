#include <iostream>
#include <stack>
using namespace std;

int main() {
    cout << " test" << endl;

    int n;
    string line;
    stack <char> s2;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> line;
        for (int g = 0; g < line.size(); g++) {
            if (line[g] == '(' or line[g] == '{' or line[g] == '[') {
                s2.push(line[g]);
            }
            else {
                if (s2.empty()) {
                    cout << "nie da sie" << endl;
                    break;
                }
                char top_element = s2.top();
                s2.pop();
                string komb = string(1, top_element) +   line[g];
                if (komb != "{}" and komb != "[]" and komb != "()") {
                    cout << "nie da sie" << endl;
                    break;
                }
            }
        }

        if (!s2.empty()) {
            cout << "nie da sie" << endl;
            while (!s2.empty()) s2.pop(); 
        }
        else {
            cout << "da sie " << endl;
        }
    }

    return 0;
}
