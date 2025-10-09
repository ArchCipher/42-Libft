#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
	char	num[12];
	int		sign;
	size_t	i;

	sign = 0;
	i = 11;
	num[i] = '\0';
    if (n == 0)
		num[--i] = '0';
	else if (n < 0)
		sign = 1;
	else
		n = -n;
	while(n)
    {
		num[--i] = ((n % 10) * -1) + '0';
		n /= 10;
    }
	if (sign)
		num[--i] = '-';
	write(fd, num + i, 11 - i);
}
