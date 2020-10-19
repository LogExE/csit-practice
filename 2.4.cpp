
#include <iostream>

int main()
{
	int fst;
	std::cin >> fst;
	int s = fst;
	int i = 1;
	int x;
	do 
	{
		std::cin >> x;
		s += x;
		++i;
	} while (x != fst * fst);
	std::cout << (double)s / i;
	return 0;
}
