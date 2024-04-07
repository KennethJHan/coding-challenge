#include <iostream>

int main() {
    int N;
    std::cin >> N;
    std::cin.ignore();
    for (int i = 0; i < N; i++) {
        std::string str;
        std::getline(std::cin, str);
        int start = 0;
        int end = 0;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == ' ') {
                if (end == 0)
                    start = end;
                else
                    start = end + 1;
                end = i;
                for (int j = end - 1; j >= start; j--)
                    std::cout << str[j];
                std::cout << ' ';
            }
        }
        for (int j = str.size() - 1; j >= end; j--) {
            std::cout << str[j];
        }
        std::cout << '\n';
    }

    return 0;
}

// Hello World Haha
// 0123456789012345