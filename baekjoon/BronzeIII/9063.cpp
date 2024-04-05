#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int N, x, y;
    std::vector<int> vx;
    std::vector<int> vy;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> x >> y;
        vx.push_back(x);
        vy.push_back(y);
    }
    std::sort(vx.begin(), vx.end());
    std::sort(vy.begin(), vy.end());

    int res = (vx[N - 1] - vx[0]) * (vy[N - 1] - vy[0]);
    std::cout << res << '\n';
    return 0;
}