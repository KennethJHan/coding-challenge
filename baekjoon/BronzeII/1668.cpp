#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    std::vector<int> v;
    for (int i = 0; i < N; i++) {
        int tmp;
        std::cin >> tmp;
        v.push_back(tmp);
    }
    int res1 = 1, res2 = 1;
    int crit1 = v[0];
    int crit2 = v[v.size() - 1];
    for (int i = 1; i < v.size(); i++) {
        if (v[i] > crit1) {
            crit1 = v[i];
            res1++;
        }
    }
    for (int i = v.size() - 2; i >= 0; i--) {
        if (v[i] > crit2) {
            crit2 = v[i];
            res2++;
        }
    }
    std::cout << res1 << '\n' << res2 << '\n';
    return 0;
}