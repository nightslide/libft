#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list **next;

	while ((alst != NULL) && (*alst != NULL))
	{
		next = &((*alst)->next);
		ft_lstdelone(alst, del);
		alst = next;
	}
	alst = NULL;
}
