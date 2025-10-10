#include "test.h"

void	test_lst()
{
	t_list *lst1 = ft_lstnew(ft_strdup("one"));
	t_list *lst2 = ft_lstnew(ft_strdup("two"));
	t_list *lst3 = ft_lstnew(ft_strdup("three"));

	if (!lst1 || !lst2 || !lst3)
		return ;	
	printf("list size: %d\n", ft_lstsize(lst1));
	print_lst(ft_lstlast(lst1));
	printf("\n");
	
	ft_lstadd_front(&lst2, lst1);
	ft_lstadd_back(&lst1, lst3);
	printf("list size: %d\n", ft_lstsize(lst1));
	print_lst(lst1);
	printf("\n");
	
	print_lst(ft_lstlast(NULL));
	printf("\n");

	print_lst(lst1);
	printf("\n");

// check for NULL node
//	ft_lstadd_back(&lst1, NULL);
//	print_lst(lst1);
//	printf("\n");
//
	t_list *tmp = lst1->next;
	ft_lstdelone(lst1, del);
	lst1 = tmp;
	print_lst(lst1);
	printf("\n");

//	ft_lstiter(lst1, change_content);
//	print_lst(lst1);
	t_list *newlst = ft_lstmap(lst1, memset_content, del);
	if (!newlst)
		printf("newlst is NULL\n");
	else print_lst(newlst);
	printf("\n");

	ft_lstclear(NULL, del);

	ft_lstclear(&lst1, del);
	if (lst1 == NULL)
		printf("List is NULL\n");
	else
		printf("List not NULL\n");
	printf("\n");
}
