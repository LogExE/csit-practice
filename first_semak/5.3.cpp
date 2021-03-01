#include <iostream>

int main()
{
	int n, k;
	std::cin >> n >> k;
	int *a = new int[n];
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}
	int *b = new int[k];
	for (int i = 0; i < k; ++i)
	{
		std::cin >> b[i];
	}
	int t = n + k;
	int *c = new int[t];
	for (int i = 0; i < t; ++i)
	{
		if (i < n) 
		{
			c[i] = a[i];
		}
		else 
		{
			c[i] = b[i - n];
		}
	}
	delete[] a;
	delete[] b;
	for (int i = 0; i < t; ++i)
	{
		std::cout << c[i] << ' ';
	}
	delete[] c;
}
