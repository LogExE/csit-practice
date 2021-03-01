#include <iostream>

//т.к. глобальный - далее заполнится нулями
int res[1000] = {1,1,1};

int tribonacci(int i) 
{
	if (i <= 0) 
	{
		std::cout << "NO! I DON'T WANT THAT!";
		return -42;
	}
	if (!res[i - 1]) 
	{
		res[i - 1] = tribonacci(i - 1) + tribonacci(i - 2) + tribonacci(i - 3);
	}
	return res[i - 1];
}

int main() 
{
	int n;
	std::cin >> n;
	std::cout << tribonacci(n);
}
