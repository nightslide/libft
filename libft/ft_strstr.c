#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;

	if (*needle == '\0')
		return ((char*)haystack);
	i = 0;
	while (haystack[i])
	{
		j = 0;
		while ((haystack[i] == needle[j]) && (haystack[i]) && (needle[j]))
		{
			j++;
			i++;
		}
		if (needle[j] == '\0')
			return ((char*)haystack + i - j);
		i = i - j + 1;
	}
	return (NULL);
}
