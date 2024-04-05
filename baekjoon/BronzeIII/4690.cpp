#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int a, b, c, d;
    for (int a = 1; a <= 100; a++) {
        for (int b = 2; b < a; b++) {
            for (int c = b + 1; c < a; c++) {
                for (int d = c + 1; d < a; d++) {
                    if (!(b <= c && c <= d))
                        continue;

                    int res = b * b * b + c * c * c + d * d * d;
                    if (a * a * a == res) {
                        std::cout << "Cube = " << a << ", "
                                  << "Triple = "
                                  << "(" << b << "," << c << "," << d << ")\n";
                    }
                }
            }
        }
    }
    return 0;
}