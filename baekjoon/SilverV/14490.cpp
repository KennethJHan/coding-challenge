#include <iostream>

int main() {
    std::string nm;
    int tmp, gcd;
    std::cin >> nm;
    tmp = nm.find(':');
    int n = std::stoi(nm.substr(0, tmp));
    int m = std::stoi(nm.substr(tmp + 1));
    tmp = (n > m) ? m : n;
    for (int i = 1; i <= tmp; i++) {
        if (n % i == 0 && m % i == 0)
            gcd = i;
    }
    std::cout << n / gcd << ':' << m / gcd << std::endl;
    return 0;
}