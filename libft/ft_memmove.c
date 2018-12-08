#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	byte	*dst_b;
	byte	*src_b;
	size_t	i;

	if ((src == dst) || (len == 0))
		return (dst);
	dst_b = (byte*)dst;
	src_b = (byte*)src;
	if (((dst_b - src_b) <= (long)len) && ((dst_b - src_b) > 0))
	{
		i = len;
		while (--i > 0)
			dst_b[i] = src_b[i];
		dst_b[i] = src_b[i];
	}
	else
	{
		i = -1;
		while (++i < len)
			dst_b[i] = src_b[i];
	}
	return (dst);
}
