#ifndef TEST_H
#define TEST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
#include "libft.h"

struct Data { int x; float y; char *s; };
extern char *str;

void	test_memset();
void	test_bzero();
void	test_memcpy();
void	test_memccpy();
void	test_memmove();
void	test_memchr();
void	test_memcmp();
void	test_strlen();
void	test_strlcpy();
void	test_strlcat();
void	test_strchr();
void	test_strrchr();
void	test_strnstr();
void	test_strncmp();
void	test_atoi();
void	test_toupper();
void	test_tolower();
void	test_strdup();
void	test_calloc();
void	test_substr();
void	test_strjoin();
void	test_strtrim();
void	test_split();
void	ft_print_split(char **s);
void	ft_free_split(char ***s);
void	test_itoa();
void	test_strmapi();
void	test_putnbr_fd();
void	test_lst();

void	s_free(char **s);
char	cap_even(unsigned int i, char c);
void	del(void *content);
void	change_content(void *content);
void	*memset_content(void *content);
void	print_lst(t_list *lst);

#endif
