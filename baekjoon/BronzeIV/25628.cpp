#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    if (a / 2 <= b)
        std::cout << a / 2 << std::endl;
    else if (a / 2 > b)
        std::cout << b << std::endl;
    else
        std::cout << 0 << std::endl;
    return 0;
}