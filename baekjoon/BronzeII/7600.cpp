#include <iostream>
#include <string>

int main()
{
    while (true)
    {
        std::string line;
        std::getline(std::cin, line);
        if (line == "#")
            break;
        int arr[26] = {
            0,
        };
        for (char c : line)
        {
            int num = (int)c;
            if (num >= 65 && num <= 90)
                arr[num - 65] = 1;
            else if (num >= 97 && num <= 122)
                arr[num - 97] = 1;
        }
        int res = 0;
        for (int n : arr)
            res += n;
        std::cout << res << std::endl;
    }
    return 0;
}

// a: 97
// z: 122
//  : 32
// A: 65
// Z: 90