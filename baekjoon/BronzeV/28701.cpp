#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int N, res1, res2;
    std::cin >> N;
    res1 = N * (N + 1) / 2;
    res2 = res1 * res1;
    std::cout << res1 << '\n';
    std::cout << res2 << '\n';
    std::cout << res2 << '\n';
    return 0;
}