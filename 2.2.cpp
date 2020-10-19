
#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int l, r;
	if (a > 100) 
	{
		l = 100;
		r = a;
	}
	else 
	{
		l = a;
		r = 100;
	}
	for (; l <= r; ++l) 
	{
		if (l % 3 == 0) 
		{
			std::cout << l << ' ';
		}
	}
	return 0;
}
