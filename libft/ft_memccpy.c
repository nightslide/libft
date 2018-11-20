#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	byte	*dst_byte_ptr;
	byte	*src_byte_ptr;
	byte	byte_value;
	size_t	i;

	dst_byte_ptr = (byte*)dst;
	src_byte_ptr = (byte*)src;
	byte_value = (byte)c;
	i = -1;
	while (++i < n)
	{
		dst_byte_ptr[i] = src_byte_ptr[i];
		if (src_byte_ptr[i] == byte_value)
			return (dst + i + 1);
	}
	return (NULL);
}
