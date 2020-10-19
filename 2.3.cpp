
#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int id = 0;
	for (int i = 0; i < n; ++i) 
	{
		int x;
		std::cin >> x;
		if (x < 0 && id == 0) 
		{
			id = i + 1;
		}
	}
	std::cout << id;
	return 0;
}
