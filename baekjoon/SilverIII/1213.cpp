#include <iostream>

int main() {
    int arr[26] = {
        0,
    };
    std::string s;
    std::cin >> s;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        arr[c - 65] += 1;
    }

    int even = 0, odd = 0;
    for (int i = 0; i < 26; i++)
        arr[i] % 2 == 0 ? even += 1 : odd += 1;

    return 0;
}