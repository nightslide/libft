#include "libft.h"
#include <string.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	size_t	len;
	size_t	i;

	if ((s == NULL) || (f == NULL))
		return (NULL);
	len = ft_strlen(s);
	res = ft_strnew(len);
	if (res == NULL)
		return (NULL);
	i = -1;
	while (++i < len)
		res[i] = f(s[i]);
	return (res);
}
