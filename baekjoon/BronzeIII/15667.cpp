#include <iostream>

int main()
{
    int N;
    std::cin >> N;
    int k = 1;
    while (true)
    {
        if (1 + k + k * k == N)
        {
            std::cout << k << '\n';
            break;
        }
        k++;
    }
    return 0;
}