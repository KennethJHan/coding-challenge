#include <iostream>

int main() {
    int L;
    std::cin >> L;
    std::cout << L / 5 + (L % 5 == 0 ? 0 : 1) << std::endl;
    return 0;
}