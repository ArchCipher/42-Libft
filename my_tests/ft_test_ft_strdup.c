#include "test.h"

void	test_strdup()
{
	char *str1 = strdup(str);
	char *str2 = ft_strdup(str);
	char *str3 = strdup("");
	char *str4 = ft_strdup("");
	if(str1 && str2 && str3 && str4)
	{
		printf("std_strdup: %s\n", str1);
		printf(" ft_strdup: %s\n", str2);
		printf("std_strdup: %s\n", str3);
		printf(" ft_strdup: %s\n", str4);
	}
	s_free(&str1);
	s_free(&str2);
	s_free(&str3);
	s_free(&str4);
	printf("\n");
}
