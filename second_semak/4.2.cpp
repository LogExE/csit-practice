#include <iostream>
#include <vector>

// complexity - O(n)

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    int m;
    bool flag = true;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> vec[i];
        if (i == 0 && vec[i] < 0 || vec[i] > m && vec[i] < 0)
        {
            m = vec[i];
            flag = false;
        }
    } // for - O(n)
    if (!flag)
        vec[n / 2] = m;
    for (auto it = vec.begin(); it != vec.end(); ++it)
        std::cout << *it << ' ';
}
