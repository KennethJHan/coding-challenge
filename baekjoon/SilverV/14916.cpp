#include <iostream>

int main() {
    int n, n2 = 0, n5 = 0, sum = 0;
    std::cin >> n;
    n5 = n / 5;
    while (true) {
        if (n2 * 2 + n5 * 5 == n)
            break;
        n2++;
        if (n2 * 2 + n5 * 5 > n) {
            n5--;
            n2 = 0;
        }
        if (n5 == -1) {
            std::cout << -1 << std::endl;
            return 0;
        }
    }
    std::cout << n2 + n5 << std::endl;
    return 0;
}