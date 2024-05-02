#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, std::string> winners;
    winners[1996] = "SPbSU";
    winners[1997] = "SPbSU";
    winners[2000] = "SPbSU";
    winners[2006] = "PetrSU, ITMO";
    winners[2007] = "SPbSU";
    winners[2008] = "SPbSU";
    winners[2013] = "SPbSU";
    winners[2018] = "SPbSU";

    int year;
    std::cin >> year;

    if (winners.find(year) == winners.end()) {
        std::cout << "ITMO" << std::endl;
    } else {
        std::cout << winners[year] << std::endl;
    }
    return 0;
}