#include <iostream>

int main() {
    int N;
    std::cin >> N;
    if (N % 7 == 2)
        std::cout << 1 << std::endl;
    else
        std::cout << 0 << std::endl;
    return 0;
}