#include "libft.h"

char    *ft_itoa(int n)
{
	char	*num;
	int		sign;
	size_t	len;

	sign = 1;
	len = ft_numlen(n, 10);
	num = malloc(len + 1);
	if (!num)
		return NULL;
	num[len] = '\0';
	if (n == 0)
		num[0] = '0';
	else if (n < 0)
	{
		num[0] = '-';
		sign = -1;
	}
	while(len-- > 0 && n)
	{
		num[len] = ((n % 10) * sign) + '0';
		n /= 10;
	}
	return num;
}
