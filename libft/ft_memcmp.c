#include "libft.h"
#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	byte	*s1_byte_ptr;
	byte	*s2_byte_ptr;
	size_t	i;

	s1_byte_ptr = (byte*)s1;
	s2_byte_ptr = (byte*)s2;
	i = -1;
	if (n == 0)
		return (0);
	while ((++i < n) && (s1_byte_ptr[i] == s2_byte_ptr[i]));
	return (s1_byte_ptr[i] - s2_byte_ptr[i]);
}
