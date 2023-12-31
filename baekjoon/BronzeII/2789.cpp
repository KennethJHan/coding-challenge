#include <iostream>

int main()
{
    char S[101];
    std::cin >> S;
    for (int i = 0; S[i]; ++i)
    {
        if (S[i] == 'C' || S[i] == 'A' || S[i] == 'M' || S[i] == 'B' || S[i] == 'R' || S[i] == 'I' || S[i] == 'D' || S[i] == 'G' || S[i] == 'E')
            continue;
        std::cout << S[i];
    }
    return 0;
}