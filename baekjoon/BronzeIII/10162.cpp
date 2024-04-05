#include <iostream>

int main() {
    int T, A, B, C;
    std::cin >> T;
    A = T / 300;
    T -= A * 300;
    B = T / 60;
    T -= B * 60;
    C = T / 10;
    T -= C * 10;
    if (T == 0)
        std::cout << A << ' ' << B << ' ' << C << '\n';
    else
        std::cout << -1 << '\n';
    return 0;
}