#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    std::vector<int> v;
    v.push_back(2);
    for (int i = 0; i < 15; i++)
        v.push_back(v[i] + (v[i] - 1));
    int res = v[N] * v[N];
    std::cout << res << std::endl;
    return 0;
}