#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int N, M, tmp, x1, y1, x2, y2;
    std::cin >> N >> M;
    int arr[N + 1][N + 1];
    for (int i = 0; i < N + 1; i++) {
        arr[0][i] = 0;
        arr[i][0] = 0;
    }
    for (int i = 1; i < N + 1; i++) {
        for (int j = 1; j < N + 1; j++) {
            std::cin >> tmp;
            arr[i][j] = tmp + arr[i][j - 1];
        }
    }
    for (int i = 0; i < M; i++) {
        int res = 0;
        std::cin >> x1 >> y1 >> x2 >> y2;
        // std::cout << "arr[" << x1 << "][" << y2 << "]: " << arr[x1][y2]
        //           << std::endl;
        // std::cout << "arr[" << x1 << "][" << y1 - 1 << "]: " << arr[x1][y1 -
        // 1]
        //           << std::endl;
        // std::cout << "arr[" << x2 << "][" << y2 << "]: " << arr[x2][y2]
        //           << std::endl;
        // std::cout << "arr[" << x2 << "][" << y1 - 1 << "]: " << arr[x2][y1 -
        // 1]
        //           << std::endl;
        // res += arr[x1][y2] - arr[x1][y1 - 1];
        // res += arr[x2][y2] - arr[x2][y1 - 1];
        for (int j = x1; j < x2 + 1; j++) {
            res += arr[j][y2] - arr[j][y1 - 1];
        }
        std::cout << res << '\n';
    }
    return 0;
}