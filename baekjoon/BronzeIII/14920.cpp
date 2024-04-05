#include <iostream>

int main() {
    int N, num = 1;
    std::cin >> N;
    if (N == 1) {
        std::cout << 1 << std::endl;
        return 0;
    }
    while (true) {
        num++;
        if (N % 2 == 1)
            N = 3 * N + 1;
        else
            N = N / 2;
        if (N == 1)
            break;
    }
    std::cout << num << std::endl;
    return 0;
}