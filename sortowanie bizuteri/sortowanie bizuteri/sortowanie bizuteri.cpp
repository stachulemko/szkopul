#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    string m;
    vector<string> l;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> m;
        l.push_back(m);
    }

    for (int i = 0; i < l.size(); i++) {
        for (int j = i + 1; j < l.size(); j++) {
            if (l[i].size() > l[j].size()) {
                swap(l[i], l[j]);
            }
        }
    }

    for (int i = 0; i < l.size(); i++) {
        for (int j = 0; j < l.size(); j++) {
            if (l[i].size() == l[j].size() and i+1<l.size()) {
                if (int(l[i][j]) > int(l[i + 1][j])) {
                    swap(l[i], l[i + 1]);
                    break;
                }
            }
        }
    }

    for (int i = 0; i < l.size(); i++) {
        cout << l[i] << endl;
    }

    return 0;
}
