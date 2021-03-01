#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	double x;
	std::cin >> x;
	double s = 0;
	int fac = 1;
	double deg = -x * x;
	for (int i = 2; i <= n; ++i) 
	{
		fac *= i;
	}
	for (int i = 1; i <= n; ++i) 
	{
		s +=  deg / fac;
		deg *= -x * x;
	}
	std::cout << s;
}
