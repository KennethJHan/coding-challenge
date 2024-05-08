#include <iostream>

int main() {
    int N, res = 0;
    std::string S;
    std::cin >> N >> S;
    for (char c : S) {
        if (c == 'j' || c == 'i')
            res += 2;
        else if (c == 'o')
            res += 1;
    }
    std::cout << res << std::endl;
    return 0;
}