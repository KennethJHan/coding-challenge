#include <iostream>

int main() {
    int N, a = 100, b = 100, n1, n2;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> n1 >> n2;
        if (n1 < n2)
            a -= n2;
        else if (n1 > n2)
            b -= n1;
    }
    std::cout << a << '\n' << b << '\n';
    return 0;
}