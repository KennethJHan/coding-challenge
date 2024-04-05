#include <iostream>

int main() {
    int n;
    for (int i = 0; i < 3; i++) {
        std::cin >> n;
        long long sum = 0;
        long long tmp;
        for (int j = 0; j < n; j++) {
            std::cin >> tmp;
            sum += tmp;
        }
        if (sum > 0)
            std::cout << "+\n";
        else if (sum < 0)
            std::cout << "-\n";
        else
            std::cout << "0\n";
    }
    return 0;
}