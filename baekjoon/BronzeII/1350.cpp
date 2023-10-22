#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    long long N, size, M, result = 0;
    std::vector<long long> v;
    std::cin >> N;
    for (long long i = 0; i < N; i++) {
        std::cin >> size;
        v.push_back(size);
    }
    std::cin >> M;
    for (long long i : v) {
        if (i == 0)
            continue;

        long long a = i / M;
        long long b = i % M;
        result += a;
        if (b != 0)
            result++;
    }
    std::cout << M * result << '\n';
    return 0;
}