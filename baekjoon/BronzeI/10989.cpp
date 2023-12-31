#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int N, tmp;
    int arr[10000] = {
        0,
    };
    std::cin >> N;

    while (N--)
    {
        std::cin >> tmp;
        arr[tmp - 1]++;
    }
    for (int i = 0; i < 10000; i++)
    {
        while (arr[i]--)
        {
            std::cout << i + 1 << '\n';
        }
    }

    return 0;
}