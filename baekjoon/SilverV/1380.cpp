#include <iostream>

int main() {
    int N;
    int sn = 0;
    while (true) {
        sn++;
        std::cin >> N;
        if (N == 0)
            break;

        std::vector<std::string> names;
        for (int i = 0; i < N; i++) {
            std::string s;
            std::cin.ignore();
            std::getline(std::cin, s);
            names.push_back(s);
        }
        int arr[101] = {
            0,
        };
        for (int i = 0; i < 2 * i - 1; i++) {
            int num;
            std::string tmp;
            std::cin >> num >> tmp;
            if (arr[num] == 0)
                arr[num] = 1;
            else if (arr[num] == 1)
                arr[num] = 0;
        }
        for (int i = 1; i < N + 1; i++) {
            if (arr[i] == 1) {
                std::cout << sn << ' ' << arr[i] << '\n';
            }
        }
    }
    return 0;
}