#include <iostream>

int main() {
    int T, V, E, S;
    std::cin >> T;
    for (int i = 0; i < T; i++) {
        std::cin >> V >> E;
        S = 2 - V + E;
        std::cout << S << '\n';
    }
    return 0;
}