#include <iostream>
#include <string>

int main() {
    int A, B, C;
    std::cin >> A >> B;
    C = A + B;
    std::string res = std::to_string(C);
    std::cout << res.size() << std::endl;
    return 0;
}