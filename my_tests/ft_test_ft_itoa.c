#include "test.h"

void    test_itoa()
{
    printf(" ft_itoa: %s\n", ft_itoa(0));
    printf(" ft_itoa: %s\n", ft_itoa(+100));
    printf(" ft_itoa: %s\n", ft_itoa(42));
    printf(" ft_itoa: %s\n", ft_itoa(-42));
    printf(" ft_itoa: %s\n", ft_itoa(INT_MAX));
    printf(" ft_itoa: %s\n", ft_itoa(INT_MIN));
	printf("\n");
}
