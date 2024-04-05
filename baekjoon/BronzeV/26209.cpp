#include <iostream>

int main() {
    char res = 'S';
    int N;
    for (int i = 0; i < 8; i++) {
        std::cin >> N;
        if (N == 9) {
            res = 'F';
            break;
        }
    }
    std::cout << res << std::endl;
    return 0;
}