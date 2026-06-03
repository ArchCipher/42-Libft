/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurugan <kmurugan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 12:04:40 by kmurugan          #+#    #+#             */
/*   Updated: 2026/06/04 00:13:41 by kmurugan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strspn(const char *s, const char *accept)
{
	const char	*start = s;
	bool		buf[256];

	if (!*accept)
		return (0);
	if (!accept[1])
	{
		while (*s && *s == *accept)
			s++;
		return (s - start);
	}
	ft_memset(buf, 0, sizeof(buf));
	while (*accept)
		buf[(unsigned char)*accept++] = 1;
	while (*s && buf[(unsigned char)*s])
		s++;
	return (s - start);
}
