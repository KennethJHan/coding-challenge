#include <iomanip>
#include <iostream>

int main() {
    int T, N, C;
    double G;
    std::cin >> T;
    for (int i = 0; i < T; i++) {
        std::cin >> N;
        int C_sum = 0;
        double G_sum = 0.0;
        for (int j = 0; j < N; j++) {
            std::cin >> C >> G;
            C_sum += C;
            G_sum += (C * G);
        }
        std::cout << std::fixed << std::setprecision(1) << C_sum << ' '
                  << G_sum / C_sum << std::endl;
    }
    return 0;
}