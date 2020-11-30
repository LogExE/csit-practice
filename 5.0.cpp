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
	for (int i = 0; i < k; ++i)
	{
		a[b[i] - 1] = 0;
	}
	for (int i = 0; i < n; ++i)
	{
		std::cout << a[i] << ' ';
	}
	delete[] a;
	delete[] b;
}
