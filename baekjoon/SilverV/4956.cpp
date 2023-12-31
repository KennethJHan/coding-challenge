#include <iostream>
#include <set>
#include <string>

// 모음(a,e,i,o,u) 하나를 반드시 포함하여야 한다.
// 모음이 3개 혹은 자음이 3개 연속으로 오면 안 된다.
// 같은 글자가 연속적으로 두번 오면 안되나, ee 와 oo는 허용한다.

int main() {
    std::string s;
    while (true) {
        std::cin >> s;
        if (s == "end")
            break;

        // check vowel exist
        bool vowel = false;
        if (s.find('a') != std::string::npos)
            vowel = true;
        else if (s.find('e') != std::string::npos)
            vowel = true;
        else if (s.find('i') != std::string::npos)
            vowel = true;
        else if (s.find('o') != std::string::npos)
            vowel = true;
        else if (s.find('u') != std::string::npos)
            vowel = true;

        // check 3 vowels or consonants in a row
        std::set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

        bool three = false;
        for (int i = 0; i < s.size() - 2; i++) {
            std::cout << s[i] << s[i + 1] << s[i + 2] << '\n';
            if (s[i] == s[i + 1] && s[i + 1] == s[i + 2]) {
                if (s[i] == 'e' || s[i] == 'o')
                    continue;
                three = true;
                break;
            }
        }

        // check two same letters in a row
        bool two = false;
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == s[i + 1]) {
                two = true;
                break;
            }
        }

        // print result
        if (vowel && !three && !two)
            std::cout << '<' << s << "> is acceptable.\n";
        else
            std::cout << '<' << s << "> is not acceptable.\n";
    }
    return 0;
}