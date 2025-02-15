#include "libft.h"

void    ft_lstclear(t_list **lst, void(*del)(void *))
{
    t_list *tmp;

    if (!lst)
        return ;
    while (*lst)
    {
        (*del)((*lst)->content);
        tmp = (*lst)->next;
        free(*lst);
        *lst = tmp;
    }
    lst = NULL;
}

// void del(void *content)
// {
//     free(content);
// }

// int main(void)
// {
//     t_list *node1 = malloc(sizeof(t_list));
//     t_list *node2 = malloc(sizeof(t_list));
//     t_list *node3 = malloc(sizeof(t_list));

//     int *content1 = malloc(sizeof(int));
//     int *content2 = malloc(sizeof(int));
//     int *content3 = malloc(sizeof(int));

//     *content1 = 1;
//     *content2 = 2;
//     *content3 = 3;

//     node1->content = content1;
//     node1->next = node2;

//     node2->content = content2;
//     node2->next = node3;

//     node3->content = content3;
//     node3->next = NULL;

//     ft_lstclear(&node1, del);

//     return 0;
// }
