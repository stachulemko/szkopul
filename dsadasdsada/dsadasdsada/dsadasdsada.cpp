#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;
    vector<int> l1;
    int licznik0 = 0;
    int licznik1 = 0;
    for (int i = 0; i < n.size(); i++) {
        if (n[i] == '1') {
            licznik1--;
            if (licznik0 != 0) {
                l1.push_back(licznik0);
                licznik0 = 0;
            }
        }
        else if (n[i] == '0') {
            licznik0++;
            if (licznik1 != 0) {
                l1.push_back(licznik1);
                licznik1 = 0;
            }
        }
    }

    if (licznik1 != 0)
        l1.push_back(licznik1);
    else if (licznik0 != 0)
        l1.push_back(licznik0);
    int l_pomocniczy = 0;
    for (int i = 0; i < l1.size(); i++) {
        if (l1[i] < 0) {
            l_pomocniczy++;
        }
    }
    //cout << "l_pom" << l_pomocniczy << endl;
    int roznica_tmp = 0;
    int roznica = 0;
    int ujemne_tmp = 0;
    int dodatnie_tmp = 0;
    int min_tmp = l1[0];
    int min_tmp_index = 0;
    for (int j = 0; j < 3; j++) {

        if (l1[j] < 0) {
            ujemne_tmp += l1[j];
        }
        else if (l1[j] > 0) {
            dodatnie_tmp += l1[j];
        }
    }
    cout << "dodatnie_tmp :" << dodatnie_tmp << endl;
    cout << "ujemne_tmp :" << ujemne_tmp << endl;
    //zmiana z j=1 na j=0
    for (int j = 0; j < 3; j++) {
        if (l1[j] < min_tmp) {
            min_tmp = l1[j];
            min_tmp_index = j;
        }
    }
    cout << "min_tmp" << min_tmp << endl;
    cout << "min_tmp_index" << min_tmp_index << endl;
    roznica_tmp = dodatnie_tmp + ujemne_tmp;
    cout << "roznica_tmp" << roznica_tmp << endl;

    //zmiana i
    for (int i = 1; i < l1.size(); i++) {
        if (i + 3 < l1.size()) {
            int dodatnie = 0;
            int ujmene = 0;
            for (int j = i; j < i + 3; j++) {

                if (l1[j] < 0) {
                    ujmene += l1[j];
                }
                else if (l1[j] > 0) {
                    dodatnie += l1[j];
                }
            }
            int min = l1[i];
            int min_index = i;
            //cout << "min_index" << min_index << endl;
            for (int j = i + 1; j < i + 3; j++) {
                if (l1[j] < min) {
                    min = l1[j];
                }
            }
            //cout << "######################" << endl;
            //cout << dodatnie << endl;
            //cout << ujmene << endl;
            //cout << min << endl;
            //cout << "######################" << endl;
            roznica = dodatnie + ujmene;
            cout << "######################" << endl;
            cout <<"roznica_tmp :"<< roznica_tmp << endl;
            cout << "roznica :" << roznica << endl;
            cout << "######################" << endl;
            // cout << "min_tmp_index" << min_tmp_index << endl;
                //cout << "roznica_tmp" << roznica_tmp << endl;
                //cout << "roznica" << roznica << endl;
            if (roznica > roznica_tmp) {
                //cout << "dadasdadsadasasdasd" << endl;
                roznica_tmp = roznica;
                min_tmp = min;
                min_tmp_index = min_index;
                cout << "roznica_tmp" << roznica_tmp << endl;
                cout << "min_tmp" << min_tmp << endl;
                cout << "min_tmp_index" << min_tmp_index << endl;

                // cout << "min_tmp_index" << min_tmp_index << endl;
            }


        }
        //cout << "^^^^^^^^^^^^^^^^^^^^^^^" << endl;
        cout << min_tmp << endl;
        cout <<"min_tmp" << min_tmp_index << endl;
        //cout << "^^^^^^^^^^^^^^^^^^^^^^^" << endl;
        l1.erase(l1.begin() + min_tmp_index);
        cout << "------------------------" << endl;
        for (int i = 0; i < l1.size(); i++) {
            cout << l1[i] << endl;
        }
        cout << "------------------------" << endl;
        l_pomocniczy--;
    }
    


    //cout << "asdasdasdasda" << endl;
    for (int i = 0; i < l1.size(); i++) {
        cout << l1[i] << ' ';
    }
}


