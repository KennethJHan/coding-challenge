#include <iostream>

int main() {
    int e, f, c, n, res = 0;
    std::cin >> e >> f >> c;
    while (true) {
        res += (e + f) / c;
        f = (e + f) / c + (e + f) % c;
        e = 0;
        if (f < c)
            break;
    }
    std::cout << res << std::endl;
    return 0;
}