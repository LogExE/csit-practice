#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int n1, n2;
    n1 = n2 = -1;
    for (int i = 0; i < n; ++i) 
    {
        int x;
        std::cin >> x;
        if (x > 0) 
        {
            if (x < n1 || n1 == -1) 
            {
                n2 = n1;
                n1 = x;
            }
            else if (x < n2 || n2 == -1) // && x != n1?
            {
                n2 = x;
            }
        }
    }
    if (n1 + 1 && n2 + 1)
    {
        std::cout << "Found two positive values\n";
        std::cout << n1;
    }
    else if (n1 + 1 || n2 + 1)
    {
        std::cout << "Found only one positive value\n";
        std::cout << (n1 ? n1 : n2);
    }
    else 
    {
        std::cout << "Found no positive values\n";
    }
}
