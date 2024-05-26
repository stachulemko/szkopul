#include <iostream>
using namespace std;

int main() {
    int liczbaOdczytow;
    cin >> liczbaOdczytow;

    int poprzedniaOdleglosc, aktualnaOdleglosc;
    cin >> poprzedniaOdleglosc;

    int liczbaBasenow = 1;
    bool czyRosnie = true;

    for (int i = 1; i < liczbaOdczytow; i++) {
        cin >> aktualnaOdleglosc;

        if (czyRosnie && aktualnaOdleglosc < poprzedniaOdleglosc) {
            liczbaBasenow++;
            czyRosnie = false;
        }
        else if (!czyRosnie && aktualnaOdleglosc > poprzedniaOdleglosc) {
            liczbaBasenow++;
            czyRosnie = true;
        }

        poprzedniaOdleglosc = aktualnaOdleglosc;
    }

    cout << liczbaBasenow << endl;

    return 0;
}
