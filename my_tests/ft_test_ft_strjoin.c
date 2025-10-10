#include "test.h"

void	test_strjoin()
{
	char *str1 = " 42!";
	char *join1 = ft_strjoin(str, str1);
	char *join2 = ft_strjoin("", "");
//	char *join3 = ft_strjoin("", NULL);
	if (join1 && join2) // && join3)
	{
		printf(" ft_strjoin: %s\n", join1);
		printf(" ft_strjoin: %s\n", join2);
//		printf(" ft_strjoin: %s\n", join3);
	}
	s_free(&join1);
	s_free(&join2);
//	s_free(&join3);
	printf("\n");
}