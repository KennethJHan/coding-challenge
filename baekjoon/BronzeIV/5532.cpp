#include <algorithm>
#include <cmath>
#include <iostream>

int main() {
    double N, A, B, C, D;
    std::cin >> N >> A >> B >> C >> D;
    double AC = ceil(A / C);
    double BD = ceil(B / D);
    std::cout << N - std::max(AC, BD) << std::endl;

    return 0;
}

// 20 25 30 6 8
// 15 32 48 4 6