#include "libft.h"
#include <unistd.h>

void	ft_putstr(char const *s)
{
	size_t	len;
	if (s == NULL)
		return ;
	len = ft_strlen(s);
	write(1, s, len);
}
