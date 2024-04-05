#include <iostream>

int main() {
    int N;
    std::cin >> N;
    if (N >= 620 && N <= 780)
        std::cout << "Red" << std::endl;
    else if (N >= 590 && N < 620)
        std::cout << "Orange" << std::endl;
    else if (N >= 570 && N < 590)
        std::cout << "Yellow" << std::endl;
    else if (N >= 495 && N < 570)
        std::cout << "Green" << std::endl;
    else if (N >= 450 && N < 495)
        std::cout << "Blue" << std::endl;
    else if (N >= 425 && N < 450)
        std::cout << "Indigo" << std::endl;
    else if (N >= 380 && N < 425)
        std::cout << "Violet" << std::endl;
    return 0;
}