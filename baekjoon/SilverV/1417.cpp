#include <iostream>
#include <vector>

int main()
{
    int N;
    std::cin >> N;
    std::vector<int> v;
    for (int i = 0; i < N; i++)
    {
        int tmp;
        std::cin >> tmp;
        v.push_back(tmp);
    }
    int candidate = v[0];
    int cnt = 0;
    while (true)
    {
        if (v.size() == 1)
            break;
        int max = 0;
        int idx = 0;
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i] > max)
            {
                max = v[i];
                idx = i;
            }
        }
        if (candidate > max)
            break;
        v[idx]--;
        candidate++;
        cnt++;
    }
    std::cout << cnt << std::endl;
    return 0;
}