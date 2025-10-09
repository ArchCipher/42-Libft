#include "libft.h"

char    *ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	slen;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (slen <= start)
		len = 0;
	else if (len > slen - start)
		len = slen - start;
	dst = malloc(len + 1);
	if (!dst)
		return (NULL);
	ft_memcpy(dst, s + start, len);
	dst[len] = '\0';
	return (dst);
}
