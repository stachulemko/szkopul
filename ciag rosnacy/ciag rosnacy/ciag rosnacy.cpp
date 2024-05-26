#include <iostream>
using namespace std;

int main() {
    int n, a, max_poz = 0, max_l = 0, tmp_l = 1; // tmp_l = 1 na początku, ponieważ pojedynczy element jest niemalejącym ciągiem
    cin >> n;
    int* l = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a;
        l[i] = a;
    }
    for (int j = 0; j < n - 1; j++) {
        if (l[j] <= l[j + 1]) { // Zmiana warunku na "<=" aby znaleźć niemalejący ciąg
            tmp_l++;
        }
        else {
            if (tmp_l > max_l) {
                max_l = tmp_l;
                max_poz = j; // Poprawka: dodanie średnika
            }
            tmp_l = 1; // Zresetuj tmp_l do 1, ponieważ pojedynczy element jest niemalejącym ciągiem
        }
    }
    if (tmp_l > max_l) {
        max_l = tmp_l;
        max_poz = n - 1; // Poprawka: zaktualizowanie max_poz na ostatni element w przypadku gdy najdłuższy niemalejący ciąg jest na końcu
    }
    for (int h = max_poz - max_l; h < max_poz; h++) { // Poprawka: zmiana warunku pętli
        cout << l[h] << " ";
    }
    delete[] l;
    return 0;
}
