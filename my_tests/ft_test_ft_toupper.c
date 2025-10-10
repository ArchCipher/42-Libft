#include "test.h"

void	test_toupper()
{
	printf("std_toupper: %c\n", toupper('a'));
	printf(" ft_toupper: %c\n", ft_toupper('a'));
	printf("std_toupper: %c\n", toupper('A'));
	printf(" ft_toupper: %c\n", ft_toupper('A'));
	printf("std_toupper: %c\n", toupper('~'));
	printf(" ft_toupper: %c\n", ft_toupper('~'));
	printf("\n");
}
