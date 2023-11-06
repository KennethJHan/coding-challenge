#include <iostream>

int main()
{
    double x, y;
    while (true)
    {
        std::cin >> x >> y;
        if (x == 0 && y == 0)
        {
            std::cout << "AXIS" << std::endl;
            break;
        }

        if (x > 0 && y > 0)
            std::cout << "Q1" << std::endl;
        else if (x < 0 && y > 0)
            std::cout << "Q2" << std::endl;
        else if (x < 0 && y < 0)
            std::cout << "Q3" << std::endl;
        else if (x > 0 && y < 0)
            std::cout << "Q4" << std::endl;
        else if (x == 0 || y == 0)
            std::cout << "AXIS" << std::endl;
    }
    return 0;
}