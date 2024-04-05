#include <iostream>

int main() {
    int X, N, res = 0;
    std::cin >> X >> N;
    while (true) {
        if (X >= N)
            break;

        int remain = X % 3;
        if (remain == 0)
            X++;
        else if (remain == 1)
            X *= 2;
        else if (remain == 2)
            X *= 3;
        res++;
    }
    std::cout << res << std::endl;
    return 0;
}

// r=0 のとき，黒板に書かれている数を，x に 1 を足した数に書き換える．
// r=1 のとき，黒板に書かれている数を，x に 2 を掛けた数に書き換える．
// r=2 のとき，黒板に書かれている数を，x に 3 を掛けた数に書き換える．