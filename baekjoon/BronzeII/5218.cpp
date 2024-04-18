#include <iostream>

void calc_dist(std::string &s1, std::string &s2) {
    // y ≥ x인 경우에는 y-x, y < x인 경우에는 (y+26) - x가 알파벳 거리가 된다.
    std::cout << "Distances: ";
    for (int i = 0; i < s1.size(); i++) {
        if ((int)s2[i] < (int)s1[i])
            std::cout << (int)s2[i] + 26 - (int)s1[i];
        else
            std::cout << (int)s2[i] - (int)s1[i];
        if (i < s1.size() - 1)
            std::cout << ' ';
    }
    std::cout << '\n';
}

int main() {
    int N;
    std::string s1;
    std::string s2;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> s1 >> s2;
        calc_dist(s1, s2);
    }
    return 0;
}