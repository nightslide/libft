#include "libft.h"
#include <string.h>
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;
	size_t	len;

	if ((s = ft_itoa(n)) == NULL)
		return ;
	len = ft_strlen(s);
	write(fd, s, len);
	ft_strdel(&s);
}
