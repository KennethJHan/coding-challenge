#include <iostream>

int main() {
    double a, b, c;
    while (true) {
        std::cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
            break;

        if (b - a == c - b)
            std::cout << "AP " << c + (c - b) << std::endl;
        if (b / a == c / b)
            std::cout << "GP " << c * (c / b) << std::endl;
    }
    return 0;
}

// 4 7 10
// 2 6 18
// 0 0 0
// AP 13
// GP 54