#include <iostream>

int main() {
    int T, n, a, b;
    std::cin >> T;
    for (int i = 0; i < T; i++) {
        std::cin >> n;
        std::cout << "Pairs for " << n << ":";
        int cnt = 0;
        for (int j = 1; j < n / 2 + 1; j++) {
            a = j;
            b = n - j;
            if (a == b)
                continue;

            if (cnt == 0) {
                std::cout << ' ' << a << ' ' << b;
            } else {
                std::cout << ", " << a << ' ' << b;
            }
            cnt++;
        }
        std::cout << '\n';
    }
    return 0;
}