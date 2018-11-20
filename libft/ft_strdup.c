#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		len;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	len = i;
	s2 = (char*)malloc(sizeof(char) * (len + 1));
	if (s2 == NULL)
		return (NULL);
	i = -1;
	while (++i < len)
		s2[i] = s1[i];
	s2[i] = '\0';
	return (s2);
}
