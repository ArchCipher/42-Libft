#include "test.h"

void	test_memcpy()
{
	struct Data a = {42, 3.14, "Hello"};
	struct Data b;
	struct Data c;
	memcpy(&b, &a, sizeof(struct Data));
	printf("std_memcpy: %d %f %s\n", b.x, b.y, b.s);
	ft_memcpy(&c, &a, sizeof(struct Data));
	printf(" ft_memcpy: %d %f %s\n", c.x, c.y, c.s);
	printf("\n");
}
//do not use memcpy on pointers -> shallow copy, not the string content(deep copy)
//in this case b.s will point to a.s
//if b.s is freed or if modifying b.s is undefined behaviour
