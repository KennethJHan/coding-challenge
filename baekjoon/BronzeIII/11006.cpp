#include <iostream>

int main() {
    int T, N, M;
    std::cin >> T;
    for (int i = 0; i < T; i++) {
        std::cin >> N >> M;
        std::cout << M * 2 - N << ' ' << N - M << std::endl;
    }
    return 0;
}