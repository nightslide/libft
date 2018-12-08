#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*res;

	if ((res = (t_list*)malloc(sizeof(t_list) * 1)) == NULL)
		return (NULL);
	if (content == NULL)
	{
		res->content_size = 0;
		res->content = NULL;
	}
	else
	{
		res->content_size = content_size;
		if ((res->content = malloc(content_size)) == NULL)
		{
			free(res);
			return (NULL);
		}
		ft_memcpy(res->content, content, content_size);
	}
	res->next = NULL;
	return (res);
}
