#include <iostream>

int main() {
    int T, N, p1, p2;
    char p1c;
    char p2c;
    std::cin >> T;
    for (int i = 0; i < T; i++) {
        std::cin >> N;
        p1 = 0;
        p2 = 0;
        for (int j = 0; j < N; j++) {
            std::cin >> p1c >> p2c;
            if (p1c == 'R') {
                if (p2c == 'P')
                    p2++;
                else if (p2c == 'S')
                    p1++;
            } else if (p1c == 'P') {
                if (p2c == 'R')
                    p1++;
                else if (p2c == 'S')
                    p2++;
            } else if (p1c == 'S') {
                if (p2c == 'R')
                    p2++;
                else if (p2c == 'P')
                    p1++;
            }
        }
        if (p1 > p2)
            std::cout << "Player 1" << std::endl;
        else if (p1 < p2)
            std::cout << "Player 2" << std::endl;
        else
            std::cout << "TIE" << std::endl;
    }

    return 0;
}

// 3
// 2
// R P
// S R
// 3
// P P
// R S
// S R
// 1
// P R