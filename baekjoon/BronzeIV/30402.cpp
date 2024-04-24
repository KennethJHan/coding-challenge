#include <iostream>

int main() {
    std::string result;
    char c;
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            std::cin >> c;
            if (c == 'w') {
                std::cout << "chunbae" << std::endl;
                return 0;
            } else if (c == 'b') {
                std::cout << "nabi" << std::endl;
                return 0;
            } else if (c == 'g') {
                std::cout << "yeongcheol" << std::endl;
                return 0;
            }
        }
    }
    return 0;
}