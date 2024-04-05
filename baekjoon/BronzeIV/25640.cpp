#include <iostream>

int main() {
    std::string s, tmp;
    std::cin >> s;
    int n, cnt = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> tmp;
        if (tmp == s)
            cnt++;
    }
    std::cout << cnt << std::endl;
    return 0;
}