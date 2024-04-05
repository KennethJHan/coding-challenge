#include <iostream>
#include <string>

int main() {
    std::string s;
    std::getline(std::cin, s);
    std::string s1 = "D2";
    std::string s2 = "d2";
    if (s.find(s1) != std::string::npos || s.find(s2) != std::string::npos) {
        std::cout << "D2" << std::endl;
    } else {
        std::cout << "unrated" << std::endl;
    }
    return 0;
}