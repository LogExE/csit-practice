#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}
	if (n % 2 == 0) 
	{
		int t = a[n / 2 - 1];
		a[n / 2 - 1] = a[n / 2];
		a[n / 2] = t;
	}
	else 
	{
		a[n / 2] *= 2;
	}
	for (int i = 0; i < n; ++i)
	{
		std::cout << a[i] << ' ';
	}
        delete[] a;
}
