#include <iostream>

int main() {
    int N, hamming_distance = 0;
    std::string s1, s2;
    std::cin >> N >> s1 >> s2;
    for (int i = 0; i < N; i++) {
        if (s1[i] != s2[i])
            hamming_distance++;
    }
    std::cout << hamming_distance << std::endl;
    return 0;
}