#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	
	srclen = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (srclen);
	dstlen = ft_strlen(dst);
	if (dstlen >= dstsize)
		return(srclen + dstsize);
	dst += dstlen;
	dstsize -= dstlen;
	while(dstsize-- > 1 && *src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (dstlen + srclen);
}
