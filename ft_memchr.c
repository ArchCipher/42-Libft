#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *str;
   
	str	= (const unsigned char *)s;
	while(n-- > 0)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
	}
	return NULL;
}
