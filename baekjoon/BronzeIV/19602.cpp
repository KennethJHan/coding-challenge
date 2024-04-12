#include <iostream>

int main() {
    int S, M, L;
    std::cin >> S >> M >> L;
    if ((S * 1 + M * 2 + L * 3) < 10)
        std::cout << "sad" << std::endl;
    else
        std::cout << "happy" << std::endl;
    return 0;
}