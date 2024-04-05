#include <iostream>

int main() {
    int T, a, b, c;
    std::cin >> T;
    for (int i = 0; i < T; i++) {
        int cnt = 0;
        std::cin >> a >> b >> c;
        for (int j = 1; j <= a; j++) {
            for (int k = 1; k <= b; k++) {
                for (int l = 1; l <= c; l++) {
                    int x = j % k;
                    int y = k % l;
                    int z = l % j;
                    if (x == y && y == z && z == x) {
                        cnt++;
                    }
                }
            }
        }
        std::cout << cnt << std::endl;
    }
    return 0;
}