#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;

int main() {
    string ciag;
    getline(cin, ciag);
    vector<int>l;
    vector<int>l1;

    for (int i = 0; i < ciag.size();) {
        char current_char = ciag[i];
        int number_of = count(ciag.begin(), ciag.end(), current_char);
        //cout << number_of << current_char << endl;
        l.push_back(number_of);
        ciag.erase(remove(ciag.begin(), ciag.end(), current_char), ciag.end());

        
        if (number_of == 1) {
            ++i;
        }
    }
    
    int podzielne_2 = 0;
    int podzielne_3 = 0;
    for (int j = 0; j < l.size(); j++) {
        if (l[j] % 2 == 0 ) {
            podzielne_2 = podzielne_2 + l[j];
            
        }
        else if (l[j] % 3 == 0 ) {
            podzielne_3 = podzielne_3 + 3;
        }
        
    }
    //cout << "-------------------" << endl;
    int two_but_three = podzielne_2 / 3;
    int three_but_two = podzielne_3 / 2;
    podzielne_2 = podzielne_2/2;
    podzielne_3 = podzielne_3 / 3;
 
    //cout << podzielne_2/2 << endl;
    //cout << podzielne_3/3 << endl;
    int max = 0;
    if (podzielne_2 > podzielne_3) {
        max= podzielne_2 - (podzielne_2 - podzielne_3);

    }
    else if (podzielne_3 > podzielne_2) {
        max =podzielne_3 - (podzielne_3 - podzielne_2);
    }
    else if (podzielne_3 == podzielne_3) {
       max= podzielne_3 - (podzielne_3 - podzielne_2);
    }
    int max_tmp = 0;
    if (two_but_three > three_but_two) {
        max_tmp = two_but_three - (two_but_three - three_but_two);
        if (max_tmp > max) {
            max = max_tmp;
        }
    }
    else if (two_but_three < three_but_two) {
        max_tmp = three_but_two - (three_but_two - two_but_three);
        if (max_tmp > max) {
            max = max_tmp;
        }
    }
    else if (two_but_three==three_but_two) {
        max_tmp = two_but_three;
        if (max_tmp > max) {
            max = max_tmp;
        }
    }
    cout << max << endl;
 

    

    return 0;
}
