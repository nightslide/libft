#include "libft.h"
#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*res;

	if (s == NULL)
		return (NULL);
	if ((res = ft_strnew(len)) == NULL)
		return (NULL);
	ft_strncpy(res, s + start, len);
	return (res);
}
