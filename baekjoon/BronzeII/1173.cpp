#include <iostream>

int main() {
    int N, m, M, T, R, min_pulse;
    std::cin >> N >> m >> M >> T >> R;
    if (m + T > M) {
        std::cout << -1 << std::endl;
        return 0;
    }
    min_pulse = m;
    int res = 0;
    while (true) {
        if (m + T > M) {
            if (m - R < min_pulse)
                m = min_pulse;
            else
                m -= R;
            res++;
        } else {
            res++;
            m += T;
            N--;
        }
        if (N == 0)
            break;
    }
    std::cout << res << std::endl;
    return 0;
}