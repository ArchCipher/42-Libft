#include "test.h"

void	test_memset()
{
	struct Data a;
	struct Data b;
	memset(&a, 0, sizeof(struct Data));
	printf("std_memset: %d %f %s\n", a.x, a.y, a.s);
	ft_memset(&b, 0, sizeof(struct Data));
	printf(" ft_memset: %d %f %s\n", b.x, b.y, b.s);
	char c1;
	char c2;
	memset(&c1, 65, sizeof(char));
	printf("std_memset: %c\n", c1);
	ft_memset(&c2, 65, sizeof(char));
	printf(" ft_memset: %c\n", c2);

	char c3[10] = "Hello";
	char c4[10] = "Hello";
	memset(c3, 65, strlen(c3));
	printf("std_memset: %s\n", c3);
	ft_memset(c4, 65, strlen(c4));
	printf(" ft_memset: %s\n", c4);
	
//	int i;
//	ft_memset(&i, 255, sizeof(int));
//	printf(" ft_memset: %d\n", i);
	printf("\n");
}