#include <iostream>

int main()
{
    int T;
    std::cin >> T;
    while (T--)
    {
        int N, C;
        std::cin >> N >> C;
        std::cout << (N % C == 0 ? N / C : N / C + 1) << std::endl;
    }
    return 0;
}