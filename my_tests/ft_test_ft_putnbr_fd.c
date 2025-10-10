#include "test.h"

void	test_putnbr_fd()
{
    ft_putnbr_fd(0, 1);
	printf("\n");
	ft_putnbr_fd(100, 1);
    printf("\n");
    ft_putnbr_fd(+42, 1);
	printf("\n");
    ft_putnbr_fd(-42, 1);
    printf("\n");
    ft_putnbr_fd(INT_MAX, 1);
    printf("\n");
    ft_putnbr_fd(INT_MIN, 1);
    printf("\n");
    printf("\n");
}
