#include "libft.h"
#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	res = ft_strnew(len);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < len)
		res[i] = s[start + i];
	return (res);
}
