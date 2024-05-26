#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    string line;
    cin >> n;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    vector<int>l;
    vector<int>l2;
    for (int i = 0; i < n; i++) {
        int licznik = 0;
        getline(cin, line);
        for (int j = 0; j < line.size(); j++) {
            if (line[j] >= '2' && line[j] <= '9') { // Karty od 2 do 9
                licznik += (line[j] - '0'); // Zamiana char na int przez odjęcie kodu ASCII '0'
            }
            else if (line[j] == 'T' || line[j] == 'J' || line[j] == 'Q' || line[j] == 'K') {
                licznik += 10;
            }
            else if (line[j] == 'A') {
                if (licznik + 11 <= 21) {
                    licznik += 11;
                }
                else {
                    licznik += 1;
                }
            }
        }
        //cout << licznik << endl;
        l.push_back(licznik);
    }
    
   // cout << "-------------------" << endl;
    int max = 0;

    for (int i = 0; i < l.size(); i++) {
        if (l[i]>max and l[i]<=21) {
            max = l[i];
            
        }
    }
    //cout << max << endl;
    
    for (int i = 0; i < l.size(); i++) {
        if (l[i] == max) {
            l2.push_back(i);
        }
    }
    cout << l2.size() << endl;
    for (int i = 0; i < l2.size(); i++) {
        cout << l2[i]+1<<' ';
    }
    //cout << l2.size()<<endl;
    
    
    return 0;
}
