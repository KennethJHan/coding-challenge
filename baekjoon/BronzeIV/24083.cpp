#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;
    A += B;
    while (true) {
        if (A <= 12)
            break;

        A -= 12;
    }
    std::cout << A << std::endl;
    return 0;
}