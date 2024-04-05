#include <iostream>

int main() {
    int N;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::string pf = "PASS";
        std::string s;
        int sum = 0;
        double n1, n2, n3;
        std::cin >> s >> n1 >> n2 >> n3;
        sum += (n1 + n2 + n3);
        if (n1 / 35 < 0.3 || n2 / 25 < 0.3 || n3 / 40 < 0.3)
            pf = "FAIL";
        if ((n1 + n2 + n3) / 100 < 0.55)
            pf = "FAIL";
        std::cout << s << ' ' << sum << ' ' << pf << std::endl;
    }
    return 0;
}