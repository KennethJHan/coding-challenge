#include <iostream>

int main() {
    int N;
    bool flag = false;
    std::string s;
    std::cin >> N;

    // int to string
    s = std::to_string(N);
    for (char c : s) {
        if (c == '7') {
            flag = true;
            break;
        }
    }

    if (flag) {
        // contains 7
        if (N % 7 != 0)
            std::cout << 2 << std::endl;
        else
            std::cout << 3 << std::endl;
    } else {
        // does not contain 7
        if (N % 7 != 0)
            std::cout << 0 << std::endl;
        else
            std::cout << 1 << std::endl;
    }
    return 0;
}

// Print 0 if the number does not contain 7 and is not divisible by 7.
// Print 1 if the number does not contain 7 but is divisible by 7.
// Print 2 if the number does contain 7 but is not divisible by 7.
// Print 3 if the number does contain 7 and is divisible by 7.