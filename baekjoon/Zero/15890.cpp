#include <iostream>

int main() {
    // 20180729
    int x = 1;
    std::cout << (x << 1);                  // 2
    std::cout << (x >> 1);                  // 0
    std::cout << (x);                       // 1
    std::cout << (x << 3);                  // 8
    std::cout << (x >> 1);                  // 0
    std::cout << (x << 2) + (x << 1) + (x); // 7
    std::cout << (x << 1);                  // 2
    std::cout << (x << 3) + (x);            // 9
    return 0;
}