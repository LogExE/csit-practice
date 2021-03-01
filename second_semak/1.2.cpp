#include <iostream>

int prod(int *a, int i) 
{
	return a[i] * (i ? prod(a, i - 1) : 1);
}

int main() 
{
	int a[] = { 4,2,3 };
	std::cout << prod(a, sizeof(a) / sizeof(a[0]) - 1);
}
