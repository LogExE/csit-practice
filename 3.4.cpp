#include <iostream>

void swapf(double &a, double &b) 
{
	double t = a;
	a = b;
	b = t;
}

int main()
{
	double m1, m2, m3;
	std::cin >> m1 >> m2 >> m3;
	double r12, r23, r13;
	std::cin >> r12 >> r23 >> r13;
	const double G = 6.67408e-11;
	double f12 = m1 * m2 / r12 / r12,
		f23 = m2 * m3 / r23 / r23,
		f13 = m1 * m3 / r13 / r13;
	if (f12 <= f23) 
	{
		if (f12 >= f13) 
		{
			std::cout << "f13<f12<f23";
		}
		else if (f23 >= f13)
		{
			std::cout << "f12<f13<f23";
		}
		else 
		{
			std::cout << "f12<f23<f13";
		}
	}
	else 
	{
		if (f23 >= f13)
		{
			std::cout << "f13<f23<f12";
		}
		else if (f12 >= f13)
		{
			std::cout << "f12<f13<f12";
		}
		else
		{
			std::cout << "f23<f12<f13";
		}
	}
}
