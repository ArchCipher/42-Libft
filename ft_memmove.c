#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	const unsigned char *s;

	if (dst == src || len == 0)
		return dst;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d < s)
	{
		while(len-- > 0)
		{
			*d = *s;
			d++;
			s++;
		}
	}
	else
	{
		d += len;
		s += len;
		while(len-- > 0)
		{
			d--;
			s--;
			*d = *s;
		}
	}
	return dst;
}
