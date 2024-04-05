#include <iostream>

int main() {
    int res = 0, N, tmp;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> tmp;
        res += tmp;
    }
    if (res > 0)
        std::cout << "Right" << std::endl;
    else if (res < 0)
        std::cout << "Left" << std::endl;
    else
        std::cout << "Stay" << std::endl;
    return 0;
}