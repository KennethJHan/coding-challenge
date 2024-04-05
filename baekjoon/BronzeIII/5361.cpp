#include <iostream>
#include <iomanip>

int main()
{
    int N;
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        double res = 0, A, B, C, D, E;
        std::cin >> A >> B >> C >> D >> E;
        res = A * 350.34 + B * 230.90 + C * 190.55 + D * 125.30 + E * 180.90;
        std::cout << "$" << std::fixed << std::setprecision(2) << res << std::endl;
    }
    return 0;
}