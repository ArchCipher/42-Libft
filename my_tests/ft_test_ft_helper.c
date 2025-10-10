#include "test.h"

void	s_free(char **s)
{
	if (s && *s)
	{
		free(*s);
		*s = NULL;
	}
}

char	cap_even(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32);
	return c;
}

void	del(void *content)
{
	free(content);
}

void	change_content(void *content)
{
	if (!content)
		return ;
	ft_memset(content, 97, ft_strlen(content));
}

void	*memset_content(void *content)
{
	if (!content)
		return NULL;
	return(ft_memset(content, '!', ft_strlen(content)));
}

void	print_lst(t_list *lst)
{
	while(lst)
    {   
        printf("%s\n", (char *)lst->content);
        lst = lst->next;
    }
}
