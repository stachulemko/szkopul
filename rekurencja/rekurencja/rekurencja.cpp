#include <iostream>
using namespace std;

int l(int i) {
    if (i == 1) return 1;
    return l(i + 1);
}

int main() {
    int i = 10;
    return 0;
}
