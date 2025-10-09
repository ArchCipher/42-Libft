#include "libft.h"

void	ft_createbuf(const char *set, unsigned char *buf)
{
	ft_bzero(buf, 256);
	while(*set)
	{
		buf[(int)*set] = 1;
		set++;
	}
}

char    *ft_strtrim(const char *s1, const char *set)
{
	char			*dst;
	size_t			len;
	unsigned char	buf[256];

	if (!s1 || !set)
		return NULL;
	ft_createbuf(set, buf);
	while(*s1 && buf[(int)*s1])
		s1++;
	len = ft_strlen(s1);
	while(len > 0 && buf[(int)s1[len - 1]])
		len--;
	dst = malloc(len + 1);
	if (!dst)
		return NULL;
	ft_memcpy(dst, s1, len);
	dst[len] = '\0';
	return (dst);
}
