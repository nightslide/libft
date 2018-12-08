#include "libft.h"
#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	byte	*s1_b;
	byte	*s2_b;
	size_t	i;

	s1_b = (byte*)s1;
	s2_b = (byte*)s2;
	if (n == 0)
		return (0);
	i = 0;
	while ((i < n) && (s1_b[i] == s2_b[i]))
		i++;
	if (i == n)
		return (0);
	return (s1_b[i] - s2_b[i]);
}
