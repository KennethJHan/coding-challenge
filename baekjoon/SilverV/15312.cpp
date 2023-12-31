#include <iostream>
#include <vector>

int main()
{
    std::string a, b;
    std::cin >> a >> b;
    int len = a.length();
    int arr[26] = {3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};
    std::vector<int> v;
    for (int i = 0; i < a.size(); i++)
    {
        v.push_back(arr[a[i] - 'A']);
        v.push_back(arr[b[i] - 'A']);
    }

    while (v.size() > 2)
    {
        std::vector<int> tmp;
        for (int i = 0; i < v.size() - 1; i++)
        {
            tmp.push_back((v[i] + v[i + 1]) % 10);
        }
        v = tmp;
    }

    std::cout << v[0] << v[1] << std::endl;
    return 0;
}