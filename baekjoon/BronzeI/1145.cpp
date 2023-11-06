#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int n = 1;
    int arr[5];
    std::cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    while (true)
    {
        int cnt = 0;
        for (int i = 0; i < 5; i++)
        {
            if (n % arr[i] == 0)
                cnt++;

            if (cnt >= 3)
            {
                std::cout << n << '\n';
                return 0;
            }
        }
        n++;
    }
    return 0;
}