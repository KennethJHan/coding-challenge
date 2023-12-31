#include <iostream>

bool check_ioi(std::string s)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (k < s.size())
    {
        if (s[k] == 'I')
        {
            i++;
            if (i == 3)
                return true;
        }
        else if (s[k] == 'O')
        {
            j++;
            if (j == 2)
                return true;
        }
        else
        {
            i = 0;
            j = 0;
        }
        k++;
    }
    return false;
}

int main()
{
    int n;
    std::cin >> n;
    std::string s;
    for (int i = 0; i < n; i++)
    {
        std::cin >> s;
        bool b = check_ioi(s);
        if (b)
            std::cout << "Yes" << std::endl;
        else
            std::cout << "No" << std::endl;
    }
    return 0;
}