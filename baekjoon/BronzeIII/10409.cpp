#include <iostream>

int main() {
    int n, T, tmp, cnt = 0;
    std::cin >> n >> T;
    for (int i = 0; i < n; i++) {
        std::cin >> tmp;
        T -= tmp;
        if (T < 0)
            break;
        cnt++;
    }
    std::cout << cnt << std::endl;
    return 0;
}