#include <iostream>

int count_stroke(std::string &s) {
    int strokes = 0;
    for (char c : s) {
        if (c == 'j' || c == 'i')
            strokes += 2;
        else if (c == 'o')
            strokes += 1;
    }
    return strokes;
}