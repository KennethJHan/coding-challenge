#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int tmp;
    std::vector<int> v;
    for (int i = 0; i < 4; i++) {
        std::cin >> tmp;
        v.push_back(tmp);
    }
    std::sort(v.begin(), v.end());
    std::cout << v[0] * v[2] << std::endl;
    return 0;
}