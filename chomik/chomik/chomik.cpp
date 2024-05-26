#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x, y, w;
    vector<int> v;
    vector<int> wy;


    cin >> x >> y;

    for (int i = 0; i < x; i++) {
        cin >> w;
        v.push_back(w);
    }
    cout << endl;

    for (int j = 0; j < y; j++) {
        int a, b;
        cin >> a >> b;
        int min = v[a-1]; 
        for (int k = a; k <= b-1; k++) {
            if (v[k] < min) {
                min = v[k];
            }
        }
        wy.push_back(min);


        
    }
    for (int l = 0; l <= y-1; l++) {
        cout << wy[l];
    }
  
    

    //return 0;
}
