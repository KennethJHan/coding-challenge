#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int tmp;
    std::vector<int> v;
    for (int i = 0; i < 3; i++) {
        std::cin >> tmp;
        v.push_back(tmp);
    }
    std::sort(v.begin(), v.end());
    if (v[0] + v[1] == v[2])
        std::cout << 1 << std::endl;
    else
        std::cout << 0 << std::endl;
    return 0;
}