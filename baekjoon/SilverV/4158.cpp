#include <iostream>

int main()
{
    int N, M, tmp;
    while (true)
    {
        std::cin >> N >> M;
        if (N == 0 && M == 0)
            break;
        int arr_n[N] = {
            0,
        };
        int arr_m[M] = {
            0,
        };
        for (int i = 0; i < N; i++)
        {
            std::cin >> tmp;
            arr_n[tmp] = 1;
        }
        for (int i = 0; i < M; i++)
        {
            std::cin >> tmp;
            arr_m[tmp] = 1;
        }
        int cnt = 0;
        int max_num = N > M ? N : M;
        for (int i = 0; i < max_num; i++)
        {
            if (arr_n[i] == 1 && arr_m[i] == 1)
                cnt++;
        }
        std::cout << cnt << std::endl;
    }
    return 0;
}