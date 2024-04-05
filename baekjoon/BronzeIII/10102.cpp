#include <iostream>

int main() {
    int N, A = 0, B = 0;
    std::string s;
    std::cin >> N >> s;
    for (char c : s) {
        if (c == 'A')
            A++;
        else
            B++;
    }
    if (A > B)
        std::cout << 'A' << std::endl;
    else if (A < B)
        std::cout << 'B' << std::endl;
    else
        std::cout << "Tie" << std::endl;
    return 0;
}