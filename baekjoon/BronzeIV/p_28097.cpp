#include <iostream>

std::pair<int, int> get_res(std::vector<int> &v) {
    std::pair<int, int> p;
    int total = 0, day = 0;
    for (auto num : v) {
        total += num;
        total += 8;
    }
    total -= 8;
    while (true) {
        if (total < 24)
            break;
        total -= 24;
        day += 1;
    }
    p.first = day;
    p.second = total;

    return p;
}