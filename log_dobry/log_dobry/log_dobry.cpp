#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
void tylko_dla_jestem(vector<string>& imiona_rozmozwocow_wazne,
    vector<string>& imiona_o_kim,
    vector<string>& o_kim,
    vector<string>& wyp,
    vector<string>& imiona_rozmozwocow) {
    vector<vector<int>> tablica_decyzyjna;

    for (int j = 0; j < imiona_rozmozwocow_wazne.size(); j++) {
        vector<int>tab_pojedycnza = { 0,0,0,0,0,0,0 };
        string tmp_imie= imiona_rozmozwocow_wazne[j];
        for (int i = 0; i < o_kim.size(); i++) {
            cout << "i:" << i << endl;
            cout <<"imiona rozmowcow: " << imiona_rozmozwocow_wazne[j] << endl;
            if (o_kim[i] == "Jestem" and imiona_rozmozwocow_wazne[i] == tmp_imie) {
                cout << "imiona_rozmowcow" << imiona_rozmozwocow_wazne[i] << imiona_rozmozwocow_wazne[j] << endl;
                cout << wyp[i] << endl;
                //tab_pojedycnza indexy co oznaczaja : 0 - imie_mowicego 1-imie_o_kim 2-liczba_jego_wypowiedzi 3-czy_moze_byc_krasnalem 4 -czy_moze_byc_orgiem 5 -czy_moze_byc_elfem_w dzien 6 -czy_moze_byc_elfem_w nocy
                if (wyp[i] == "krasnoludem") {
                    tab_pojedycnza[2] += 1;
                    tab_pojedycnza[3] += 1;
                    tab_pojedycnza[4] += 1;
                    tab_pojedycnza[5] += 0;
                    tab_pojedycnza[6] += 1;
                }
                else if (wyp[i] == "orkiem") {
                    tab_pojedycnza[2] += 1;
                    tab_pojedycnza[3] += 0;
                    tab_pojedycnza[4] += 0;
                    tab_pojedycnza[5] += 0;
                    tab_pojedycnza[6] += 1;
                }
                else if (wyp[i] == "elfem") {
                    tab_pojedycnza[2] += 1;
                    tab_pojedycnza[3] += 0;
                    tab_pojedycnza[4] += 1;
                    tab_pojedycnza[5] += 1;
                    tab_pojedycnza[6] += 0;
                }
                
                cout<< "#########################" << endl;
                for (int i = 0; i < o_kim.size(); i++) {
                    cout<<o_kim[i]<<endl;
                }
                cout<<"============================"<<endl;
                for (int j = 0; j < imiona_rozmozwocow_wazne.size(); j++) {
					cout<<imiona_rozmozwocow_wazne[j]<<endl;
				}
                cout << "#########################" << endl;


            }
            

            //imiona_rozmozwocow_wazne.erase(imiona_rozmozwocow_wazne.begin() + i);

        }
        cout << "::::::::::::::::::::::" << endl;
        for (int i = 0; i < tab_pojedycnza.size(); i++) {
            cout << tab_pojedycnza[i];
        }
        cout << "::::::::::::::::::::::" << endl;

        tablica_decyzyjna.push_back(tab_pojedycnza);


    }
    int flaga = 0;
    cout << "====================" << endl;
    for (int i = 0; i < tablica_decyzyjna.size(); i++) {
        cout << "|||||";
        for (int j = 0; j < tablica_decyzyjna[i].size(); j++) {
            cout << tablica_decyzyjna[i][j] << " ";
        }
    }
    cout << "====================" << endl;
    for (int i = 0; i < tablica_decyzyjna.size(); i++) {
        int max = tablica_decyzyjna[i][3];
        int max_index = 3;
        for (int j = 4; j < tablica_decyzyjna[i].size(); j++) {
            if (tablica_decyzyjna[i][j] > max) {
                max = tablica_decyzyjna[i][j];
                max_index = j;
            }

        }
        int liczba_max = 0;
        for (int k = 4; k < tablica_decyzyjna[i].size(); k++) {
            if (tablica_decyzyjna[i][k] == max) {
                liczba_max += 1;
            }
        }
        if (liczba_max <= 1) {
            if (max_index == 3) {
                cout << imiona_rozmozwocow[i] << " " << "jest krasnalem" << endl;
            }
            else if (max_index == 4) {
                cout << imiona_rozmozwocow[i] << " " << "jest orkiem" << endl;
            }
            else if (max_index == 5 or max_index == 6) {
                cout << imiona_rozmozwocow[i] << " " << "jest elfem" << endl;
            }
            flaga++;



        }

    }
    if (flaga == 0) {
        cout << "Nic nie wiadomo!" << endl;
    }


}

int main() {
    int liczba_wypowiedi;
    int liczba_rozmowcow;
    vector<string>imiona_rozmozwocow;
    vector<string>imiona_rozmozwocow_wazne;
    vector<string>imiona_o_kim;
    vector<string>o_kim;
    vector<string>wyp;
    string imiona;

    cin >> liczba_rozmowcow >> liczba_wypowiedi;
    for (int i = 0; i < liczba_rozmowcow; i++) {
        cin >> imiona;
        imiona_rozmozwocow.push_back(imiona);
    }
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    string line;

    for (int i = 0; i < liczba_wypowiedi; i++) {
        getline(cin, line);
        string imie = line.substr(0, line.find(':'));
        //cout << line.find(':') + 2<<endl;
        int size = line.size();
        line = line.substr(line.find(':') + 2);
        //cout << line.find(' ') << endl;
        string dwuznaczna_wyp = line.substr(line.find(':') + 1, line.find(' '));
        cout << line << endl;
        imiona_rozmozwocow_wazne.push_back(imie);
        if (dwuznaczna_wyp == "Jestem") {

            imiona_o_kim.push_back("00");
            o_kim.push_back(dwuznaczna_wyp);
            wyp.push_back(line.substr(line.find(' ') + 1, line.find('.') - line.find(' ') - 1));
        }
        else {
            line = line.substr(line.find(' ') + 1);
            imiona_o_kim.push_back(dwuznaczna_wyp);
            o_kim.push_back(line.substr(0, line.find(' ')));
            wyp.push_back(line.substr(line.find(' ') + 1, line.find('.') - line.find(' ') - 1));
        }

        //cout<<line.find(' ')<<endl;
        //cout<<line.find('.')<<endl;


    }
    cout << "-----------------" << endl;
    for (int i = 0; i < imiona_rozmozwocow_wazne.size(); i++) {
        cout << imiona_rozmozwocow_wazne[i] << endl;
    }
    cout << "-----------------" << endl;
    for (int i = 0; i < imiona_rozmozwocow.size(); i++) {
        cout << imiona_rozmozwocow[i] << endl;
    }
    cout << "-----------------" << endl;
    for (int i = 0; i < imiona_o_kim.size(); i++) {
        cout << imiona_o_kim[i] << endl;
    }
    cout << "-----------------" << endl;
    for (int i = 0; i < o_kim.size(); i++) {
        cout << o_kim[i] << endl;
    }
    cout << "-----------------" << endl;
    for (int i = 0; i < wyp.size(); i++) {
        cout << wyp[i] << endl;
    }
    cout << "-----------------" << endl;

    cout << "0000000000000000000000" << endl;
    tylko_dla_jestem(imiona_rozmozwocow_wazne, imiona_o_kim, o_kim, wyp,imiona_rozmozwocow);
    cout << "0000000000000000000000" << endl;
    cout << "-----------------" << endl;

}
