#include <iostream>

int lyag(int x) 
{
	int abx = abs(x);
	if (x == 0) 
	{
		return 1;
	}
	else if (abx == 1 || abx == 2) 
	{
		return 0;
	}
	else if (x < 0)
	{
		return lyag(x + 3) + lyag(x + 5);
	}
	else 
	{
		return lyag(x - 3) + lyag(x - 5);
	}
}

int main() 
{
	int x;
	std::cin >> x;
	std::cout << lyag(x);
}
