#include <iostream>

int main() {
    int X, L, R, a, b, res;
    std::cin >> X >> L >> R;
    a = X - L;
    b = X - R;
    if (L <= X && X <= R)
        res = X;
    else if (L <= X && R <= X) {
        if (L <= R)
            res = R;
        else
            res = L;
    } else if (L >= X && R >= X) {
        if (L <= R)
            res = L;
        else
            res = R;
    }
    std::cout << res << std::endl;
    return 0;
}