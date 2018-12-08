#include "libft.h"
#include <unistd.h>

void ft_putendl_fd(char const *s, int fd)
{
	size_t	len;

	if (s == NULL)
		return ;
	len = ft_strlen(s);
	write(fd, s, len);
	write(fd, "\n", 1);
}
