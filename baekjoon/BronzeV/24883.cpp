#include <iostream>

int main() {
    std::string s;
    std::cin >> s;
    if (s == "N" || s == "n")
        std::cout << "Naver D2" << std::endl;
    else
        std::cout << "Naver Whale" << std::endl;
    return 0;
}