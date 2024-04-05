#include <iostream>
#include <vector>

double factorial(int n) {
    if (n < 0) {
        return -1;
    } else if (n == 0) {
        return 1;
    } else {
        double result = 1;
        for (double i = 2; i <= n; ++i) {
            result *= i;
        }
        return result;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    std::vector<double> v;
    for (int i = 0; i < 11; i++)
        v.push_back(factorial(i));

    std::cout << "n e" << std::endl;
    std::cout << "- -----------" << std::endl;

    double res = 0;
    for (int i = 0; i < 11; i++) {
        res += 1 / v[i];
        std::cout << i << ' ' << res << std::endl;
    }
    // std::cout << std::fixed << std::setprecision(6) << res << std::endl;
    return 0;
}

// n e
// - -----------
// 0 1
// 1 2
// 2 2.5
// 3 2.666666667
// 4 2.708333333