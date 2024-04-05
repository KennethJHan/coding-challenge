#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    double d1, d2, res;
    std::cin >> d1 >> d2;
    res = d1 * 2 + 2 * M_PI * d2;
    std::cout << std::fixed << std::setprecision(6) << res << std::endl;
    return 0;
}
