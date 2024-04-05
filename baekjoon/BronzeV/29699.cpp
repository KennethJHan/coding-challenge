#include <iostream>

int main() {
    int N;
    std::string s = "WelcomeToSMUPC";
    std::cin >> N;
    N -= 1;
    std::cout << s[N % 14] << std::endl;
    return 0;
}