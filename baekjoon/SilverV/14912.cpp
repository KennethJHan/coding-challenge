#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int n, d, cnt = 0;
    std::cin >> n >> d;
    for (int i = 1; i <= n; i++)
    {
        int tmp = i;
        while (tmp)
        {
            if (tmp % 10 == d)
                cnt++;
            tmp /= 10;
        }
    }
    std::cout << cnt << '\n';
    return 0;
}