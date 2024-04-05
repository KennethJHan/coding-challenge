#include <iostream>
#include <limits>
#include <string>
#include <unordered_map>

int main()
{
    int N;
    std::cin >> N;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::string s;
    std::getline(std::cin, s);
    std::unordered_map<char, int> m;
    for (int i = 0; i < N; i++)
        m[s[i]]++;
    int max_num = 0;
    for (int i = 65; i < 123; i++)
        if (m[i] > max_num)
            max_num = m[i];
    std::cout << max_num << std::endl;
    return 0;
}