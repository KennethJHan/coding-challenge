#include <iostream>

int main() {
    int N, a, b = 1, c, cnt = 0, tmp;
    std::cin >> N;
    for (int i = 2; i < N; i += 2) {
        c = i;
        while (true) {
            a = b + 2;
            // std::cout << a << ", " << b << ", " << c << ", " << a + b + c
            //           << ", " << N << std::endl;
            // std::cin >> tmp;
            if (a + b + c == N) {
                if (!(a == 0 || b == 0 || c == 0)) {
                    cnt++;
                    std::cout << a << ", " << b << ", " << c << ", "
                              << a + b + c << ", " << N << ", cnt:" << cnt
                              << std::endl;
                }
            }
            b++;
            if (a + b + c > N) {
                a = 0;
                b = 0;
                break;
            }
        }
        if (a + b + c > N)
            break;
    }
    std::cout << cnt << std::endl;
    return 0;
}

// a = 남규 = 영훈 + 2
// b = 영훈
// c = 택희 != 홀수

// 남는 사탕은 없어야 한다.
// 남규는 영훈이보다 2개 이상 많은 사탕을 가져야 한다.
// 셋 중 사탕을 0개 받는 사람은 없어야 한다.
// 택희가 받는 사탕의 수는 홀수개가 되어서는 안 된다.