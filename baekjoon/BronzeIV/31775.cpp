#include <iostream>
#include <vector>

int main() {
    std::vector<int> res = {0, 0, 0};
    std::string s;
    for (int i = 0; i < 3; i++) {
        std::cin >> s;
        if (s[0] == 'k') {
            res[0]++;
        } else if (s[1] == 'l') {
            res[1]++;
        } else if (s[2] == 'p') {
            res[2]++;
        }
    }
    if (res[0] == 1 && res[1] == 1 && res[2] == 1)
        std::cout << "GLOBAL" << std::endl;
    else
        std::cout << "PONIX" << std::endl;
    return 0;
}