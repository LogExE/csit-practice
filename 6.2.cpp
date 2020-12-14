#include <iostream>

int main()
{
	int n, m;
	std::cin >> n >> m;
	int **a = new int*[n];
	int *b = new int[n * m];
	int *c = new int[n * m];
	int d = 0;
	for (int i = 0; i < n; ++i) 
	{
		a[i] = new int[m];
		for (int j = 0; j < m; ++j) 
		{
			std::cin >> a[i][j];
			if (a[i][j] == 0)
			{
				b[d] = i;
				c[d++] = j;
			}
		}	
	}
	for (int i = 0; i < d; ++i) 
	{
		std::cout << b[i] + 1 << ' ' << c[i] + 1 << '\n';
	}
	delete[] c;
	delete[] b;
	for (int i = 0; i < n; ++i) 
	{
		delete[] a[i];
	}
	delete[] a;
}
