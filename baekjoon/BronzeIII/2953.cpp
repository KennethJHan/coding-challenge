#include <iostream>

int main() {
    int tmp, max_sum = 0, max_idx = 0;
    int arr[5] = {
        0,
    };
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            std::cin >> tmp;
            arr[i] += tmp;
        }
        if (max_sum < arr[i]) {
            max_idx = i;
            max_sum = arr[i];
        }
    }
    std::cout << max_idx + 1 << ' ' << max_sum << std::endl;
    return 0;
}