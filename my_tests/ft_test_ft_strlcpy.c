#include "test.h"

void	test_strlcpy()
{
	char dst1[20] = "Forty two!";
	char dst2[20] = "Forty two!";
	printf("std_strlcpy: %lu %s\n", strlcpy(dst1, str, 5), dst1);
	printf(" ft_strlcpy: %lu %s\n", ft_strlcpy(dst2, str, 5), dst2);
	printf("std_strlcpy: %lu %s\n", strlcpy(dst1, str, 11), dst1);
	printf(" ft_strlcpy: %lu %s\n", ft_strlcpy(dst2, str, 11), dst2);
	printf("std_strlcpy: %lu %s\n", strlcpy(dst1, str, 20), dst1);
	printf(" ft_strlcpy: %lu %s\n", ft_strlcpy(dst2, str, 20), dst2);
	printf("\n");
}
