#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	**res;
	t_list	*tmp;
	t_list	*new;

	*res = NULL;
	while (lst != NULL)
	{
		if ((tmp = f(lst)) != NULL)
		{
			if ((new = ft_lstnew(tmp->content, tmp->content_size)) == NULL)
				return (NULL);
			ft_lstadd(res, new);
		}
		lst = lst->next;
	}
	return (*res);
}