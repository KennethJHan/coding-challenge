#include <iostream>

int main() {
    int n, m, k;
    std::cin >> n >> m >> k;
    int res1 = n - m * k < 0 ? 0 : n - m * k;
    int res2 = n - m * (k - 1) - 1 < 0 ? 0 : n - m * (k - 1) - 1;
    std::cout << res1 << ' ' << res2 << std::endl;
    return 0;
}