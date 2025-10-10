#include "test.h"

void	test_memccpy()
{
	struct Data a = {40, 3.2, "Hello"};
	struct Data b;
	struct Data c;
	void *res1 = memccpy(&b, &a, 'l', sizeof(struct Data));
	printf("std_memccpy: %d %f %s\n", b.x, b.y, b.s);
	printf("std_memccpy: %s\n", (char *)res1);
	void *res2 = ft_memccpy(&c, &a, 'l', sizeof(struct Data));
	printf(" ft_memccpy: %d %f %s\n", c.x, c.y, c.s);
	printf(" ft_memccpy: %s\n", (char *)res2);
	
	char str1[20];
	char str2[20];
	res1 = memccpy(str1, str, 'r', strlen(str));
	printf("std_memccpy:  %s\n", str1);
//	printf("std_memccpy: %s\n", (unsigned char *)res1);
	res2 = ft_memccpy(str2, str, 'r', strlen(str));	
	printf(" ft_memccpy: %s\n", str2);
//	printf(" ft_memccpy: %s\n", (unsigned char *)res2);
	printf("\n");
}
//memccpy does not work on structs
