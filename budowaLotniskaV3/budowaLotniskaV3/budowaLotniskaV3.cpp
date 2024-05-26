#include <vector>
#include <iostream>
using namespace std;

int max(vector<vector<string>> lotniska) {
    int max = lotniska[0][0].size();
    for (int k = 1; k < lotniska[0].size(); k++) {
        if (lotniska[0][k].size() > max) {
            max = lotniska[0][k].size();
        }
    }
    for (int i = 1; i < lotniska.size(); i++) {
        //cout << "----------------" << endl;
        for (int j = 0; j < lotniska[i].size(); j++) {
            if (lotniska[i][j].size() > max) {
                max = lotniska[i][j].size();
            }
        }

    }
    return max;
}
int program(vector<vector<string>> lotniska, int liczba) {

    int licznik = 0;
    for (int i = 0; i < lotniska.size(); i++) {
        for (int j = 0; j < lotniska[i].size(); j++) {
            if (lotniska[i][j].size() >= liczba) {
                licznik++;
            }
        }
    }
    return licznik;


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

int main() {
    vector<vector<int>> l;
    vector<vector<string>> lotniska;
    string ustawienie;
    int minimalna_ilosc_pasow;
    int ilosc;
    cin >> ilosc >> minimalna_ilosc_pasow;

    for (int i = 0; i < ilosc; i++) {
        cin >> ustawienie;
        lotniska.push_back(Lotnisko(ustawienie));
    }
    vector<int>pom;
    for (int i = 1 ; i <= max(lotniska)-1; i++)
    {
        if (program(lotniska, i) >= minimalna_ilosc_pasow) {
            //pom.push_back(program(lotniska, i));
            pom.push_back(i);
        }
        
	}
    //cout << "++++++++++++++++++++++" << endl;
    /*
    for (int i = 0; i < pom.size(); i++) {
        cout << pom[i] << endl;
    }
    */
    int max = pom[0];
    for (int k = 1; k < pom.size(); k++)
    {
        if (pom[k] > max)
        {
			max=pom[k];
		}
	}
    cout<<max<<endl;
    //cout << "++++++++++++++++++++++" << endl;
    //cout<<program(lotniska,1)<<endl;
    //cout<<countChar("*",'*')<<endl;


    return 0;
}
