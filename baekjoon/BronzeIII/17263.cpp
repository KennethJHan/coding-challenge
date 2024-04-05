#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int N;
    std::cin >> N;
    int max_num = 0, tmp;
    for (int i = 0; i < N; i++) {
        std::cin >> tmp;
        if (tmp > max_num)
            max_num = tmp;
    }
    std::cout << max_num << std::endl;
    return 0;
}