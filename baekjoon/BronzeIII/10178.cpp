#include <iostream>

std::string get_res(int &c, int &v) {
    std::string res;
    int div = c / v;
    int rem = c % v;
    res = "You get " + std::to_string(div) + " piece(s) and your dad gets " +
          std::to_string(rem) + " piece(s).";

    return res;
}

int main() {
    int N, c, v;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> c >> v;
        std::cout << get_res(c, v) << std::endl;
    }
    return 0;
}

// 5
// 22 3
// 15 5
// 99 8
// 7 4
// 101 5