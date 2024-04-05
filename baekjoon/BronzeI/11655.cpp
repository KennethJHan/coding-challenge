#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::getline(std::cin, s);
    for (char c : s)
    {

        if (c >= 65 && c <= 90)
        {
            if (c + 13 > 90)
                std::cout << (char)(c + 13 - 26);
            else
                std::cout << (char)(c + 13);
        }
        else if (c >= 97 && c <= 122)
        {
            if (c + 13 > 122)
                std::cout << (char)(c + 13 - 26);
            else
                std::cout << (char)(c + 13);
        }
        else
        {
            std::cout << c;
        }
    }
    return 0;
}
// 65 ~ 90
// ABCDEFGHIJKLMNOPQRSTUVWXYZ
// NOPQRSTUVWXYZABCDEFGHIJKLM
// 97 ~ 122
// abcdefghijklmnopqrstuvwxyz