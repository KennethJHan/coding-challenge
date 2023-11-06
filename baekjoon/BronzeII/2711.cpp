#include <iostream>

int main() {
    int N, tmp;
    std::string s;
    std::cin >> N;

    for (int i = 0; i < N; i++) {
        std::cin >> tmp >> s;
        for (int j = 0; j < s.size(); j++) {
            if (j != tmp - 1)
                std::cout << s[j];
        }
        std::cout << '\n';
    }
    return 0;
}