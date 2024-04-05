#include <iostream>

int main() {
    int T, x, y;
    int arr[5] = {
        0,
    };
    std::cin >> T;
    for (int i = 0; i < T; i++) {
        std::cin >> x >> y;
        if (x > 0 && y > 0)
            arr[0]++;
        else if (x < 0 && y > 0)
            arr[1]++;
        else if (x < 0 && y < 0)
            arr[2]++;
        else if (x > 0 && y < 0)
            arr[3]++;
        else if (x == 0 || y == 0)
            arr[4]++;
    }
    for (int i = 0; i < 4; i++) {
        std::cout << "Q" << i + 1 << ": " << arr[i] << std::endl;
    }
    std::cout << "AXIS: " << arr[4] << std::endl;
    return 0;
}