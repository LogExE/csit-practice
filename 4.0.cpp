#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	if (n == 1) 
	{
		std::cout << 0;
		return 0;
	}
	int a = 1, b = 1;
	for (int i = 3; i < n; ++i) 
	{
		b += a;
		a = b - a;
	}
	std::cout << b;
	return 0;
}
