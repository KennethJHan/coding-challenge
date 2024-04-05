#include <iostream>

int main() {
    std::string s;
    std::cin >> s;
    int diff = (s[0] - '0') - (s[1] - '0');
    for (int i = 0; i < s.size() - 1; i++) {
        if (diff != (s[i] - '0') - (s[i + 1] - '0')) {
            std::cout << "흥칫뿡!! <(￣ ﹌ ￣)>" << std::endl;
            return 0;
        }
    }
    std::cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!" << std::endl;
    return 0;
}
