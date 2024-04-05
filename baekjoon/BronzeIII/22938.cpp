#include <iostream>
#include <cmath>

int main()
{
    double x1, x2, y1, y2, r1, r2;
    std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    double len = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    if (len < r1 + r2)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
    return 0;
}