#include <iostream>

int main()
{
    int N, res = 0, prev = 2, tmp;
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> tmp;
        if (tmp == 0)
        {
            if (prev == 2)
            {
                res++;
                prev = 0;
            }
        }
        else if (tmp == 1)
        {
            if (prev == 0)
            {
                res++;
                prev = 1;
            }
        }
        else if (tmp == 2)
        {
            if (prev == 1)
            {
                res++;
                prev = 2;
            }
        }
    }
    std::cout << res << std::endl;
    return 0;
}