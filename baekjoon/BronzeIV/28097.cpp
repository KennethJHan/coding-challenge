#include <iostream>

int main() {
    int T, tmp, total = 0, day = 0;
    std::cin >> T;
    for (int i = 0; i < T; i++) {
        std::cin >> tmp;
        total += tmp;
        total += 8;
    }
    total -= 8;
    while (true) {
        if (total < 24)
            break;
        total -= 24;
        day += 1;
    }
    std::cout << day << " " << total << std::endl;

    return 0;
}