#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int T, N, num;
    std::cin >> T;
    for (int i = 0; i < T; i++) {
        std::vector<int> v;
        std::cin >> N;
        for (int j = 0; j < N; j++) {
            std::cin >> num;
            v.push_back(num);
        }
        std::sort(v.begin(), v.end());
        std::cout << v[0] << ' ' << v[N - 1] << '\n';
    }
    return 0;
}