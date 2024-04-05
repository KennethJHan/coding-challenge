#include <iostream>
#include <sstream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    std::string s;
    std::stringstream ss;
    for (int i = 1; i <= 100000; i++) {
        ss << i;
    }
    std::string tmp = ss.str();
    std::cin >> s;
    size_t pos = tmp.find(s);
    std::cout << pos + 1 << std::endl;
    return 0;
}