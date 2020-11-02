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
	double f = f12, s = f23, t = f13;
	if (f > t)
	{
		swapf(f, t);
	}
	if (f > s) 
	{
		swapf(f, s);
	}
	if (s > t) 
	{
		swapf(s, t);
	}
	std::cout << G * s << ' ' << G * t;
}
