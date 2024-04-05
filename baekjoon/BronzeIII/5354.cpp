#include <iostream>

int main()
{
    int N, tmp;
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> tmp;
        for (int j = 0; j < tmp; j++)
        {
            if (j == 0 || j == tmp - 1)
            {
                for (int k = 0; k < tmp; k++)
                {
                    std::cout << '#';
                }
                std::cout << '\n';
            }
            else
            {
                for (int k = 0; k < tmp; k++)
                {
                    if (k == 0 || k == tmp - 1)
                    {
                        std::cout << '#';
                    }
                    else
                    {
                        std::cout << 'J';
                    }
                }
                std::cout << '\n';
            }
        }
        std::cout << '\n';
    }
    return 0;
}