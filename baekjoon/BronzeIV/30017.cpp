#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;
    while (true) {
        if (A > B) {
            if (A - 1 == B)
                break;
            A--;
        } else {
            if (A - 1 == B)
                break;
            B--;
        }
    }
    std::cout << A + B << std::endl;
    return 0;
}