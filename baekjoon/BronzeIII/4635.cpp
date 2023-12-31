#include <iostream>

int main()
{
    int n;
    while (true)
    {
        std::cin >> n;
        if (n == -1)
            break;

        int prev_time = 0;
        int total_distance = 0;
        for (int i = 0; i < n; i++)
        {
            int speed, time;
            std::cin >> speed >> time;
            total_distance += speed * (time - prev_time);
            prev_time = time;
        }
        std::cout << total_distance << " miles" << std::endl;
    }
    return 0;
}