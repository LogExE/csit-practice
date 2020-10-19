
#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	if (!a) 
	{
		return 0;
	}
	int s = 0, m = 1;
	while (a) 
	{
		s += a % 10;
		m *= a % 10;
		a /= 10;
	}
	if (m < s) 
	{
		int t = m;
		m = s;
		s = t;
	}
	for (; s <= m; ++s) 
	{
		std::cout << s << ' ';
	}
	return 0;
}
