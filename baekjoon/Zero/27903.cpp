// bioinformaticist
// ['a', 'b', 'c', 'f', 'i', 'm', 'n', 'o', 'r', 's', 't']
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;
    v.push_back(98);
    v.push_back(105);
    v.push_back(111);
    v.push_back(105);
    v.push_back(110);
    v.push_back(102);
    v.push_back(111);
    v.push_back(114);
    v.push_back(109);
    v.push_back(97);
    v.push_back(116);
    v.push_back(105);
    v.push_back(99);
    v.push_back(105);
    v.push_back(115);
    v.push_back(116);
    for (char c : v) {
        std::cout << c;
    }
    return 0;
}
