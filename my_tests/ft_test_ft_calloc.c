#include "test.h"

void	test_calloc()
{
	int *i1 = calloc(3, sizeof(int));
	int *i2 = ft_calloc(3, sizeof(int));
	if (i1 && i2)
	{
		printf("%d %d %d\n", i1[0], i1[1], i1[2]);
		printf("%d %d %d\n", i2[0], i2[1], i2[2]);
	}
	free(i1);
	i1 = NULL;
	free(i2);
	i2 = NULL;
	char *s1 = calloc(3, sizeof(char));
	char *s2 = ft_calloc(3, sizeof(char));
	if (s1 && s2)
	{
		ft_strlcpy(s1, "Hi", 3);
		ft_strlcpy(s2, "Hi", 3);
		printf("%s\n", s1);
		printf("%s\n", s2);
	}
	s_free(&s1);
	s_free(&s2);
	printf("\n");
}