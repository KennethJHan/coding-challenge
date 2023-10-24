#include <iostream>

bool check_eugene(std::string &s) {
    bool b = false;
    if (s.length() == 1)
        return b;

    for (int i = 1; i < s.length(); i++) {
        int f_res = 1;
        int b_res = 1;
        std::string forward = s.substr(0, i);
        std::string back = s.substr(i);
        for (char num : forward)
            f_res *= atoi(&num);
        for (char num : back)
            b_res *= atoi(&num);
        // std::cout << f_res << ", " << b_res << std::endl;
        if (f_res == b_res) {
            b = true;
            break;
        }
    }
    return b;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    std::string s;
    std::cin >> s;
    bool b = check_eugene(s);
    if (b)
        std::cout << "YES" << '\n';
    else
        std::cout << "NO" << '\n';
    return 0;
}