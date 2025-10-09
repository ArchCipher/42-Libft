#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
	size_t len;
   
	len = ft_strlen(s) + 1;
	s += len;
	while(len-- > 0)
	{
		s--;
		if (*s == (unsigned char)c)
			return ((char *)s);
	}
	return NULL;
}
