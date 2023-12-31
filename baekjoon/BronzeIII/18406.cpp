#include <iostream>

int main() {
    std::string s;
    std::cin >> s;
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < s.size() / 2; i++)
        sum1 += s[i] - '0';
    for (int i = s.size() / 2; i < s.size(); i++)
        sum2 += s[i] - '0';
    if (sum1 == sum2)
        std::cout << "LUCKY" << std::endl;
    else
        std::cout << "READY" << std::endl;
    return 0;
}