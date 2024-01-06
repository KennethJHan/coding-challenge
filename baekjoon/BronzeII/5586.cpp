#include <iostream>

int main() {
    std::string s;
    std::cin >> s;
    int joi = 0;
    int ioi = 0;
    for (int i = 0; i < s.length() - 2; i++) {
        // std::string tmp = {s[i], s[i + 1], s[i + 2]};
        std::string tmp;
        tmp += s[i];
        tmp += s[i + 1];
        tmp += s[i + 2];
        if (tmp == "JOI")
            joi++;
        else if (tmp == "IOI")
            ioi++;
    }
    std::cout << joi << '\n' << ioi << std::endl;
    return 0;
}