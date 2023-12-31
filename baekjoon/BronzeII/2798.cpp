#include <iostream>

int main()
{
    int N, M;
    std::cin >> N >> M;
    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        std::cin >> arr[i];
    int max = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j < N; j++)
        {
            for (int k = 2; k < N; k++)
            {
                if (i == j || j == k || k == i)
                    continue;
                int sum = arr[i] + arr[j] + arr[k];
                if (sum <= M && sum > max)
                    max = sum;
            }
        }
    }
    std::cout << max << std::endl;
    return 0;
}