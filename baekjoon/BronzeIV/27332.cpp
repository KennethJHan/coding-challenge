#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    if (a + b * 7 <= 30)
        std::cout << 1 << std::endl;
    else
        std::cout << 0 << std::endl;
    return 0;
}