#include "test.h"

void	test_bzero()
{
	struct Data a;
	struct Data b;
	bzero(&a, sizeof(struct Data));
	printf("std_bzero: %d %f %s\n", a.x, a.y, a.s);
	ft_bzero(&b, sizeof(struct Data));
	printf(" ft_bzero: %d %f %s\n", b.x, b.y, b.s);
	
	char c1;
	char c2;
	bzero(&c1, sizeof(char));
	printf("std_bzero: %c\n", c1);
	ft_bzero(&c2, sizeof(char));
	printf(" ft_bzero: %c\n", c2);
	
	int arr1[] = {3, 4, 5};
	int arr2[] = {3, 4, 5};
	bzero(arr1, sizeof(arr1));
	printf("std_bzero: %d %d %d\n", arr1[0], arr1[1], arr1[2]);
	ft_bzero(arr2, sizeof(arr2));
	printf(" ft_bzero: %d %d %d\n", arr2[0], arr2[1], arr2[2]);
	printf("\n");
}