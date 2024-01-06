#include <iostream>
#include <string>

int main()
{
    std::string d;
    std::string w;
    std::getline(std::cin, d);
    std::getline(std::cin, w);
    int cnt = 0;
    int pos = 0;
    while ((pos = d.find(w, pos)) != std::string::npos)
    {
        pos += w.length();
        cnt++;
    }
    std::cout << cnt << '\n';
    return 0;
}