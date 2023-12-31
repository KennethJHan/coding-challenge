#include <iostream>

int main()
{
    std::string s;
    std::cin >> s;
    bool b = false;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'k' && s[i + 3] == 'a')
        {
            if (s[i + 4] == 'p' && s[i + 5] == 'i')
            {
                std::cout << "YES" << std::endl;
                b = true;
                break;
            }
            else if (s[i + 4] == 'c' && s[i + 5] == 'h' && s[i + 6] == 'u')
            {
                std::cout << "YES" << std::endl;
                b = true;
                break;
            }
        }
    }
    if (!b)
        std::cout << "NO" << std::endl;
    return 0;
}