#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k, a, b, s1 = 0, s2 = 0, i1 = -1, i2 = -1, max1 = 0, max2 = 0;
    vector<int> l1;
    vector<int> l2;

    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        cin >> a;
        l1.push_back(a);
        s1++;

    }

    for (int j = 1; j <= k; j++) {
        cin >> b;
        l2.push_back(b);
        s2++;
    }

    while(i1==0 and i2==0){
        if (s1 == s2) {
            //cout << "rowne " << i1 << " " << i2 << endl;
            max1 = i1; 
            max2 = i2;
            if (i1 < n-1)
                i1--;
            else
                break;
            if (i2 < k-1)
                i2--;
            else
                break;
            s1 = s1 - l1[i1];
            s2 = s2 - l2[i2];
        }
        else if (s1 > s2) {
            //cout << "s1 wieksze" << endl;
            if (i2 < k-1)
                i2--;
            else
                break;
            s2 = s2 - l2[i2];

        }
        else {
            //cout << "s2 wieksze" << endl;
            if (i1 < n-1)
                i1--;
            else
                break;
            s1 = s1 - l1[i1];
        }
        //cout << "s1 " << s1 << "s2 " << s2 << endl;

        
    }
    cout << (max1+max2);
}
