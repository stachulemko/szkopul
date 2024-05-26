#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::string x;
    std::cin >> x;

    std::vector<std::pair<char, int>> tab;
    for (char i : x) {
        int count = std::count(x.begin(), x.end(), i);
        char tmp = i;
        x.erase(std::remove(x.begin(), x.end(), i), x.end());
        if (count > 0) {
            tab.push_back(std::make_pair(tmp, count));
        }
    }
    std::cout << "tab: " << std::endl;
    for (auto p : tab) {
        std::cout << "[" << p.first << ", " << p.second << "]" << std::endl;
    }

    bool flaga = true;
    while (flaga == false) {
        for (int i = 0; i < tab.size(); i++) {
            if (i + 1 < tab.size()) {
                if (tab[i].second > tab[i + 1].second) {
                    std::swap(tab[i], tab[i + 1]);
                    flaga = false;
                }
            }
        }
    }
    std::reverse(tab.begin(), tab.end());

    int max_value = tab[0].second;
    tab.erase(tab.begin());
    std::cout << "tab: " << std::endl;
    for (auto p : tab) {
        std::cout << "[" << p.first << ", " << p.second << "]" << std::endl;
    }

    int licnzik = 0;
    if (tab.size() == 1) {
        if (max_value >= 2 && tab[0].second >= 3) {
            if (max_value >= 0 && tab[0].second >= 0) {
                max_value -= 3;
                tab[0].second += 2;
                licnzik += 1;
            }
            else {
                std::cout << licnzik << std::endl;
            }
        }
    }

    for (int i = 0; i < tab.size(); i++) {
        if (tab[i].second >= 3 && max_value >= 2) {
            max_value -= 2;
            tab[i].second -= 3;
            licnzik += 1;
        }
    }
    std::cout << licnzik << std::endl;

    return 0;
}

