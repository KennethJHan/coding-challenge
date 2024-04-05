#include <iostream>

int main() {
    std::string s;
    int tmp, res = 0;
    for (int i = 0; i < 4; i++) {
        std::cin >> s >> tmp;
        if (s == "Es")
            res += (tmp * 21);
        else if (s == "Stair")
            res += (tmp * 17);
    }
    std::cout << res << std::endl;
    return 0;
}