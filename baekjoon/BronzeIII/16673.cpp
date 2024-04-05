#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int c, k, p, res = 0;
    std::cin >> c >> k >> p;
    for (int i = 1; i < c + 1; i++)
        res += (k * i + p * i * i);
    std::cout << res << '\n';
    return 0;
}