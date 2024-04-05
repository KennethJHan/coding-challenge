#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    std::string s;
    while (true) {
        std::getline(std::cin, s);
        if (std::cin.eof())
            break;

        for (char c : s) {
            if (c == 'e')
                std::cout << 'i';
            else if (c == 'i')
                std::cout << 'e';
            else if (c == 'E')
                std::cout << 'I';
            else if (c == 'I')
                std::cout << 'E';
            else
                std::cout << c;
        }
        std::cout << '\n';
    }
    return 0;
}