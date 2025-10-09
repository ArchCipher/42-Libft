#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;

	if (!dst && !src && n > 0)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while(n-- > 0)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dst);
}
