#include "libft.h"
#include <string.h>

static int	is_whitespace(char c)
{
	if ((c == ' ') || (c == '\n') || (c == '\t'))
		return (1);
	else
		return (0);
}

char		*ft_strtrim(char const *s)
{
	char	*res;
	int		i;
	int		j;
	int		len;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (is_whitespace(s[i]) && s[i])
		i++;
	j = ft_strlen(s) - 1;
	while (is_whitespace(s[i]) && (j > i))
		j--;
	len = j - i + 1;
	res = ft_strnew(len);
	if (res == NULL)
		return (NULL);
	ft_strncpy(res, s + i, len);
	return (res);
}
