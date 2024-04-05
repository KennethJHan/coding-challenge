#include <iostream>
#include <set>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int N, M, tmp;
    std::cin >> N;
    std::set<int> s;
    for (int i = 0; i < N; i++) {
        std::cin >> tmp;
        s.insert(tmp);
    }
    std::cin >> M;
    for (int i = 0; i < M; i++) {
        std::cin >> tmp;
        if (auto search = s.find(tmp); search != s.end())
            std::cout << 1 << '\n';
        else
            std::cout << 0 << '\n';
    }
    return 0;
}