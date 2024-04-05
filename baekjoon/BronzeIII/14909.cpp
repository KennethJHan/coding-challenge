#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int cnt_pos_num(const std::string &line) {
    int res = 0;
    std::istringstream ss(line);
    std::vector<int> ins;
    std::string in;
    while (ss >> in) {
        int tmp = std::stoi(in);
        if (tmp > 0)
            res++;
    }
    return res;
}

int main() {
    int res = 0;
    std::string line;
    std::getline(std::cin, line);
    res = cnt_pos_num(line);
    std::cout << res << std::endl;
    return 0;
}
