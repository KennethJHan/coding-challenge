#include <iostream>

int main() {
    int apple = 0, banana = 0, tmp;
    for (int i = 3; i > 0; i--) {
        std::cin >> tmp;
        apple += i * tmp;
    }
    for (int i = 3; i > 0; i--) {
        std::cin >> tmp;
        banana += i * tmp;
    }
    if (apple > banana)
        std::cout << "A" << std::endl;
    else if (apple < banana)
        std::cout << "B" << std::endl;
    else
        std::cout << "T" << std::endl;
    return 0;
}