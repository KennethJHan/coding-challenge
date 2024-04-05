#include <iostream>

int main() {
    int N, tmp, cnt = 0;
    std::string s;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> s;
        tmp = std::stoi(s.substr(2, s.size() - 1));
        if (tmp <= 90)
            cnt++;
    }
    std::cout << cnt << std::endl;
    return 0;
}