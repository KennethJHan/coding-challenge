#include <iostream>

int main()
{
    double s, d, i, l, n;
    int cnt = 0;
    std::cin >> s >> d >> i >> l >> n;
    double total = s + d + i + l;
    double avr = 0.0;
    while (true)
    {
        avr = total / 4;
        if (avr >= n)
            break;
        total++;
        cnt++;
    }
    std::cout << cnt << std::endl;
    return 0;
}