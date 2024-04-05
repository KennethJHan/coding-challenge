#include <algorithm>
#include <iostream>

int main() {
    int n, res = 0;
    int arr[3];
    for (int i = 0; i < 3; i++) {
        std::cin >> arr[i];
    }
    std::sort(arr, arr + 3);
    res += arr[2] - arr[0];
    res += arr[2] - arr[1];
    std::cout << res << std::endl;
    return 0;
}