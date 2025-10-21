#include "test.h"

void	test_atoi()
{
	printf("std_atoi: %d\n", atoi("0"));
	printf(" ft_atoi: %d\n", ft_atoi("0"));
	printf("std_atoi: %d\n", atoi("42"));
	printf(" ft_atoi: %d\n", ft_atoi("42"));
	printf("std_atoi: %d\n", atoi("+100"));
	printf(" ft_atoi: %d\n", ft_atoi("+100"));
	printf("std_atoi: %d\n", atoi("-42"));
	printf(" ft_atoi: %d\n", ft_atoi("-42"));
	printf("std_atoi: %d\n", atoi("  4 2"));
	printf(" ft_atoi: %d\n", ft_atoi("  4 2"));
	printf("std_atoi: %d\n", atoi("\ta42"));
	printf(" ft_atoi: %d\n", ft_atoi("\ta42"));
	printf("std_atoi: %d\n", atoi("\v--42"));
	printf(" ft_atoi: %d\n", ft_atoi("\v--42"));
	printf("std_atoi: %d\n", atoi("\n2147483647"));
	printf(" ft_atoi: %d\n", ft_atoi("\n2147483647"));
	printf("std_atoi: %d\n", atoi("\f-2147483648"));
	printf(" ft_atoi: %d\n", ft_atoi("\f-2147483648"));
	printf("std_atoi: %d\n", atoi("\r\r-2000000000000000147483649123456789"));
	printf(" ft_atoi: %d\n", ft_atoi("\r\r-200000000000000147483649123456789"));
	printf("\n");
}
