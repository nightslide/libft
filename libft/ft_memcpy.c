#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	byte	*dst_byte_ptr;
	byte	*src_byte_ptr;
	size_t	i;

// FIXME: check equality
	if (src == dst)
		return (dst);
	dst_byte_ptr = (byte*)dst;
	src_byte_ptr = (byte*)src;
	i = -1;
	while (++i < n)
		dst_byte_ptr[i] = src_byte_ptr[i];
	return (dst);
}
