#include <iostream>

int main()
{
    int t, n, a, b;
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        std::cin >> n;
        for (int j = 0; j < n; j++)
        {
            std::cin >> a >> b;
            std::cout << a + b << " " << a * b << std::endl;
        }
    }
    return 0;
}