#include <iostream>

int main() {
    int a = 0, b = 0, tmp;
    std::cin >> tmp;
    a += tmp * 3;
    std::cin >> tmp;
    a += tmp * 20;
    std::cin >> tmp;
    a += tmp * 120;

    std::cin >> tmp;
    b += tmp * 3;
    std::cin >> tmp;
    b += tmp * 20;
    std::cin >> tmp;
    b += tmp * 120;

    if (a > b)
        std::cout << "Max\n";
    else if (a < b)
        std::cout << "Mel\n";
    else
        std::cout << "Draw\n";
    return 0;
}