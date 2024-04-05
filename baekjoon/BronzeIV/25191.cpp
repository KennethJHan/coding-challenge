#include <iostream>

int main() {
    int chicken, cola, beer, result;
    std::cin >> chicken >> cola >> beer;
    if (chicken <= cola / 2 + beer)
        result = chicken;
    else
        result = cola / 2 + beer;
    std::cout << result << std::endl;
    return 0;
}
// 5 4 2 -> 4
// 3 4 2 -> 3