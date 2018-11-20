#include "libft.h"
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	byte		*byte_ptr;
	size_t		i;

	byte_ptr = (byte*)s;
	i = 0;
	while (i < n)
		byte_ptr[i++] = 0;
}
