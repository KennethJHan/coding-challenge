#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    double n;
    std::cin >> n;
    if (n == 1) {
        std::cout << 1 << std::endl;
        return 0;
    }
    double calc = (n - 3) / 4 + 1 + 0.25;
    int calc2 = (calc - (int)calc) * 4 + 2;
    if ((int)calc % 2 == 1)
        std::cout << calc2 << std::endl;
    else {
        std::cout << 6 - calc2 << std::endl;
    }
    return 0;
}

//  1  2  3  4  5
//  9  8  7  6
//    10 11 12 13
// 17 16 15 14
//    18 19 20 21

// 0.75 1.0 1.25 1.5
//  2.5 2.25 2.0 1.75

// 1    1.25 1.5  1.75
// 2.75 2.5  2.25 2

// 3 + (n-1)*4 = x
// n = (x - 3) / 4 + 1

// ex) x = 1000
// n = 250.25