#include <iostream>

int main() {
    int S1, S2, A1, A2;
    bool T1 = true;
    bool T2 = true;
    std::cin >> S1 >> S2;
    for (int i = 0; i < S1; i++) {
        std::cin >> A1 >> A2;
        if (A1 != A2) {
            T1 = false;
            break;
        }
    }
    for (int i = 0; i < S2; i++) {
        std::cin >> A1 >> A2;
        if (A1 != A2) {
            T2 = false;
            break;
        }
    }
    if (T1 && T2)
        std::cout << "Accepted" << std::endl;
    else if (T1 && !T2)
        std::cout << "Why Wrong!!!" << std::endl;
    else if (!T1)
        std::cout << "Wrong Answer" << std::endl;
    return 0;
}