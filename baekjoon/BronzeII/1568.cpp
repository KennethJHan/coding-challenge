#include <iostream>

int main()
{
    int N, cnt = 0, tmp = 1;
    std::cin >> N;
    while (true)
    {
        if (N == 0)
            break;

        if (N < tmp)
            tmp = 1;
        N -= tmp;
        tmp++;
        cnt++;
    }
    std::cout << cnt << '\n';
    return 0;
}