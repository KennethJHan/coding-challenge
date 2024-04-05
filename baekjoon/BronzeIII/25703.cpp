#include <iostream>

int main() {
    int N;
    std::cin >> N;
    std::cout << "int a;" << std::endl;
    for (int i = 0; i < N; i++) {
        std::cout << "int ";
        for (int j = 0; j < i + 1; j++) {
            std::cout << "*";
        }
        if (i == 0) {
            std::cout << "ptr = &a;\n";
        } else if (i == 1) {
            std::cout << "ptr" << i + 1 << " = &ptr"
                      << ";\n";
        } else {
            std::cout << "ptr" << i + 1 << " = &ptr" << i << ";\n";
        }
    }
    return 0;
}