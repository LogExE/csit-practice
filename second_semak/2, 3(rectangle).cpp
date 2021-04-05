
#include <string>
#include <sstream>

class rectangle
{
    double width, height;
    std::string name;
public:
    rectangle(double a, std::string n): width(a), height(a), name(n)
    {}
    rectangle(double w, double h, std::string n): width(w), height(h), name(n)
    {}
    double get_width() const
    {
        return width;
    }
    void set_width(double nwidth)
    {
        width = nwidth;
    }
    double get_height() const
    {
        return height;
    }
    void set_height(double nheight)
    {
        height = nheight;
    }
    std::string get_name() const
    {
        return name;
    }
    void set_name(const std::string &nname)
    {
        name = nname;
    }
    double perimeter() const
    {
        return 2 * (width + height);
    }
    std::string to_string() const
    {
        std::ostringstream ss;
        ss << "rectangle, w: " << width << ", h: " << height << ", name: " << name;
        return ss.str();
    }
    bool operator==(const rectangle &other) const
    {
        return width == other.width && height == other.height && name == other.name;
    }
    rectangle& operator++()
    {
        ++width;
        ++height;
        return *this;
    }
    rectangle operator++(int)
    {
        rectangle ret = *this;
        ++*this;
        return ret;
    }
};

rectangle intersect(double x1, double y1, rectangle r1, double x2, double y2, rectangle r2)
{
    double lx = std::max(x1, x2),
           rx = std::min(x1 + r1.get_width(), x2 + r2.get_width()),
           uy = std::max(y1, y2),
           dy = std::min(y1 + r1.get_height(), y2 + r2.get_height());
    if (lx >= rx || uy >= dy)
        return rectangle(0, "");
    return rectangle(rx - lx, dy - uy, "");
}
