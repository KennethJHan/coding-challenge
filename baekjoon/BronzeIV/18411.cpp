#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v;
	int tmp;
	for(int i=0;i<3;i++)
	{
		std::cin >> tmp;
		v.push_back(tmp);
	}
	std::sort(v.begin(), v.end());
	std::cout << v[1] + v[2] << std::endl;
	return 0;
}
