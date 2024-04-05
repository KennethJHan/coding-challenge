#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    long long K, N;
    long long res = 1;
    long long *arr = new long long[K];
    std::cin >> K >> N;
    for (long long i = 0; i < K; i++) {
        std::cin >> arr[i];
    }
    while (true) {
        long long num = 0;
        for (long long i = 0; i < K; i++) {
            num += arr[i] / res;
        }
        if (N > num)
            break;
        res++;
    }
    std::cout << res - 1 << '\n';
    return 0;
}

// 4 11
// 802
// 743
// 457
// 539