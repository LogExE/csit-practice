#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	double a1 = 1, a2 = 0.5;
	if (n <= 0) 
	{
		return 0;
	}
	else if (n == 1) 
	{
		std::cout << a1;
		return 0;
	}
	std::cout << a1 << ' ' << a2 << ' ';
	for (int i = 3; i <= n; ++i) 
	{
		double t = a2;
		a2 = sin(a1) + a2 / 2;
		a1 = t;
		std::cout << a2 << ' ';
	}
}
