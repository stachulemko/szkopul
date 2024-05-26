#include <iostream>
#include <string>

std::string sprawdzanie_pierwszego_i_ostatniego_kawałka(const std::string& n, int& globalna_liczba_jedynke, int& globalna_liczba_zer) {
    std::string result = n;  // Tworzymy kopię łańcucha, aby uniknąć zmiany oryginalnego łańcucha
    if (result[0] == '1') {
        int liczba_jedynek_tmp = 0;
        int liczba_zer_tmp = 0;
        int licznik = 0;
        while (result[licznik] == '1') {
            liczba_jedynek_tmp++;
            std::cout << result[licznik] << std::endl;
            licznik++;
        }
        while (result[licznik] == '0') {
            liczba_zer_tmp++;
            std::cout << result[licznik] << std::endl;
            licznik++;
        }
        if (liczba_jedynek_tmp >= liczba_zer_tmp) {
            globalna_liczba_jedynke += liczba_jedynek_tmp;
            result.erase(result.begin(), result.begin() + licznik);  // Usuń kawałek od początku do momentu
        }
        else {
            globalna_liczba_zer += liczba_zer_tmp;
            result.erase(result.begin(), result.begin() + licznik);  // Usuń kawałek od początku do momentu
        }
    }
    return result;
}

int main() {
    std::string n;
    std::cin >> n;
    int globalna_liczba_jedynke = 0;
    int globalna_liczba_zer = 0;

    std::string result = sprawdzanie_pierwszego_i_ostatniego_kawałka(n, globalna_liczba_jedynke, globalna_liczba_zer);

    std::cout << "Globalna liczba jedynke: " << globalna_liczba_jedynke << std::endl;
    std::cout << "Globalna liczba zer: " << globalna_liczba_zer << std::endl;

    return 0;
}
