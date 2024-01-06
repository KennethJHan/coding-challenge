#include <iostream>
#include <unordered_map>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    std::unordered_map<std::string, std::string> um;
    int n, m;
    std::cin >> n >> m;
    std::string tmp1, tmp2;
    for (int i = 0; i < n; i++)
    {
        std::cin >> tmp1 >> tmp2;
        um[tmp1] = tmp2;
    }
    for (int i = 0; i < m; i++)
    {
        std::cin >> tmp1;
        std::cout << um[tmp1] << '\n';
    }
    return 0;
}