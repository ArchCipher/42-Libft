#include "libft.h"

int     ft_atoi(const char *str)
{
	int	num;
	int sign;

	num = 0;
	sign = -1;
	while(ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		sign = 1;
		str++;
	}
	else if (*str == '+')
		str++;
	while(ft_isdigit(*str))
	{
		num = (num * 10) - (*str - '0');
		str++;
	}
	return (num * sign);
}
