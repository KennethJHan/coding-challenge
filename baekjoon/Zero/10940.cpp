#include <iostream>
#include <iomanip>
#include <sstream>

std::string encode_base16(const std::string &s)
{
    std::ostringstream oss;
    for (char c : s)
    {
        oss << std::hex << std::uppercase << std::setfill('0') << std::setw(2) << (int)c;
    }
    return oss.str();
}

int main()
{
    std::string s;
    std::cin >> s;
    std::cout << encode_base16(s) << '\n';
    return 0;
}