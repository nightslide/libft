#include "libft.h"
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		len1;
	int		len2;
	int		i;

	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	res = ft_strnew(len1 + len2);
	if (res == NULL)
		return (NULL);
	i = -1;
	while (i < len1)
		res[i] = s1[i];
	while (i < (len1 + len2))
		res[i + len1] = s2[i];
	return (res);
}
