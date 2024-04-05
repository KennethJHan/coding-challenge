#include <iostream>
#include <map>

int main()
{
    std::map<char, int> m = {{'B', 0}, {'S', 0}, {'A', 0}};
    int N;
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        char c;
        std::cin >> c;
        m[c] += 1;
    }
    int max_num = 0;
    for (const auto &[key, val] : m)
    {
        if (val > max_num)
            max_num = val;
    }
    std::string s = "";
    char arr[3] = {'B', 'S', 'A'};
    for (char c : arr)
    {
        int val = m[c];
        if (val == max_num)
            s += c;
    }
    if (s == "BSA")
        s = "SCU";
    std::cout << s << std::endl;
    return 0;
}