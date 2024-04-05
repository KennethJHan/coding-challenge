#include <iostream>
#include <vector>

int main() {
    int T, N;
    std::cin >> T;
    for (int i = 0; i < T; i++) {
        std::cin >> N;
        std::vector<int> v;
        int idx = 0;
        while (true) {
            if (N == 0)
                break;
            if (N % 2 == 1)
                v.push_back(idx);
            N /= 2;
            idx++;
        }
        for (int i : v)
            std::cout << i << ' ';
        std::cout << '\n';
    }
    return 0;
}