#include "libft.h"

size_t  ft_numlen(int n, int base)
{
    size_t  count;

    count = 0;
    if (n <= 0)
        count++;
    while(n)
    {
        count++;
        n /= base;
    }
    return count;
}
