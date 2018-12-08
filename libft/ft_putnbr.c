#include "libft.h"
#include <string.h>
#include <unistd.h>

void	ft_putnbr(int n)
{
	char	*s;
	size_t	len;

	if ((s = ft_itoa(n)) == NULL)
		return ;
	len = ft_strlen(s);
	write(1, s, len);
	ft_strdel(&s);
}
