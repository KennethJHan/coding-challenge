#include <iostream>

int main() {
    int N;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        int y = 0, k = 0;
        for (int j = 0; j < 9; j++) {
            int y_tmp, k_tmp;
            std::cin >> y_tmp >> k_tmp;
            y += y_tmp;
            k += k_tmp;
        }
        if (y > k)
            std::cout << "Yonsei" << std::endl;
        else if (y < k)
            std::cout << "Korea" << std::endl;
        else
            std::cout << "Draw" << std::endl;
    }
    return 0;
}