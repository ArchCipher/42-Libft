#include "test.h"

void	test_substr()
{
	char *str1 = ft_substr(str, 6, 5);
	char *str2 = ft_substr(str, 12, 5);
	char *str3 = ft_substr(str, 8, 40);
	if (str1 && str2 && str3)
	{
		printf(" ft_substr: %s\n", str1);
		printf(" ft_substr: %s\n", str2);
		printf(" ft_substr: %s\n", str3);
	}
	s_free(&str1);
	s_free(&str2);
	s_free(&str3);
	printf("\n");
}
