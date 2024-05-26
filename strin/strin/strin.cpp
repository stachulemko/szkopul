#include <iostream>
#include <string>
using namespace std;

int main() {
    string a = "napissdasdasa dupa kupa";
    string b = "dupa";

    // Znajdź pozycję ciągu 'b' w ciągu 'a' i utwórz nowy string od tej pozycji do końca
    string wynik = a.substr(a.find(b));

    // Wyświetl wynik
    cout << wynik;

    return 0;
}
