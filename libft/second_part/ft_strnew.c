#include <stdlib.h>
#include <string.h>

char	*ft_strnew(size_t size)
{
	char	*s;
	size_t	i;

	s = (char*)malloc(sizeof(char) * (size + 1));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < size)
		s[i++] = '\0';
	s[size] = '\0';
	return (s);
}
