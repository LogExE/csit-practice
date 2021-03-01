bool f(double ro, double ri, double &s) 
{
	if (ro > ri + 1e-12) 
	{
		const double pi = acos(-1);
		//s = pi * (ro * ro) - pi * (ri * ri);
		s = pi * (ro + ri) * (ro - ri);
		return true;
	}
	return false;
}
