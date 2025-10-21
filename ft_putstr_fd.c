/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurugan <kmurugan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:26:41 by kmurugan          #+#    #+#             */
/*   Updated: 2025/10/16 18:55:54 by kmurugan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;
	size_t	t_written;
	ssize_t	written;

	if (!s)
		return ;
	len = ft_strlen(s);
	t_written = 0;
	while(t_written < len)
	{
		written = write(fd, s + t_written, len - t_written);
		if (written < 0)
			break ;
		t_written += written;
	}
}
