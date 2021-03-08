
class point2d 
{
public:
	point2d(double x, double y)
	{
		this->x = x;
		this->y = y;
	}
	double x, y;
};

class point3d : public point2d 
{
public:
	point3d(double x, double y, double z) : point2d(x, y)
	{
		this->z = z;
	}
	double z;
};

double dist(point2d p) 
{
	return dist(p.x, p.y);
}

double dist(point2d p1, point2d p2)
{
	return abs(dist(p1) - dist(p2));
}

double dist(point3d p)
{
	return dist(p.x, p.y, p.z);
}

double dist(point3d p1, point3d p2)
{
	return abs(dist(p1) - dist(p2));
}

double dist(int x, int y)
{
	return sqrt(x * x + y * y);
}

double dist(int x, int y, int z) 
{
	return sqrt(x * x + y * y + z * z);
}

double dist(int x1, int y1, int x2, int y2)
{
	return abs(dist(x1, y1) - dist(x2, y2));
}

double dist(int x1, int y1, int z1, int x2, int y2, int z2)
{
	return abs(dist(x1, y1, z1) - dist(x2, y2, z2));
}

double dist(double x, double y)
{
	return sqrt(x * x + y * y);
}

double dist(double x1, double y1, double x2, double y2)
{
	return abs(dist(x1, y1) - dist(x2, y2));
}

double dist(double x1, double y1, double z1, double x2, double y2, double z2)
{
	return abs(dist(x1, y1, z1) - dist(x2, y2, z2));
}

double dist(double x, double y, double z)
{
	return sqrt(x * x + y * y + z * z);
}
