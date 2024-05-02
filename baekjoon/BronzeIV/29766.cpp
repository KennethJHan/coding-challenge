#include <iostream>

int check_substr(std::string &s1, std::string &s2) {
    int cnt = 0;
    for (int i = 0; i < s1.size(); i++) {
        if (s1.substr(i, s2.size()) == s2)
            cnt++;
    }
    return cnt;
}

int main() {
    std::string s1;
    std::cin >> s1;
    std::string s2 = "DKSH";
    std::cout << check_substr(s1, s2) << '\n';
    return 0;
}