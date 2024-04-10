#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int N, tmp, res = 0;
    std::cin >> N;
    std::vector<int> v;
    for (int i = 0; i < N; i++) {
        std::cin >> tmp;
        v.push_back(tmp);
    }
    std::sort(v.begin(), v.end());

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            res += v[j];
        }
    }
    std::cout << res << std::endl;
    return 0;
}

// 3 1 4 3 2
// 2 5 1 4 3

// 1 2 3 3 4
// 1 + 3 + 6 + 9 + 13 = 32