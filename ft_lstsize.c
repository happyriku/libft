#include "libft.h"

void	ft_lstsize(t_list *lst)
{
	int size;

    if (!lst)
        return (NULL);
	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

int main(void)
{
	t_list *lst;
	
}