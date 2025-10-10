#include "test.h"

void ft_free_split(char ***s)
{
	if (!s || !*s)
		return;
	for (int i = 0; (*s)[i]; i++)
		free((*s)[i]);
	free(*s);
	*s = NULL;
}

void	ft_print_split(char **s)
{
	if (!s)
		return;
	printf(" ft_split:\n");
	for (int i = 0; s[i]; i++)
		printf("%s\n", s[i]);
}

void	test_split()
{
	char **split1 = ft_split(str, 'l');
	if (split1 && *split1)
		ft_print_split(split1);
	ft_free_split(&split1);
	printf("\n");
}