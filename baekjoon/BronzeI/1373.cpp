#include <iostream>

long long binToDec(std::string binNum) {
    long long decNum = 0;
    int digit = 1;
    for (int i = binNum.length() - 1; i >= 0; i--) {
        if (binNum[i] == '1') {
            decNum += digit;
        }
        digit *= 2;
    }
    return decNum;
}

std::string decToOct(long long decNum) {
    std::string oct = "";
    while (decNum != 0) {
        long long remainder = decNum % 8;
        oct = std::to_string(remainder) + oct;
        decNum /= 8;
    }
    return oct;
}

int main() {
    std::string N;
    std::cin >> N;
    std::cout << decToOct(binToDec(N)) << '\n';
    return 0;
}