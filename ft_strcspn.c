/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurugan <kmurugan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 12:04:47 by kmurugan          #+#    #+#             */
/*   Updated: 2026/06/04 00:14:22 by kmurugan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcspn(const char *s, const char *reject)
{
	const char	*start = s;
	bool		buf[256];

	if (!*reject)
		return (ft_strlen(s));
	if (!reject[1])
	{
		while (*s && *s != *reject)
			s++;
		return (s - start);
	}
	ft_memset(buf, 0, sizeof(buf));
	while (*reject)
		buf[(unsigned char)*reject++] = 1;
	while (*s && !buf[(unsigned char)*s])
		s++;
	return (s - start);
}
