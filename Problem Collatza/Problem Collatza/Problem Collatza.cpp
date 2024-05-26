#include <iostream>
using namespace std;

int main() {
    for (int i = 12; i <= 46; i++) {
        int l = 0; 
        int num = i; 
        while (num != 1) {
            if (num % 2 == 0) {
                num = num / 2;
            }
            else {
                num = 3 * num + 1;
            }
            l++;
        }
        cout << "dla " << i << ": " << l + 1 << endl; 
    }
    return 0;
}
