#include <string.h>

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		s1_len;

	i = 0;
	while (s1[i])
		i++;
	s1_len = i;
	i = -1;
	while (s2[++i])
		s1[i + s1_len] = s2[i];
	s1[i + s1_len] = '\0';
	return (s1);
}
