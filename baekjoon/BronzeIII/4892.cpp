#include <iostream>

int main() {
    int n0, n1, n2, n3, n4, cnt = 1;
    std::string odd_even;
    while (true) {
        std::cin >> n0;
        if (n0 == 0)
            break;
        n1 = 3 * n0;
        if (n1 % 2 == 0) {
            odd_even = "even";
            n2 = n1 / 2;
        } else {
            odd_even = "odd";
            n2 = (n1 + 1) / 2;
        }
        n3 = 3 * n2;
        n4 = n3 / 9;
        std::cout << cnt << ". " << odd_even << " " << n4 << std::endl;
        cnt++;
    }
    return 0;
}