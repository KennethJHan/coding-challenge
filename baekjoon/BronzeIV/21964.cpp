#include <iostream>

int main() {
    int N;
    std::string s;
    std::cin >> N;
    std::cin >> s;
    for (int i = N - 5; i < N; i++) {
        std::cout << s[i];
    }
    std::cout << '\n';
    return 0;
}