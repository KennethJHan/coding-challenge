#include <iostream>

int main() {
    int N;
    std::string S;
    std::cin >> N >> S;
    char c = S[0];
    for (int i = 1; i < N; i++) {
        if (c != S[i]) {
            std::cout << "No" << std::endl;
            return 0;
        }
    }
    std::cout << "Yes" << std::endl;
    return 0;
}