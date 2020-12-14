#include <iostream>

int main()
{
	int n, m;
	std::cin >> n >> m;
	int a[100][100];
	int c = 0;
	for (int i = 0; i < n; ++i) 
	{
		for (int j = 0; j < m; ++j) 
		{
			std::cin >> a[i][j];
			c += a[i][j] < 0;
		}
	}
	std::cout << c;
}
