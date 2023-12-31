#include <iostream>

int main()
{
	double res1, res2;
	double n1, n2, n3;
	std::cin >> n1 >> n2 >> n3;
	res1 = n1 * n2 / n3;
	res2 = n1 / n2 * n3;
	if (res1 < res2)
		std::cout << (int)res2 << std::endl;
	else
		std::cout << (int)res1 << std::endl;
	return 0;
}
