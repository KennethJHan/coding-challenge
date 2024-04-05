#include <iostream>

int main() {
    std::string s;
    int res = 0;
    std::cin >> s;
    for (char c : s) {
        int n = c - '0';
        res += n * n * n * n * n;
    }
    std::cout << res << '\n';
    return 0;
}