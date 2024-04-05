#include <iostream>

int main() {
    int N, M;
    std::cin >> N >> M;
    if (M == 1 || M == 2)
        std::cout << "NEWBIE!" << std::endl;
    else if (M <= N)
        std::cout << "OLDBIE!" << std::endl;
    else
        std::cout << "TLE!" << std::endl;
    return 0;
}