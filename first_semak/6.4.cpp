#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int **a = new int *[n];
	for (int i = 0; i < n; ++i) 
	{
		a[i] = new int[n];
		for (int j = 0; j < n; ++j) 
		{
			std::cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; ++i) 
	{
		std::cout << a[i][n - i - 1] << ' ';
	}
	for (int i = 0; i < n; ++i) 
	{
		delete[] a[i];
	}
	delete[] a;
}
