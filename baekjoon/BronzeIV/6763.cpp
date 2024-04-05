#include <iostream>

int main() {
    int a, b, diff;
    std::cin >> a >> b;
    diff = b - a;
    if (diff < 1)
        std::cout << "Congratulations, you are within the speed limit!"
                  << std::endl;
    else if (diff < 21)
        std::cout << "You are speeding and your fine is $100." << std::endl;
    else if (diff < 31)
        std::cout << "You are speeding and your fine is $270." << std::endl;
    else
        std::cout << "You are speeding and your fine is $500." << std::endl;
    return 0;
}