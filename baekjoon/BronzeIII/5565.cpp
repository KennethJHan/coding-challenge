#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int n, tmp;
    std::cin >> n;
    for (int i = 0; i < 9; i++) {
        std::cin >> tmp;
        n -= tmp;
    }
    std::cout << n << '\n';
    return 0;
}