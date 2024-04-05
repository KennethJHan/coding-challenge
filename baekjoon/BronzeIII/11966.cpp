#include <iostream>

int main() {
    long long N;
    std::cin >> N;
    while (N > 1) {
        if (N % 2 == 1) {
            std::cout << 0 << std::endl;
            return 0;
        } else {
            N /= 2;
        }
    }
    std::cout << 1 << std::endl;
    return 0;
}