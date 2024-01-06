#include <iostream>

int main()
{
    int n, m;
    std::cin >> n >> m;
    int res = 0;
    if (n > m)
        res = m / 2;
    else
        res = n / 2;
    std::cout << res << '\n';
    return 0;
}