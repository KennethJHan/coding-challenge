#include <iostream>

bool check_s(int num1, int num2) {
    bool b = false;
    int remainder, sum = 0;
    while (num2 > 0) {
        remainder = num2 % 10;
        sum += remainder;
        num2 /= 10;
    }
    if (num1 % sum == 0)
        b = true;
    return b;
}

int main() {
    int N, cnt = 0;
    std::cin >> N;
    for (int i = 1; i <= N; i++) {
        bool b = check_s(i, i);
        if (b == true)
            cnt++;
    }
    std::cout << cnt << std::endl;
    return 0;
}