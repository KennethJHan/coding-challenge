#include <iostream>

int main() {
    int A, B, C, D;
    std::cin >> A >> B >> C >> D;
    std::string s1 = std::to_string(A) + std::to_string(B);
    std::string s2 = std::to_string(C) + std::to_string(D);
    std::cout << std::stoll(s1) + std::stoll(s2) << std::endl;
    return 0;
}