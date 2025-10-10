#include "test.h"

void	test_strtrim()
{
	char *trim1 = ft_strtrim(str, "Held");
	char *trim2 = ft_strtrim(str, "Held Word");
	char *trim3 = ft_strtrim(str, "Held ord");
	char *trim4 = ft_strtrim(str, "");
	if (trim1 && trim2 && trim3 && trim4)
	{
		printf(" ft_strtrim: %s\n", trim1);
		printf(" ft_strtrim: %s\n", trim2);
		printf(" ft_strtrim: %s\n", trim3);
		printf(" ft_strtrim: %s\n", trim4);
	}
	s_free(&trim1);
	s_free(&trim2);
	s_free(&trim3);
	s_free(&trim4);
	printf("\n");
}