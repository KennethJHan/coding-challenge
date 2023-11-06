#include <iostream>

int main()
{
    int N;
    std::cin >> N;
    for (int i = 1; i < N + 1; i++)
    {
        std::cout << i << ' ';
        if (i % 6 == 0)
            std::cout << "Go! ";
    }
    if (N % 6 != 0)
        std::cout << "Go!\n";
    return 0;
}