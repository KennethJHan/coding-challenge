#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    int diff1 = b - a;
    int diff2 = c - b;
    if (diff1 < diff2)
        std::cout << diff2 - 1 << std::endl;
    else
        std::cout << diff1 - 1 << std::endl;
    return 0;
}