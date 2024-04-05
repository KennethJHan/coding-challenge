#include <iostream>

int main()
{
    int case_num, s, n, q, p;
    std::cin >> case_num;
    for (int i = 0; i < case_num; i++)
    {
        int res = 0;
        std::cin >> s;
        res += s;
        std::cin >> n;
        for (int j = 0; j < n; j++)
        {
            std::cin >> q >> p;
            res += (q * p);
        }
        std::cout << res << std::endl;
    }

    return 0;
}