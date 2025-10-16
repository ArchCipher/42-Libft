#include "test.h"

void	test_memchr()
{
	void *res1 = memchr(str, 'l', strlen(str));
	printf("%s\n", (unsigned char *)res1);
	void *res2 = ft_memchr(str, 'l', strlen(str));
	printf("%s\n", (unsigned char *)res2);
	printf("\n");
}
