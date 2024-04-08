#include <iostream>

int main() {
    double X, Y, Z;
    std::cin >> X >> Y >> Z;
    if (X + Y <= Z + 0.5)
        std::cout << 1 << std::endl;
    else
        std::cout << 0 << std::endl;
    return 0;
}