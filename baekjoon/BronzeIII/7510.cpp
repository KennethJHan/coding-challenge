#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int N, t1, t2, t3;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::vector<int> v;
        std::cin >> t1 >> t2 >> t3;
        v.push_back(t1);
        v.push_back(t2);
        v.push_back(t3);
        std::sort(v.begin(), v.end());
        std::cout << "Scenario #" << i + 1 << ":" << std::endl;
        if (v[0] * v[0] + v[1] * v[1] == v[2] * v[2])
            std::cout << "yes" << std::endl;
        else
            std::cout << "no" << std::endl;
        std::cout << '\n';
    }
    return 0;
}