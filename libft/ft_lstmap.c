#include "libft.h"
#include <stdlib.h>

static void	ft_del_func(void *p, size_t size)
{
	(void)size;
	free(p);
}

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*h;
	t_list	*new;
	t_list	*t;

	h = NULL;
	while (lst != NULL)
	{
		if ((new = f(lst)) == NULL)
		{
			lst = lst->next;
			continue ;
		}
		if ((new = ft_lstnew(new->content, new->content_size)) == NULL)
		{
			ft_lstdel(&h, &ft_del_func);
			return (NULL);
		}
		(h == NULL) ? (h = new, t = new) : (t->next = new, t = t->next);
		lst = lst->next;
	}
	return (h);
}
