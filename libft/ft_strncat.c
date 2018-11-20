#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	s1_len;

	i = 0;
	while (s1[i])
		i++;
	s1_len = i;
	i = -1;
	while (s2[++i] && (i < n))
		s1[i + s1_len] = s2[i];
	s1[i + s1_len] = '\0';
	return (s1);
}
