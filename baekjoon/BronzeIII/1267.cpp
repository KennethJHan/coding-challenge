#include <iostream>

int main() {
    int N, t, Y = 0, M = 0;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> t;
        int y_tmp1 = t / 30;
        int y_tmp2 = t % 30;
        Y += y_tmp1 * 10;
        // if (y_tmp2 != 0)
        //     Y += 10;
        Y += 10;

        int m_tmp1 = t / 60;
        int m_tmp2 = t % 60;
        M += m_tmp1 * 15;
        // if (m_tmp2 != 0)
        //     M += 15;
        M += 15;
    }
    std::cout << "Y: " << Y << ", M: " << M << std::endl;
    if (Y == M)
        std::cout << "Y M " << Y << std::endl;
    else if (Y < M)
        std::cout << "Y " << Y << std::endl;
    else
        std::cout << "M " << M << std::endl;
    return 0;
}