#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

int main()
{
    int N;
    std::cin >> N;
    std::vector<double> v(N);
    for (int i = 0; i < N; i++)
        std::cin >> v[i];
    std::sort(v.begin(), v.end());
    for (int i = 0; i < 7; i++)
        std::cout << std::fixed << std::setprecision(3) << v[i] << std::endl;
    return 0;
}