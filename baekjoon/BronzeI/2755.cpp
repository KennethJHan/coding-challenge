#include <cmath>
#include <iomanip>
#include <iostream>
#include <unordered_map>

int main() {
    int N, credit_sum = 0;
    double score_total = 0.0;
    std::cin >> N;
    std::unordered_map<std::string, double> score_map;
    score_map["A+"] = 4.3;
    score_map["A0"] = 4.0;
    score_map["A-"] = 3.7;
    score_map["B+"] = 3.3;
    score_map["B0"] = 3.0;
    score_map["B-"] = 2.7;
    score_map["C+"] = 2.3;
    score_map["C0"] = 2.0;
    score_map["C-"] = 1.7;
    score_map["D+"] = 1.3;
    score_map["D0"] = 1.0;
    score_map["D-"] = 0.7;
    score_map["F"] = 0.0;
    for (int i = 0; i < N; i++) {
        std::string subject;
        int credit;
        std::string score;
        std::cin >> subject >> credit >> score;
        credit_sum += credit;
        score_total += credit * score_map[score];
    }
    std::cout << std::fixed << std::setprecision(2)
              << round(score_total / credit_sum * 100) / 100 << std::endl;
    return 0;
}