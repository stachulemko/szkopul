
#include <iostream>
using namespace std;
int l(int n) {
    int i;
    if(n<3) {
        return 1;
    }
    else {
        return l(n - 2) + l(n - 1);
    }

}
int main()
{
    int n;
    cin >> n;
    cout<<
        l(n);

}
