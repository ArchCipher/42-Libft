#include "test.h"

void	test_memmove()
{
	char str1[20];
	memmove(str1, str, strlen(str));
	printf("std_memmove:  %s\n", str1);
	char str2[20];
	ft_memmove(str2, str, strlen(str));	
	printf(" ft_memmove: %s\n", str2);
	
	memmove(str1+2, str1, 5);
	printf("std_memmove:  %s\n", str1);
	ft_memmove(str2+2, str2, 5);	
	printf(" ft_memmove: %s\n", str2);
	
//	memmove(str1, str1+2, 5);
//	printf("std_memmove:  %s\n", str1);
//	ft_memmove(str2, str2+2, 5);	
//	printf(" ft_memmove: %s\n", str2);

	printf("\n");
}