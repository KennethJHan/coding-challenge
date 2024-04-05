#include <iostream>

int main() {
    int N;
    int sum = 0;
    while (std::cin >> N)
        sum += N;
    std::cout << sum << std::endl;
    return 0;
}