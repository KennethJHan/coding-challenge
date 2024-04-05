#include <iostream>

int main() {
    int L;
    std::string s;
    std::cin >> L >> s;
    long long sum = 0, r = 1;
    for (int i = 0; i < L; i++) {
        sum += (s[i] - 'a' + 1) * r;
        r *= 31;
        sum %= 1234567891;
        r %= 1234567891;
    }
    std::cout << sum << std::endl;
    return 0;
}