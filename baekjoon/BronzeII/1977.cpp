#include <iostream>

#include <cmath>
#include <iostream>

int main() {
    int M, N, res = 0, min_num = 10000 * 10000;
    std::cin >> M >> N;
    int square_root_m = sqrt(M);
    int square_root_n = sqrt(N);
    for (int i = square_root_m; i <= square_root_n; i++) {
        if (i * i < M)
            continue;
        if (i * i < min_num)
            min_num = i * i;

        res += i * i;
    }

    if (res == 0) {
        std::cout << -1 << std::endl;
        return 0;
    }

    std::cout << res << std::endl;
    std::cout << min_num << std::endl;
    return 0;
}