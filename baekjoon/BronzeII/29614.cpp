#include <iostream>

int main() {
    std::string s;
    std::cin >> s;
    double sum = 0.0, cnt = 0.0;
    for (char c : s) {
        if (c == 'A')
            sum += 4;
        else if (c == 'B')
            sum += 3;
        else if (c == 'C')
            sum += 2;
        else if (c == 'D')
            sum += 1;
        if (c == '+')
            sum += 0.5;
        else
            cnt += 1;
    }
    std::cout << sum / cnt << std::endl;
    return 0;
}