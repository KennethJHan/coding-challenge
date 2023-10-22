#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int N;
    std::cin >> N;
    std::unordered_map<char, int> m;
    std::string tmp;
    for (int i = 0; i < N; i++) {
        std::cin >> tmp;
        m[tmp[0]]++;
    }
    std::string result;
    std::vector<char> v;
    for (const auto &pair : m) {
        // std::cout << pair.first << ": " << pair.second << '\n';
        if (pair.second >= 5)
            v.push_back(pair.first);
    }
    if (v.size() >= 1) {
        std::sort(v.begin(), v.end());
        for (char c : v)
            result += c;
    } else {
        result = "PREDAJA";
    }
    std::cout << result << '\n';
    return 0;
}