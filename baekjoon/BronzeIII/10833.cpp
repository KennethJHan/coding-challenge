#include <iostream>

int main() {
    int N, student, apple, remain = 0;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> student >> apple;
        remain += apple % student;
    }
    std::cout << remain << std::endl;
    return 0;
}

// 5
// 24 52
// 13 22
// 5 53
// 23 10
// 7 70

// 3
// 10 20
// 5 5
// 1 13