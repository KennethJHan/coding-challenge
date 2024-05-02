#include <iostream>

int main() {
    int t, a, d, g, score_max = 0, score;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        std::cin >> a >> d >> g;
        score = a * (d + g);
        if (a == d + g)
            score *= 2;
        if (score > score_max)
            score_max = score;
    }
    std::cout << score_max << std::endl;
    return 0;
}