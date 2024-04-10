#include <iostream>

int main() {
    int A, B, C, D;
    std::cin >> A >> B;
    C = A + B;
    D = A - B;
    if (C > D)
        std::cout << C << '\n' << D << std::endl;
    else
        std::cout << D << '\n' << C << std::endl;
    return 0;
}