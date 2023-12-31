#include <iostream>
#include <vector>

void encode_base64(const std::string &s, std::vector<char> &v)
{
    for (char c : s)
    {
        v.push_back((c >> 2) & 0x3F);
        v.push_back((c & 0x3) << 4 | ((c >> 6) & 0x3F));
        v.push_back((c >> 4) & 0x3F);
        v.push_back((c >> 2) & 0x3F | 0x60);
    }
}

int main()
{
    std::string s;
    std::cin >> s;
    std::vector<char> v;
    encode_base64(s, v);
    for (char c : v)
    {
        std::cout << c << ' ';
    }
    std::cout << '\n';
    return 0;
}