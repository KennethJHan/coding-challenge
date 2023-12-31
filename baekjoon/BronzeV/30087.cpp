#include <iostream>

int main()
{
    int N;
    std::cin >> N;
    std::string s;
    for (int i = 0; i < N; i++)
    {
        std::cin >> s;
        if (s == "Algorithm")
            std::cout << 204 << std::endl;
        else if (s == "DataAnalysis")
            std::cout << 207 << std::endl;
        else if (s == "ArtificialIntelligence")
            std::cout << 302 << std::endl;
        else if (s == "CyberSecurity")
            std::cout << "B101" << std::endl;
        else if (s == "Network")
            std::cout << 303 << std::endl;
        else if (s == "Startup")
            std::cout << 501 << std::endl;
        else if (s == "TestStrategy")
            std::cout << 105 << std::endl;
    }
    return 0;
}