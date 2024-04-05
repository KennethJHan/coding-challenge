#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    long long res = 1;
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    int week = res / 604800;
    std::cout << week << std::endl;
    return 0;
}