#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t		i;

	i = -1;
	while (src[++i] && (i < len))
		dst[i] = src[i];
	if (i != (len - 1))
		while (i < len)
			dst[i++] = '\0';
	return (dst);
}
