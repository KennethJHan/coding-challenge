#include <iostream>
#include <string>

bool hasDigit(int num, char digit)
{
    std::string num_string = std::to_string(num);
    for (char c : num_string)
    {
        if (c == digit)
            return true;
    }
    return false;
}

int main()
{
    int N, cnt = 0;
    char L;
    int res = 0;
    std::cin >> N >> L;
    while (true)
    {
        res++;
        if (!hasDigit(res, L))
            cnt++;
        if (cnt == N)
            break;
    }
    std::cout << res << std::endl;
    return 0;
}