#include <iostream>
#include <cmath>

int main()
{
    double a, b;
    std::cin >> a >> b;
    double x = (abs(a + b)) / 2;
    double y = (abs(a - b)) / 2;
    if (x > y)
        std::cout << x << ' ' << y << std::endl;
    else if (x < y)
        std::cout << y << ' ' << x << std::endl;
    else
        std::cout << -1 << std::endl;
    return 0;
}