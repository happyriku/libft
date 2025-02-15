#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return (NULL);
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}