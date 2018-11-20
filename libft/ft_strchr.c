#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	value;
	int		i;

	value = (char)c;
	i = 0;
	while (1)
	{
		if (s[i] == value)
			return ((char*)s + i);
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (NULL);
}
