#include "test.h"

void	test_memcmp()
{
	char *str1 = "Hello Worl";
	char *str2 = "";
	char *str3 = "Hello World";
	char a[] = {1, 2, 3};
	char b[] = {1, 2, 3};

	printf("std_memcmp: %d\n", memcmp(str, str1, strlen(str)));
	printf(" ft_memcmp: %d\n", ft_memcmp(str, str1, strlen(str)));
	printf("std_memcmp: %d\n", memcmp(str, str2, strlen(str)));
	printf(" ft_memcmp: %d\n", ft_memcmp(str, str2, strlen(str)));
	printf("std_memcmp: %d\n", memcmp(str, str3, strlen(str)));
	printf(" ft_memcmp: %d\n", ft_memcmp(str, str3, strlen(str)));
	printf("std_memcmp: %d\n", memcmp(a+3, b+3, 0));
	printf(" ft_memcmp: %d\n", ft_memcmp(a+3, b+3, 0));
	printf("\n");
}
