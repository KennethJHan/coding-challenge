#include <iostream>

int main() {
    int N, M, res = 0;
    std::cin >> N >> M;
    for (int i = 0; i < N; i++) {
        int tmp = 0;
        for (int j = 0; j < M; j++) {
            char c;
            std::cin >> c;
            if (c == 'O')
                tmp++;
        }
        if (tmp > M / 2)
            res++;
    }
    std::cout << res << std::endl;
    return 0;
}