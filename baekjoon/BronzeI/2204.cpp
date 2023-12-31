#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    std::string tmp;
    int N;
    while (true) {
        std::cin >> N;
        if (N == 0)
            break;

        std::vector<std::string> s1;
        std::vector<std::string> s2;
        std::vector<std::string> s3;
        for (int i = 0; i < N; i++) {
            std::cin >> tmp;
            s1.push_back(tmp);
            std::transform(tmp.begin(), tmp.end(), tmp.begin(), ::tolower);
            s2.push_back(tmp);
            s3.push_back(tmp);
        }
        std::sort(s2.begin(), s2.end());
        std::string res = s2[0];
        int idx = 0;
        for (int i = 0; i < s3.size(); i++) {
            if (s3[i] == res) {
                idx = i;
                break;
            }
        }
        std::cout << s1[idx] << '\n';
    }
    return 0;
}