#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	byte	*dst_byte_ptr;
	byte	*src_byte_ptr;
	byte	swap_byte;
	size_t	i;

	if (src == dst)
		return (dst);
	dst_byte_ptr = (byte*)dst;
	src_byte_ptr = (byte*)src;
	i = -1;
	while (++i < len)
	{
		if ((dst_byte_ptr + i) == (src_byte_ptr + i))
		{
			swap_byte = src_byte_ptr[i];
			dst_byte_ptr[i] = swap_byte;
		}
		else
			dst_byte_ptr[i] = src_byte_ptr[i];
	}
	return (dst);
}
