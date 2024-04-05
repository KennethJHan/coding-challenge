#include <iostream>

int main()
{
    int N;
    std::cin >> N;
    // if (N == 1)
    // {
    //     std::cout << "*\n";
    //     return 0;
    // }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            // std::cout << "i, j: " << i << ", " << j << std::endl;
            if (i % 2 == 0)
            {
                std::cout << "* ";
            }
            else
            {
                std::cout << " *";
            }
        }
        std::cout << '\n';
    }
    return 0;
}