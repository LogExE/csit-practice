#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int *a = new int[n];
	int *b = new int[n];
	int c = 0;
	for (int i = 0; i < n; ++i) 
	{
		std::cin >> a[i];
		if (a[i] == 0) 
		{
			b[c++] = i;
		}
	}
	for (int i = 0; i < c; ++i) 
	{
		std::cout << b[i] + 1 << ' ';
	}
	delete[] b;
	delete[] a;
}
