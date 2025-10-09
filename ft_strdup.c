#include "libft.h"

char    *ft_strdup(const char *s1)
{
	char 	*dst;
	size_t	slen;
	size_t	i;
   
	slen = ft_strlen(s1);
	dst = malloc(slen + 1);
	if (!dst)
		return NULL;
	i = 0;
	while(i < slen)
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
