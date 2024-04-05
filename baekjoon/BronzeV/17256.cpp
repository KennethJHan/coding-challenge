#include <iostream>

int main() {
    // a 🍰 b = (a.z + b.x, a.y × b.y, a.x + b.z)
    int arr1[3];
    int arr2[3];
    for (int i = 0; i < 3; i++)
        std::cin >> arr1[i];
    for (int i = 0; i < 3; i++)
        std::cin >> arr2[i];

    std::cout << arr2[0] - arr1[2] << ' ' << arr2[1] / arr1[1] << ' '
              << arr2[2] - arr1[0] << '\n';
    return 0;
}