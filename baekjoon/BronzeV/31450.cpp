#include <iostream>

int main() {
    int M, K;
    std::cin >> M >> K;
    if (M % K == 0)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;
    return 0;
}