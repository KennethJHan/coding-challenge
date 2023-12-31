#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::getline(std::cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            std::cout << c;
            i += 2;
        }
        else
        {
            std::cout << c;
        }
    }
    return 0;
}
// zepelepenapa papapripikapa
