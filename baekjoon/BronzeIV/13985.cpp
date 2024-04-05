#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::getline(std::cin, s);
    int a = s[0] - '0';
    int b = s[4] - '0';
    int c = s[8] - '0';
    if (a + b == c)
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
    return 0;
}