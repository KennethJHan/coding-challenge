#include <iostream>

int main()
{
    int n, cnt = 0;
    int arr[101] = {
        0,
    };
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        std::cin >> tmp;
        if (arr[tmp] == 0)
            arr[tmp] = 1;
        else
            cnt++;
    }
    std::cout << cnt << std::endl;
    return 0;
}