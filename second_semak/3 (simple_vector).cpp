#include <iostream>

template <typename T>
class simple_vector
{
private:
    T *ptr;
    unsigned cursize;
    unsigned capacity;
public:
    const static unsigned npos = -1;
    simple_vector(unsigned n, T val): ptr(new T[2 * n]), capacity(2 * n), cursize(n)
    {
        for (unsigned i = 0; i < n; ++i)
            ptr[i] = val;
    }
    ~simple_vector()
    {
        delete[] ptr;
        ptr = nullptr;
    }
    T& operator[](unsigned idx)
    {
        if (idx >= cursize)
            throw std::runtime_error("simple_vector[] at wrong index");
        return ptr[idx];
    }
    unsigned find(const T &val) const
    {
        for (unsigned i = 0; i < cursize; ++i)
            if (ptr[i] == val)
                return i;
        return npos;
    }
    void resize(unsigned newsize)
    {
        if (newsize <= capacity)
            cursize = newsize;
        else
        {
            T *nptr = new T[2 * newsize];
            for (unsigned i = 0; i < cursize; ++i)
                nptr[i] = ptr[i];
            delete[] ptr;
            ptr = nptr;
            capacity = 2 * newsize;
            cursize = newsize;
        }
    }
    void remove(unsigned idx)
    {
        for (int i = idx; i < cursize - 1; ++i)
            ptr[i] = ptr[i + 1];
        resize(cursize - 1);
    }
    void append(const T &val)
    {
        resize(cursize + 1);
        ptr[cursize - 1] = val;
    }
    unsigned size() const
    {
        return cursize;
    }
};

int main()
{
    simple_vector<int> v(10, 2);
    for (int i = 0; i < v.size(); ++i)
        std::cout << v[i] << ' ';
    v.remove(0);
    std::cout << '\n';
    for (int i = 0; i < v.size(); ++i)
        std::cout << v[i] << ' ';
    v[1] = 42;
    std::cout << '\n' << v.find(42) << '\n';
    for (int i = 0; i < v.size(); ++i)
        std::cout << v[i] << ' ';
}
