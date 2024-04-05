#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::vector<int> v(10);
        for (int j = 0; j < 10; j++)
            std::cin >> v[j];
        std::sort(v.begin(), v.end());
        std::cout << v[7] << std::endl;
    }
    return 0;
}