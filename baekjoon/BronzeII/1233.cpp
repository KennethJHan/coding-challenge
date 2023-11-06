#include <iostream>
#include <unordered_map>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    std::unordered_map<int, int> m;
    for (int i = 1; i < a + 1; i++) {
        for (int j = 1; j < b + 1; j++) {
            for (int k = 1; k < c + 1; k++) {
                m[i + j + k]++;
            }
        }
    }
    int max_count = 0;
    int max_val = 100;
    for (auto &pair : m) {
        // std::cout << pair.first << ": " << pair.second << std::endl;
        if (pair.second > max_count) {
            max_count = pair.second;
            max_val = pair.first;
        } else if (pair.second == max_count) {
            if (pair.first < max_val) {
                max_val = pair.first;
            }
        }
    }
    std::cout << max_val << '\n';
    return 0;
}