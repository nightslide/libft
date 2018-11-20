#include <string.h>
#include <libft.h>
#include <stdlib.h>

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	res;
	char	word;
	int		word_count;

	// FIXME: should return '\0' array
	if ((s == NULL) || (*s == NULL))
		return (NULL);
	word_count = get_word_count(s, c);
	while (s[i])
	{
		j = get_word_end(s + i, c);
		word = get_word(s + i, i, j);
		if (word == NULL)
		{
			free_array(res);
			return (NULL);
		}
		
		
		i = j;
	}
}

static int	get_word_end(char const *s, char c)
{
	int		i;
	int		j;

	i = 0;
	while ((s[i] == c) && (s[j]))
		i++;
	j = i;
	while ((s[j] != c) && (s[j]))
		j++;
	return (j);
}

static char	*get_word(char const *s, int i, int j)
{
	char	*res;

	res = ft_strnew(i - j);
	if (res == NULL)
		return (NULL);
	res = ft_strncpy(res, s, i - j);
	return (res);
}

static int	get_word_count(char const *s, char c)
{
	int		k;
	int		i;
	int		j;

	k = 0;
	j = 0;
	while (1)
	{
		i = j;
		j = get_word_end(s + i, c);
		if (i == j)
			break ;
		k++;
	}
	return (k);
}

static void	free_array(char **ar)
{
	int		i;

	i = 0;
	while (*ar[i])
		free(ar[i++]);
	free(ar[i]);
	free(ar);
}
