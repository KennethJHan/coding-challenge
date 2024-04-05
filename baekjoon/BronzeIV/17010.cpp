#include <iostream>

int main() {
    int N;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        int L;
        char C;
        std::cin >> L >> C;
        for (int j = 0; j < L; j++) {
            std::cout << C;
        }
        std::cout << std::endl;
    }
    return 0;
}