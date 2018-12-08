#include "libft.h"
#include <string.h>
#include <stdlib.h>

static int	get_word_count(char *s, char c)
{
	char	*tmp;
	int		k;

	k = 0;
	while (*s)
	{
		while ((*s == c) && *s)
			s++;
		tmp = s;
		while ((*tmp != c) && *tmp)
			tmp++;
		if (tmp != s)
			k++;
		s = tmp;
	}
	return (k);
}

static void	free_res(char **res)
{
	int i;

	i = 0;
	while (res[i])
		free(res[i++]);
	free(res);
}

static char	**store_words(char *s, char c, char **res, int len)
{
	char	*tmp;
	int		k;

	if (len == 0)
		return (res);
	k = 0;
	while (*s)
	{
		while ((*s == c) && *s)
			s++;
		tmp = s;
		while ((*tmp != c) && *tmp)
			tmp++;
		if (tmp != s)
		{
			if ((res[k] = ft_strsub(s, 0, tmp - s)) == NULL)
				return (NULL);
			k++;
		}
		s = tmp;
	}
	return (res);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		len;
	int		i;

	len = (s == NULL) ? (1) : (get_word_count((char*)s, c) + 1);
	if ((res = (char**)malloc(sizeof(char*) * len)) == NULL)
		return (NULL);
	res[len - 1] = NULL;
	i = 0;
	if (store_words((char*)s, c, res, len - 1) == NULL)
	{
		free_res(res);
		return (NULL);
	}
	return (res);
}
