#include "test.h"

void	test_strchr()
{
	printf("std_strchr: %s\n", strchr(str, 'o'));
	printf(" ft_strchr: %s\n", ft_strchr(str, 'o'));
	printf("std_strchr: %s\n", strchr(str, 'l'));
	printf(" ft_strchr: %s\n", ft_strchr(str, 'l'));
	printf("std_strchr: %s\n", strchr(str, '\0'));
	printf(" ft_strchr: %s\n", ft_strchr(str, '\0'));
	printf("std_strchr: %s\n", strchr(str, 'a'));
	printf(" ft_strchr: %s\n", ft_strchr(str, 'a'));
	printf("\n");
}