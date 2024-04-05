#include <iostream>

int main() {
    int res1 = 0, res2 = 0, tmp;
    for (int i = 0; i < 5; i++) {
        std::cin >> tmp;
        if (i == 0)
            res1 += tmp * 6;
        else if (i == 1)
            res1 += tmp * 3;
        else if (i == 2)
            res1 += tmp * 2;
        else if (i == 3)
            res1 += tmp;
        else if (i == 4)
            res1 += tmp * 2;
    }
    for (int i = 0; i < 5; i++) {
        std::cin >> tmp;
        if (i == 0)
            res2 += tmp * 6;
        else if (i == 1)
            res2 += tmp * 3;
        else if (i == 2)
            res2 += tmp * 2;
        else if (i == 3)
            res2 += tmp;
        else if (i == 4)
            res2 += tmp * 2;
    }
    std::cout << res1 << ' ' << res2 << std::endl;

    return 0;
}