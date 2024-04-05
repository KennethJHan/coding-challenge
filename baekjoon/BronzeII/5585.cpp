#include <iostream>

int main() {
    int N, tmp, cnt = 0;
    std::cin >> N;
    N = 1000 - N;

    tmp = N / 500;
    cnt += tmp;
    N = N - tmp * 500;

    tmp = N / 100;
    cnt += tmp;
    N = N - tmp * 100;

    tmp = N / 50;
    cnt += tmp;
    N = N - tmp * 50;

    tmp = N / 10;
    cnt += tmp;
    N = N - tmp * 10;

    tmp = N / 5;
    cnt += tmp;
    N = N - tmp * 5;

    tmp = N / 1;
    cnt += tmp;
    N = N - tmp * 1;

    std::cout << cnt << '\n';
    return 0;
}