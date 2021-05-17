#include <iostream>
#include <list>

// complexity - O(n)

int main()
{
    int n;
    std::cin >> n;
    std::list<int> l;
    int m;
    for (int i = 0; i < n; ++i)
    {
        int x;
        std::cin >> x;
        l.push_back(x);
        if (i == 0 || x < m)
            m = x;
    } // for - O(n)
    auto itt = l.end();
    for (auto it = l.begin(); it != l.end(); ++it)
        if (*it == m)
        {
            itt = it;
            break;
        }
    //for - O(n)
    l.insert(itt, 0);
    l.insert(std::next(itt), 0);
    for (auto it = l.begin(); it != l.end(); ++it)
        std::cout << *it << ' ';
}
