#include <iostream>

int main() {
    int N, sum = 0;
    while (true) {
        std::cin >> N;
        if (N == -1)
            break;
        sum += N;
    }
    std::cout << sum << std::endl;
    return 0;
}