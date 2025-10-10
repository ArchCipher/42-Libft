#include "test.h"

void	test_strlcat()
{
	char dst1[20] = "Forty two!";
	char dst2[20] = "Forty two!";
	char dst3[20] = "Forty two!";
	char dst4[20] = "Forty two!";
	printf("std_strlcat: %lu %s\n", strlcat(dst1, str, 5), dst1);
	printf(" ft_strlcat: %lu %s\n", ft_strlcat(dst2, str, 5), dst2);
	printf("std_strlcat: %lu %s\n", strlcat(dst3, str, 20), dst3);
	printf(" ft_strlcat: %lu %s\n", ft_strlcat(dst4, str, 20), dst4);
	printf("std_strlcat: %lu %s\n", strlcat(dst1, str, 0), dst1);
	printf(" ft_strlcat: %lu %s\n", ft_strlcat(dst2, str, 0), dst2);
	printf("std_strlcat: %lu %s\n", strlcat(dst1, NULL, 0), dst1);
	printf(" ft_strlcat: %lu %s\n", ft_strlcat(dst2, NULL, 0), dst2);
	printf("\n");
}
