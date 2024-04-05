#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int p, max_price = 0;
        std::string max_name;
        std::cin >> p;
        for (int j = 0; j < p; j++) {
            int price;
            std::string name;
            std::cin >> price >> name;
            if (price > max_price) {
                max_price = price;
                max_name = name;
            }
        }
        std::cout << max_name << std::endl;
    }
    return 0;
}