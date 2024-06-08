#include <iostream>
#include <vector>
#include <utility>
using namespace std;
// Funkcja do obliczania silni
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Funkcja do obliczania symbolu Newtona
unsigned long long binomial_coefficient(int n, int k) {
    if (k > n) {
        return 0;
    }
    unsigned long long numerator = factorial(n);
    unsigned long long denominator = factorial(k) * factorial(n - k);
    return numerator / denominator;
}

// Funkcja do znajdowania par (x, y) spełniających równanie 2x + y = n
std::vector<std::pair<int, int>> find_pairs(int n) {
    std::vector<std::pair<int, int>> pairs;
    for (int x = 0; x <= n / 2; ++x) {
        int y = n - 2 * x;
        pairs.push_back(std::make_pair(x, y));
    }
    return pairs;
}

int suma_wariacji(int n) {
    int suma = 0;
    std::vector<std::pair<int, int>> pairs = find_pairs(n);

    //std::cout << "Pary (x, y) spełniające równanie 2x + y = " << n << ":\n";
    for (const auto& pair : pairs) {
        unsigned long long result = binomial_coefficient(pair.first + pair.second, pair.second);

        //::cout << "(" << pair.first << ", " << pair.second << ")"<<"=="<<result<<endl;
        suma += result;
    }
    return suma;


}

int minimalny_ciag(int szukana_liczba_komb) {
    //int n=suma
    bool za_duzy = false;
    bool za_maly = false;
    int dl_ciagu = szukana_liczba_komb;
    int liczba_komb = suma_wariacji(dl_ciagu);
    while (liczba_komb != szukana_liczba_komb and (za_maly == false or za_duzy == false)) {
        cout << "dl" << dl_ciagu << endl;
        cout << "lk" << liczba_komb << endl;
        if (liczba_komb > szukana_liczba_komb) {
            za_duzy = true;
            dl_ciagu--;
            //cout<<dl_ciagu<<endl;
        }
        else {
            za_maly = true;
            dl_ciagu++;
        }
        if (liczba_komb == szukana_liczba_komb) {
            return dl_ciagu + 1;
        }
        //cout<<liczba_komb<<" : "<<dl_ciagu<<" | "<<za_maly<<" : "<<za_duzy<<endl;
        liczba_komb = suma_wariacji(dl_ciagu);
    }
    return -1;

}
void generowanie_par_ciagow(int n) {
    std::vector<std::pair<int, int>> pary = find_pairs(n);
    for (int i = 0; i < pary.size(); i++) {
        cout << pary[i].first << " : " << pary[i].second << endl;
    }
}
int main() {
    int n;
    //std::cout << "Podaj wartość n: ";
    std::cin >> n;
    //int suma =suma_wariacji(n)<<endl;
    int min = minimalny_ciag(n);
    cout << min << endl;
    if (min == -1) {
        cout << "NIE" << endl;
    }
    else {
        cout << min << endl;
    }
    cout << "______________________" << endl;
    generowanie_par_ciagow(n);




    return 0;
}
