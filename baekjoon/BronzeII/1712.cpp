#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    long long A, B, C, res = 1;
    std::cin >> A >> B >> C;
    if ((A + B * 1 - C * 1) < (A + B * 2 - C * 2))
        res = -1;
    else if (C - B == 0)
        res = -1;
    else {
        // while (true) {
        //     if ((A + B * res) < (C * res))
        //         break;
        //     res++;
        // }
        // while (true) {
        //     if (A / (C - B) < res)
        //         break;
        //     res++;
        // }
        res = A / (C - B) + 1;
    }
    std::cout << res << '\n';

    return 0;
}