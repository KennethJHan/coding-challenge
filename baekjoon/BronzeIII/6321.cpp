#include <iostream>

void ibm(std::string &s) {
    for (int n : s) {
        char c = (char)(n + 1);
        if (n + 1 == 91)
            c = 'A';
        std::cout << c;
    }
    std::cout << '\n';
}

int main() {
    int N;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::string s;
        std::cin >> s;
        std::cout << "String #" << i + 1 << std::endl;
        ibm(s);
        if (i != N - 1)
            std::cout << '\n';
    }
    return 0;
}

// 2
// HAL
// SWERC