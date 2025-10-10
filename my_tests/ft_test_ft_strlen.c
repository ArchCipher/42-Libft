#include "test.h"

void	test_strlen()
{
	printf("std_strlen: %lu\n", strlen(str));
	printf(" ft_strlen: %lu\n", ft_strlen(str));
	printf("std_strlen: %lu\n", strlen(""));
	printf(" ft_strlen: %lu\n", ft_strlen(""));
	printf("\n");
}
