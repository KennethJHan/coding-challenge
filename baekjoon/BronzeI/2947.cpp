#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int arr[5];
    int tmp;
    int first = 0;
    for (int i = 0; i < 5; i++)
        std::cin >> arr[i];

    while (true) {
        if (arr[0] == 1 && arr[1] == 2 && arr[2] == 3 && arr[3] == 4 &&
            arr[4] == 5) {
            std::cout << arr[0] << ' ' << arr[1] << ' ' << arr[2] << ' '
                      << arr[3] << ' ' << arr[4] << '\n';
            break;
        }

        for (int i = 0; i < 4; i++) {
            if (arr[i] > arr[i + 1]) {
                if (first != 0) {
                    std::cout << arr[0] << ' ' << arr[1] << ' ' << arr[2] << ' '
                              << arr[3] << ' ' << arr[4] << '\n';
                }
                first = 1;
                tmp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = tmp;
            }
        }
    }
    return 0;
}

// 동혁이는 나무 조각을 다음과 같은 과정을 거쳐서 1, 2, 3, 4, 5 순서로 만들려고
// 한다.

// 첫 번째 조각의 수가 두 번째 수보다 크다면, 둘의 위치를 서로 바꾼다.
// 두 번째 조각의 수가 세 번째 수보다 크다면, 둘의 위치를 서로 바꾼다.
// 세 번째 조각의 수가 네 번째 수보다 크다면, 둘의 위치를 서로 바꾼다.
// 네 번째 조각의 수가 다섯 번째 수보다 크다면, 둘의 위치를 서로 바꾼다.
// 만약 순서가 1, 2, 3, 4, 5 순서가 아니라면 1 단계로 다시 간다.
// 처음 조각의 순서가 주어졌을 때, 위치를 바꿀 때 마다 조각의 순서를 출력하는
// 프로그램을 작성하시오.