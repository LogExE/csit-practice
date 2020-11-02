#include <iostream>

int main()
{
	double p, s;
	std::cin >> p >> s;
	if (p <= 0 || s <= 0) 
	{
		std::cout << "invalid data";
		return 0;
	}
	double d = 2 * sqrt(s / acos(-1));
	double a = p / 4;
	double e = 1e-12;
	if (abs(d - a) < e)
	{
		std::cout << "d = a";
	}
	else if (d > a && d > a + e) 
	{
		std::cout << "d > a";
	}
	else
	{
		std::cout << "d < a";
	}
}
