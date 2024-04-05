#include <cstdlib>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int arr[11] = {
        0,
    };
    int tmp;
    for (int i = 1; i < 11; i++) {
        std::cin >> tmp;
        arr[i] = tmp + arr[i - 1];
    }
    int min_val = abs(100 - arr[1]);
    int min_idx;
    for (int i = 1; i < 11; i++) {
        // std::cout << "min_val: " << min_val << std::endl;
        // std::cout << "abs(100 - arr[i]): " << abs(100 - arr[i]) << std::endl;
        if (min_val >= abs(100 - arr[i])) {
            min_val = abs(100 - arr[i]);
            min_idx = i;
        }
        // std::cout << "min_idx: " << min_idx;
    }
    // for (int i = 0; i < 11; i++) {
    //     std::cout << i << ": " << arr[i] << std::endl;
    // }
    std::cout << arr[min_idx] << '\n';
    return 0;
}