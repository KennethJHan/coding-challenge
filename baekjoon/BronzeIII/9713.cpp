#include <iostream>

int main() {
    int N, tmp, res = 0;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> tmp;
        std::cout << ((tmp + 1) / 2) * ((tmp + 1) / 2) << std::endl;
    }
    return 0;
}

// 1 3 5 7 9
// 1 2 3 4 5
