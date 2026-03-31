/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurugan <kmurugan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:59:18 by kmurugan          #+#    #+#             */
/*   Updated: 2025/10/20 11:00:21 by kmurugan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	long_overflow(long num, int digit)
{
	int	limit_digit;

	if (num > LONG_MAX / 10 || num < LONG_MIN / 10)
		return (1);
	limit_digit = LONG_MAX % 10;
	if ((num == LONG_MAX / 10 && digit > limit_digit) || (num == LONG_MIN / 10
			&& digit > limit_digit + 1))
		return (1);
	return (0);
}

long	ft_atol(const char *str)
{
	long	num;
	int		sign;

	num = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		if (long_overflow(num, (*str - '0')))
		{
			if (sign == 1)
				return (LONG_MAX);
			return (LONG_MIN);
		}
		num = (num * 10) + ((*str - '0') * sign);
		str++;
	}
	return (num);
}
