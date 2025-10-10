#include "test.h"

void	test_strrchr()
{
	printf("std_strchr: %s\n", strrchr(str, 'o'));
	printf(" ft_strchr: %s\n", ft_strrchr(str, 'o'));
	printf("std_strchr: %s\n", strrchr(str, 'l'));
	printf(" ft_strchr: %s\n", ft_strrchr(str, 'l'));
	printf("std_strchr: %s\n", strrchr(str, 'H'));
	printf(" ft_strchr: %s\n", ft_strrchr(str, 'H'));
	printf("std_strchr: %s\n", strrchr(str, 'd'));
	printf(" ft_strchr: %s\n", ft_strrchr(str, 'd'));
	printf("std_strchr: %s\n", strrchr(str, '\0'));
	printf(" ft_strchr: %s\n", ft_strrchr(str, '\0'));
	printf("std_strchr: %s\n", strrchr(str, 'a'));
	printf(" ft_strchr: %s\n", ft_strrchr(str, 'a'));
	printf("\n");
}