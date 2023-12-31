#include <iostream>

int main()
{
    int N, A, B, res_a = 0, res_b = 0;
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> A >> B;
        if (A > B)
            res_a++;
        else if (A < B)
            res_b++;
    }
    std::cout << res_a << " " << res_b << std::endl;
    return 0;
}