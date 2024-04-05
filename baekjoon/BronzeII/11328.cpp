#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int N;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::string s1, s2;
        std::cin >> s1 >> s2;
        std::vector<char> v1, v2;
        for (char c : s1)
            v1.push_back(c);
        for (char c : s2)
            v2.push_back(c);
        std::sort(v1.begin(), v1.end());
        std::sort(v2.begin(), v2.end());
        if (v1 == v2)
            std::cout << "Possible\n";
        else
            std::cout << "Impossible\n";
    }
    return 0;
}