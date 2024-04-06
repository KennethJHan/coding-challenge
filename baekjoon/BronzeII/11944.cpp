#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    std::string N;
    int M;
    std::cin >> N >> M;
    std::string s = "";
    for (int i = 0; i < std::stoi(N); i++)
        s += N;
    if (s.size() < M)
        M = s.size();
    for (int i = 0; i < M; i++)
        std::cout << s[i];
    std::cout << '\n';
    return 0;
}