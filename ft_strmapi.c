/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurugan <kmurugan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:28:02 by kmurugan          #+#    #+#             */
/*   Updated: 2025/10/16 18:42:49 by kmurugan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*dst;
	size_t	slen;
	size_t	i;

	if (!s || !f)
		return (NULL);
	slen = ft_strlen(s);
	dst = malloc(slen + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (i < slen)
	{
		dst[i] = f(i, s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
