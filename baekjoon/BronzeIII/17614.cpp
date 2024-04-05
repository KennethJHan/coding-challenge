#include <iostream>

int main() {
    int N, cnt = 0;
    std::cin >> N;
    for (int i = 1; i <= N; i++) {
        int tmp = i;
        while (tmp != 0) {
            if (tmp % 10 == 3 || tmp % 10 == 6 || tmp % 10 == 9)
                cnt++;
            tmp /= 10;
        }
    }
    std::cout << cnt << std::endl;
    return 0;
}