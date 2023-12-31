#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int K;
    std::cin >> K;
    for (int i = 0; i < K; i++)
    {

        std::vector<int> v;
        int N;
        std::cin >> N;
        for (int j = 0; j < N; j++)
        {
            int score;
            std::cin >> score;
            v.push_back(score);
        }
        std::sort(v.begin(), v.end());
        int max_gap = 0;
        for (int j = 0; j < N - 1; j++)
        {
            int gap = v[j + 1] - v[j];
            if (gap > max_gap)
            {
                max_gap = gap;
            }
        }
        std::cout << "Class " << i + 1 << '\n';
        std::cout << "Max " << v[N - 1] << ", Min " << v[0] << ", Largest gap " << max_gap << '\n';
    }
    return 0;
}