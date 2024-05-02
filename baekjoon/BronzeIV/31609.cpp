#include <iostream>
#include <set>

int main() {
    int n;
    std::set<int> s;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        std::cin >> tmp;
        s.insert(tmp);
    }

    for (auto i : s)
        std::cout << i << " ";

    return 0;
}