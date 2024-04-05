#include <iostream>

int main() {
    int A, B, C;
    std::cin >> A >> B >> C;
    if (A + B == C)
        std::cout << "correct!" << std::endl;
    else
        std::cout << "wrong!" << std::endl;
    return 0;
}