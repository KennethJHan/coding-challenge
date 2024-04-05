#include <iostream>

int main() {
    int T, n;
    std::cin >> T;
    for (int i = 0; i < T; i++) {
        int res = 0;
        std::cin >> n;
        int arr[101] = {
            0,
        };
        for (int j = 1; j <= n; j++)
            arr[j] = 1;
        for (int j = 2; j <= n; j++) {
            int k = 1;
            while (true) {
                std::cout << "j: " << j << ", k: " << k << ", arr[" << j * k
                          << "] = " << arr[j * k] << std::endl;
                if (j * k > n) {
                    std::cout << "j*k = " << j * k << ", n = " << n
                              << ", break\n";
                    break;
                }

                arr[j * k] = 0;
                std::cout << "arr[" << j * k << "] = " << arr[j * k]
                          << std::endl;
                k++;
            }
            std::cout << '\n';
        }
        for (int j = 1; j < 101; j++) {
            std::cout << arr[j] << ' ';
            res += arr[j];
        }
        std::cout << '\n';
        std::cout << res << '\n';
    }
    return 0;
}