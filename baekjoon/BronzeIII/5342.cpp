#include <iostream>
#include <unordered_map>
#include <iomanip>

int main()
{
    std::unordered_map<std::string, double> map = {
        {"Paper", 57.99},
        {"Printer", 120.50},
        {"Planners", 31.25},
        {"Binders", 22.50},
        {"Calendar", 10.95},
        {"Notebooks", 11.20},
        {"Ink", 66.95}};
    double total = 0.0;
    std::string item;
    while (true)
    {
        std::cin >> item;
        if (item == "EOI")
            break;

        total += map[item];
    }
    std::cout << '$' << std::fixed << std::setprecision(2) << total << std::endl;
    return 0;
}