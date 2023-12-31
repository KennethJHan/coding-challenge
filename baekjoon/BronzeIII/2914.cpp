#include <iostream>

int main() {
    int A, I, B = 0;
    std::cin >> A >> I;
    // B / A = I
    while (true) {
        if (B / A + 1 == I)
            break;
        B++;
    }
    std::cout << B + 1 << std::endl;
    return 0;
}