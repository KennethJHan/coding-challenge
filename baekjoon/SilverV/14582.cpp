#include <iostream>

int main() {
    int a[9], b[9], sum1 = 0, sum2 = 0;
    bool flag = false; // flag = true if sum1 > sum2
    for (int i = 0; i < 9; i++)
        std::cin >> a[i];
    for (int i = 0; i < 9; i++)
        std::cin >> b[i];
    for (int i = 0; i < 9; i++) {
        sum1 += a[i];
        if (sum1 > sum2 && flag == false) {
            flag = true;
        }
        sum2 += b[i];
    }
    if (sum1 < sum2 && flag == true)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;
    return 0;
}