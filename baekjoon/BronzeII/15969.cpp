#include <algorithm>
#include <iostream>

int main() {
    int N, tmp;
    std::cin >> N;
    std::vector<int> v;
    for (int i = 0; i < N; i++) {
        std::cin >> tmp;
        v.push_back(tmp);
    }
    std::sort(v.begin(), v.end());
    std::cout << v[N - 1] - v[0] << std::endl;
    return 0;
}