#include <iostream>

int main()
{
    int A, B, C, D, P;
    std::cin >> A >> B >> C >> D >> P;
    int X = A * P;
    int Y = B + (P > C ? (P - C) * D : 0);
    std::cout << (X < Y ? X : Y) << std::endl;
    return 0;
}