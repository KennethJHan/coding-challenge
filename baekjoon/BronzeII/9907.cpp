#include <iostream>

int main()
{
    std::string s;
    std::cin >> s;
    int cnt = 1;
    int tmp = 0;
    for (char c : s)
    {
        int num = c - '0';
        if (cnt == 1)
            tmp += num * 2;
        else
            tmp += num * (9 - cnt);
        cnt++;
    }
    if (tmp % 11 == 0)
        std::cout << 'J' << std::endl;
    else if (tmp % 11 == 10)
        std::cout << 'Z' << std::endl;
    else
        std::cout << (char)(64 + tmp % 11) << std::endl;
    return 0;
}