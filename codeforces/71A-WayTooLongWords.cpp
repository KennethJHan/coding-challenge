#include <iostream>

void convert(std::string &s) {
    if (s.length() < 11) {
        std::cout << s << std::endl;
    } else {
        std::cout << s[0] << s.length() - 2 << s[s.length() - 1] << std::endl;
    }
}

int main() {
    int N;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::string s;
        std::cin >> s;
        convert(s);
    }
    return 0;
}