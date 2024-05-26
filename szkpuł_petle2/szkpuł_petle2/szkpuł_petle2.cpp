    

#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int x,y,k,flaga,w;
    cin >> x;
    if (x == 1) {
        cin >> w;
        cout << "UNKNOWN";
    }
    vector<int> lista;
    for (int i = 1; i <= x; i++) {
        cin >> y;
        lista.push_back(y);

    }
    k = lista[0];
    flaga = true;
    for(int j = 1; j < x; j++) {
        if (k < lista[j]) {
            k = lista[j];
            //cout << "UP";
        }
        else;
        flaga = false;
    }
    if (flaga == true) {
        cout << "UP";
    }
    else {
        cout << "DOWN";
    }

    
    


}


