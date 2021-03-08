
#define square(x) ((x)*(x))

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
	return dist(p1.x, p1.y, p2.x, p2.y);
}

double dist(point3d p)
{
	return dist(p.x, p.y, p.z);
}

double dist(point3d p1, point3d p2)
{
	return dist(p1.x, p1.y, p1.z, p2.x, p2.y, p2.z);
}

/* зачем, если есть версии для double? :)
double dist(int x, int y)
{
	return dist(x, y, 0);
}

double dist(int x, int y, int z) 
{
	return dist(x, y, z, 0, 0, 0);
}

double dist(int x1, int y1, int x2, int y2)
{
	return dist(x1, y1, 0, x2, y2, 0);
}

double dist(int x1, int y1, int z1, int x2, int y2, int z2)
{
	return sqrt(square(x1 - x2) + square(y1 - y2) + square(z1 - z2));
}
*/

double dist(double x, double y)
{
	return dist(x, y, 0.0);
}

double dist(double x1, double y1, double x2, double y2)
{
	return dist(x1, y1, 0.0, x2, y2, 0.0);
}

double dist(double x, double y, double z)
{
	return dist(x, y, z, 0.0, 0.0, 0.0);
}

double dist(double x1, double y1, double z1, double x2, double y2, double z2)
{
	return sqrt(square(x1 - x2) + square(y1 - y2) + square(z1 - z2));
}
