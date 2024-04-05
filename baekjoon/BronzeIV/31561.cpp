#include <iostream>
#include <iomanip>

int main()
{
    double M, res;
    std::cin >> M;
    // if (M <= 30)
    //     res = M / 2;
    // else
    //     res = 15 + (M - 30) * 1.5;
    res = M <= 30 ? M / 2 : 15 + (M - 30) * 1.5;
    std::cout << std::fixed << std::setprecision(1) << res << std::endl;
    return 0;
}