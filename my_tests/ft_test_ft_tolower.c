#include "test.h"

void	test_tolower()
{
	printf("std_tolower: %c\n", tolower('a'));
	printf(" ft_tolower: %c\n", ft_tolower('a'));
	printf("std_tolower: %c\n", tolower('A'));
	printf(" ft_tolower: %c\n", ft_tolower('A'));
	printf("std_tolower: %c\n", tolower('~'));
	printf(" ft_tolower: %c\n", ft_tolower('~'));
	printf("\n");
}