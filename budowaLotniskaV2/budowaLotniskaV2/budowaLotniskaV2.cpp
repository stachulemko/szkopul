#include <vector>
#include <iostream>
using namespace std;
int countChar(const string& str, char ch) {
    int count = 0;
    for (char c : str) {
        if (c == ch) {
            count++;
        }
    }
    return count;
}
int max(vector<vector<string>> lotniska) {
    int max = lotniska[0][0].size();
    for (int k = 1; k < lotniska[0].size(); k++) {
        if (lotniska[0][k].size() > max) {
            max = lotniska[0][k].size();
        }
    }
    for (int i = 1; i < lotniska.size(); i++) {
        cout << "----------------" << endl;
        for (int j = 0; j < lotniska[i].size(); j++) {
            if (lotniska[i][j].size() > max) {
                max = lotniska[i][j].size();
            }
        }

    }
    return max;
}
int program(vector<vector<string>> lotniska,int liczba) {

    int licznik = 0;
    for (int i = 0; i < lotniska.size(); i++) {
        for (int j = 0; j < lotniska[i].size(); j++) {
            if (countChar(lotniska[i][j],'*')==liczba) {
                licznik++;
            }
        }
    }
    return licznik
    

}
vector<string> Lotnisko(string ustawienie) {
    vector<string> lotnisko;
    string tmp = "";
    for (int i = 0; i < ustawienie.size(); i++) {
        if (ustawienie[i] == 'X') {
            if (!tmp.empty()) {
                lotnisko.push_back(tmp);
                tmp.clear();
            }
        }
        else {
            tmp += ustawienie[i];
        }
    }
    if (!tmp.empty()) {
        lotnisko.push_back(tmp);
    }
    return lotnisko;
}
int cały_program(vector<vector<string>>lotniska,int minimalna_ilosc_pasow) {
    vector<int>najwiekze;
    for (int i = 1; i <= max(lotniska); i++) {
        if (program(lotniska, i) >= minimalna_ilosc_pasow) {
            najwiekze.push_back(i);
		}
    }
    int max = najwiekze[0];
    for (int i = 1; i < najwiekze.size(); i++) {
        if (najwiekze[i] > max) {
            max = najwiekze[i];
        }
    }
    return max;
}
int main() {
    vector<vector<string>> lotniska;
    string ustawienie;
    int minimalna_ilosc_pasow;
    int ilosc;
    cin >> ilosc >> minimalna_ilosc_pasow;

    for (int i = 0; i < ilosc; i++) {
        cin >> ustawienie;
        lotniska.push_back(Lotnisko(ustawienie));
    }
    cout << cały_program(lotniska, minimalna_ilosc_pasow) << endl;
    

    
    

    return 0;
}
