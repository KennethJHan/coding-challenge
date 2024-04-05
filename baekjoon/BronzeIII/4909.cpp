#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    double n;
    double res;
    while (true) {
        std::vector<double> v;
        for (int i = 0; i < 6; i++) {
            std::cin >> n;
            v.push_back(n);
        }
        std::sort(v.begin(), v.end());
        if (v[0] == 0 && v[5] == 0)
            break;

        res = (v[1] + v[2] + v[3] + v[4]) / 4;
        std::cout << res << std::endl;
    }
    return 0;
}