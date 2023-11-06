#include <iostream>

int main() {
    int N, F, N1, res = 0;
    std::cin >> N >> F;
    N1 = N - N % 100;
    while (true) {
        if (N1 % F == 0)
            break;
        res++;
        N1++;
    }
    if (res < 10)
        std::cout << '0' << res << std::endl;
    else
        std::cout << res << std::endl;
    return 0;
}