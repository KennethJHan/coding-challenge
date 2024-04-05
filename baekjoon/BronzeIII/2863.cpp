#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

int main() {
    double A, B, C, D, tmp;
    int idx;
    std::cin >> A >> B >> C >> D;
    std::map<int, double> m;
    m[0] = A / C + B / D;
    m[1] = C / D + A / B;
    m[2] = D / B + C / A;
    m[3] = B / A + D / C;

    std::vector<double> v;
    v.push_back(A / C + B / D);
    v.push_back(C / D + A / B);
    v.push_back(D / B + C / A);
    v.push_back(B / A + D / C);
    std::sort(v.begin(), v.end());

    // for (double d : v)
    //     std::cout << d << ' ';
    // std::cout << '\n';

    if (v[3] == v[2])
        idx = 2;
    else if (v[2] == v[1])
        idx = 1;
    else if (v[1] == v[0])
        idx = 0;
    else
        idx = 3;
    // std::cout << "v[" << idx << "]: " << v[idx] << std::endl;
    for (const auto &pair : m) {
        // std::cout << pair.first << ": " << pair.second << std::endl;
        if (pair.second == v[idx]) {
            // std::cout << pair.first << std::endl;
            // std::cout << pair.first << ": " << pair.second << std::endl;
            std::cout << pair.first << std::endl;
            break;
        }
    }
    return 0;
}