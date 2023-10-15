#include <algorithm>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int N, M;
    std::cin >> N >> M;
    int mergedArray[N + M];
    for (int i = 0; i < N + M; i++)
        std::cin >> mergedArray[i];
    std::sort(mergedArray, mergedArray + N + M);
    for (int i : mergedArray)
        std::cout << i << ' ';
    return 0;
}