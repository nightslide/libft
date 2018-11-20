#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char*)haystack);
	i = 0;
	while (haystack[i])
	{
		j = 0;
		while ((haystack[i] == needle[j]) && (haystack[i])
				&& (needle[j]) && (i < len))
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
