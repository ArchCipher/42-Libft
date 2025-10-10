#include "test.h"

void	test_strncmp()
{
	printf("std_strncmp: %d\n", strncmp(str, "Hello", 5));
	printf(" ft_strncmp: %d\n", ft_strncmp(str, "Hello", 5));
	printf("std_strncmp: %d\n", strncmp(str, "abc", 1));
	printf(" ft_strncmp: %d\n", ft_strncmp(str, "abc", 1));
	printf("std_strncmp: %d\n", strncmp(str, "Hello", 0));
	printf(" ft_strncmp: %d\n", ft_strncmp(str, "Hello", 0));
	printf("\n");
}