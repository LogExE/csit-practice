
#include <iostream>
#include <string>

class rectangle
{
    int width, height;
    std::string name;
public:
    //аргумент для инициализации name?
    rectangle(int a) : width(a), height(a)
    {}
    rectangle(int w, int h) : width(w), height(h)
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
        std::string ret = "rectangle, w: ";
        ret += std::to_string(width);
        ret += ", h: ";
        ret += std::to_string(height);
        ret += ", name: ";
        ret += name;
        return ret;
    }
    bool operator==(rectangle other) const
    {
        return width == other.width && height == other.height;
    }
    rectangle& operator++()
    {
        ++width;
        ++height;
        return *this;
    }
    rectangle operator++(int)
    {
        rectangle ret(width, height);
        ret.set_name(name);
        ++width;
        ++height;
        return ret;
    }
};

int main()
{
    //demo
    rectangle r(10, 10);
    r.set_name("test rect");
    std::cout << r.get_height() << ' ' << r.get_width() << ' ' << r.get_name() << ' ' << r.perimeter() << '\n';
    std::cout << r.to_string() << '\n';
    std::cout << (++r).to_string() << '\n';
    std::cout << r++.to_string() << '\n';
    std::cout << r.to_string() << '\n';
}
