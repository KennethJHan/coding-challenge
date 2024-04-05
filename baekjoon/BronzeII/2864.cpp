#include <iostream>
#include <string>

void change_number(std::string &s, std::string &s5, std::string &s6)
{
    for (char c : s)
    {
        if (c == '6')
            s5 += '5';
        else
            s5 += c;
        if (c == '5')
            s6 += '6';
        else
            s6 += c;
    }
}

int main()
{
    std::string A, B, A5, B5, A6, B6;
    std::cin >> A >> B;
    change_number(A, A5, A6);
    change_number(B, B5, B6);
    std::cout << stoi(A5) + stoi(B5) << ' ' << stoi(A6) + stoi(B6) << std::endl;
    return 0;
}