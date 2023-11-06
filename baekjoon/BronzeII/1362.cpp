#include <iostream>

int main()
{
    int o, w;
    char c;
    int n;
    bool alive = true;
    std::string status = ":-)";
    int sn = 1;
    while (true)
    {
        if (o == 0 && w == 0)
            break;
        std::cout << "c: " << c << ", w: " << w << std::endl;
        if (!alive)
            break;

        std::cout << "Enter o, w: ";
        std::cin >> o >> w;
        while (true)
        {
            std::cout << "Enter c, n: ";
            std::cin >> c >> n;
            std::cout << "w: " << w << ", o: " << o << std::endl;
            if (w <= 0)
            {
                alive = false;
                status = "RIP";
            }
            else if (w > o / 2 && w < o * 2)
                status = ":-)";
            else
                status = ":-(";
            if (c == '0' && n == 0)
                break;

            if (!alive)
            {
                std::cout << sn << " " << status << std::endl;
                break;
            }

            if (c == '#' && n == 0)
            {
                std::cout << sn << " " << status << std::endl;
                alive = true;
                sn++;
                break;
            }

            if (c == 'E')
            {
                w -= n;
            }
            else if (c == 'F')
            {
                w += n;
            }
        }
    }
    return 0;
}