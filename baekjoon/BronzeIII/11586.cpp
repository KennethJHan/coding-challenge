#include <iostream>
#include <vector>

int main() {
    int N, K;
    std::cin >> N;
    std::vector<std::string> v;
    std::string s;
    for (int i = 0; i < N; i++) {
        std::cin >> s;
        v.push_back(s);
    }

    std::cin >> K;
    if (K == 1) {
        for (std::string s : v) {
            std::cout << s << std::endl;
        }
    } else if (K == 2) {
        for (int i = 0; i < N; i++) {
            s = v[i];
            for (int j = N - 1; j >= 0; j--) {
                std::cout << s[j];
            }
            std::cout << '\n';
        }
    } else if (K == 3) {
        for (int i = N - 1; i >= 0; i--) {
            std::cout << v[i] << std::endl;
        }
    }

    return 0;
}

// 8
// OOOOOOOO
// OKKOOEEO
// OKKOOEEO
// OOOSSOOO
// OOOSSOOO
// OAOOOOAO
// OOAAAAOO
// OOOOOOOO
// 3