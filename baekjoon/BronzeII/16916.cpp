#include <iostream>
#include <vector>

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    std::string s1, s2;
    std::cin >> s1 >> s2;
    std::vector<char> v1;
    std::vector<char> v2;
    for (char c : s1)
        v1.push_back(c);
    for (char c : s2)
        v2.push_back(c);
    for (int i = 0; i < v1.size() - v2.size() + 1; i++) {
        std::string s3 = "";
        for (int j = i; j < i + v2.size(); j++) {
            s3 += v1[j];
        }
        if (s3 == s2) {
            std::cout << "1\n";
            return 0;
        }
    }
    std::cout << "0\n";
    return 0;
}