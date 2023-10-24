#include <iostream>
#include <vector>
#include <algorithm>

bool comp(std::pair<int, int> a, std::pair<int, int> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    else
        return a.first < b.first;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int N;
    std::cin >> N;
    std::vector<std::pair<int, int>> v;
    for (int i = 0; i < N; i++)
    {
        std::pair<int, int> p;
        std::cin >> p.first >> p.second;
        v.push_back(p);
    }
    std::sort(v.begin(), v.end(), comp);
    for (std::pair<int, int> p : v)
        std::cout << p.first << ' ' << p.second << '\n';
    return 0;
}