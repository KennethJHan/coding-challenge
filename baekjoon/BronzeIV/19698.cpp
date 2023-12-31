#include <iostream>

int main()
{
    int N, W, H, L;
    std::cin >> N >> W >> H >> L;
    std::cout << (N < (W / L) * (H / L) ? N : (W / L) * (H / L));
    return 0;
}