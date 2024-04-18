#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int tmp;
    int arr[10] = {
        0,
    };
    for (int i = 0; i < 5; i++) {
        std::cin >> tmp;
        arr[tmp]++;
    }
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 1) {
            std::cout << i << std::endl;
            break;
        }
    }
    return 0;
}