#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	byte	*src_byte_ptr;
	byte	value;
	size_t	i;

	src_byte_ptr = (byte*)s;
	value = (byte)c;
	i = -1;
	while (++i < n)
		if (src_byte_ptr[i] == value)
			return ((void*)(src_byte_ptr + i));
	return (NULL);
}
