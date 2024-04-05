#include <iostream>

int main()
{
    int N;
    std::cin >> N;
    if (N == 1)
    {
        std::cout << "*\n";
        return 0;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = N - i; j > 1; j--)
        {
            std::cout << " ";
        }
        std::cout << "*\n";
    }
    return 0;
}