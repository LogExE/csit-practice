
#include <string>
#include <sstream>

class rectangle
{
    int width, height;
    std::string name;
public:
    //аргумент для инициализации name?
    rectangle(int a): width(a), height(a)
    {}
    rectangle(int w, int h): width(w), height(h)
    {}
    int get_width() const
    {
        return width;
    }
    void set_width(int nwidth)
    {
        width = nwidth;
    }
    int get_height() const
    {
        return height;
    }
    void set_height(int nheight)
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
    int perimeter() const
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
