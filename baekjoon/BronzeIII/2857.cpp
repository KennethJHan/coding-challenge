#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    std::string s;
    bool flag = false;
    for (int i = 0; i < 5; i++) {
        std::cin >> s;
        if (s.find("FBI") != std::string::npos) {
            std::cout << i + 1 << ' ';
            flag = true;
        }
    }
    if (!flag)
        std::cout << "HE GOT AWAY!";
    return 0;
}