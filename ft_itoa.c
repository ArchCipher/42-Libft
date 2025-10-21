/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurugan <kmurugan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:57:16 by kmurugan          #+#    #+#             */
/*   Updated: 2025/10/17 21:28:27 by kmurugan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_numlen(int n, int base)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n)
	{
		count++;
		n /= base;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		sign;
	size_t	len;

	sign = 1;
	len = ft_numlen (n, 10);
	num = malloc (len + 1);
	if (!num)
		return (NULL);
	num[len] = '\0';
	if (n == 0)
		num[0] = '0';
	else if (n < 0)
	{
		num[0] = '-';
		sign = -1;
	}
	while (len-- > 0 && n)
	{
		num[len] = ((n % 10) * sign) + '0';
		n /= 10;
	}
	return (num);
}
