#include <iostream>
#include <string>
using namespace std;

int main()
{
    int roznica_char,roznica_int;
    string a;
    string b;
    cin >> a;
    cin >> b;
    char a1 = a[0]; 
    char a2 = b[0];
    //cout << a1 << a2<<endl;
    int l1 = stoi(a.substr(1, 1));
    int l2 = stoi(b.substr(1, 1));
    //cout<<l<<l2<<endl;
    roznica_int = l2 - l1;

    int ascii1 = int(a1);
    int ascii2 = int(a2);
    roznica_char = ascii2 - ascii1;
   // cout << "roznica int: " << roznica_int << endl;
    //cout <<"roznica char: " << roznica_char << endl;
    int licznik = 0;

    string path="";
    while(l1!=l2 or ascii1!=ascii2) {
        licznik++;
        if (l1 > l2) {
            l1--;
            path = path + 'S';
        }
        else if (l1 < l2) {
            l1++;
            path = path + 'N';
         
        }
        if (ascii1 > ascii2) {
            ascii1--;
            path = path + 'W';
        }
        else if(ascii1<ascii2) {
            ascii1++;   
            path = path + 'E';
        }
        
        path = path + ' ';
        


    }
    cout << licznik << endl;
    cout << path << endl;

}
