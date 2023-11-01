#include <iostream>

int main() {
    int N, res, cnt = 2;
    std::cin >> N;
    int arr[101] = {
        0,
    };
    arr[1] = 2;
    for (int i = 2; i < 101; i++) {
        if (i % 2 == 0) {
            arr[i] = cnt * cnt;
            cnt++;
        } else {
            arr[i] = arr[i - 1] + (cnt - 1);
        }
    }

    std::cout << arr[N] << std::endl;
    return 0;
}

// 1 -> 2
// 2 -> 4 -> 2**2
// 3 -> 6  = (2)+2
// 4 -> 9 -> 3**2
// 5 -> 12 = (4)+3
// 6 -> 16 -> 4**2
// 7 -> 20 = (6)+4