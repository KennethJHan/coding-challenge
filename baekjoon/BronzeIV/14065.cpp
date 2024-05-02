#include <iomanip>
#include <iostream>

int main() {
    double in;
    std::cin >> in;
    std::cout << std::fixed << std::setprecision(6)
              << 100 / (in * 1.609344 / 3.785411784) << std::endl;
    return 0;
}
// 1 gallon = 3.785411784 liters
// 1 mile = 1609.344 meters
// in gallons per mile
// out liters per 100 kilometers
// 10.00 => 23.521458