
#include <iostream>
#include <cstdarg> 

int sum(int n, ...)
{
    va_list list;
    va_start(list, n);
    int s = 0;

    for (int i = 0; i < n; i++)
    {
        int x = va_arg(list, int);
        s += x;
    }

    va_end(list); // Clean up the va_list
    return s;
}

int main()
{
    std::cout << sum(3, 10, 20, 30) << std::endl;
    std::cout << sum(5, 1, 2, 3, 4, 5) << std::endl;
    return 0;
}