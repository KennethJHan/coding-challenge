#include <iostream>
#include <vector>

int main()
{
    int a, b;
    std::cin >> a >> b;
    int cnt = 0;
    int tmp;
    std::vector<int> arr(1000000001, 0);
    for (int i = 0; i < a; i++)
    {
        std::cin >> tmp;
        arr[tmp] = 1;
    }
    for (int i = 0; i < b; i++)
    {
        std::cin >> tmp;
        if (arr[tmp] == 1)
            cnt++;
    }
    std::cout << a + b - cnt * 2 << std::endl;
    return 0;
}