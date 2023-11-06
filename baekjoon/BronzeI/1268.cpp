#include <iostream>

int main()
{
    int N;
    std::cin >> N;
    int arr[N][5];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cout << i << j << ": " << arr[i][j] << ' ';
        }
        std::cout << '\n';
    }
    int ans[N] = {
        0,
    };
    for (int j = 0; j < 5; j++)
    {
        for (int i = j; i < N; i++)
        {
            for (int k = j; k < N; k++)
            {
                std::cout << "arr[" << i << "][" << j << "]" << arr[i][j] << " == "
                          << "arr[" << k << "][" << j << "]" << arr[k][j] << '\n';
                if (arr[i][j] == arr[k][j])
                    ans[i]++;
            }
        }
    }
    for (int i : ans)
    {
        std::cout << i << " ";
    }
    std::cout << "\n";
    return 0;
}

// 3
// 1 1 1 1 1
// 1 2 3 4 5
// 5 4 3 2 1