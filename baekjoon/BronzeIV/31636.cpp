#include <iostream>

bool check_consecutive(std::string &s, int &num) {
    bool result = false;
    int consecutive = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'o')
            consecutive++;
        else
            consecutive = 0;
        if (consecutive >= num) {
            result = true;
            break;
        }
    }

    return result;
}

int main() {
    int N;
    std::string s;
    std::cin >> N >> s;
    int num = 3;
    if (check_consecutive(s, num))
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;

    return 0;
}
