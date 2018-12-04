#include <string.h>
#include "libft.h"
#include <stdlib.h>

static void		free_array(char **a, int k)
{
	int		i;

	if (a == NULL)
		return ;
	i = 0;
	while (i < k)
		free(a[i++]);
	if (k > 0)
		free(a);
}

static char		*ft_strtrim_by_del(char *s, char del)
{
	int		i;
	int		j;

	if (ft_strlen(s) == 0)
		return (s);
	i = 0;
	while ((s[i] == del) && s[i])
		i++;
	j = ft_strlen(s) - 1;
	while ((s[j] == del) && (j > i))
		j--;
	s = s + i;
	s[j - i + 1] = '\0';
	return (s);
}

static char		**realloc_array(char **a, int old_len, int new_len)
{
	char	**tmp;
	int		i;

	if ((tmp = (char**)malloc(new_len * sizeof(char*))) == NULL)
	{
		free_array(a, old_len);
		return (NULL);
	}
	i = -1;
	while (++i < old_len)
		tmp[i] = a[i];
	if (old_len > 0)
		free(a);
	return (tmp);
}

static char		*get_new_word(char **a, int k, char *trimmed, char c)
{
	char	*del_pos;
	size_t	len;
	size_t	trim_len;

	trim_len = ft_strlen(trimmed);
	if ((del_pos = strchr(trimmed, c)) == NULL)
		len = trim_len;
	else
		len = del_pos - trimmed;
	if ((a[k] = ft_strnew(len)) == NULL)
		return (NULL);
	a[k] = ft_strncpy(a[k], trimmed, len);
	if (trim_len == 0)
		return (a[0]);
	return (trimmed + len);
}

char		**ft_strsplit(char const *s, char c)
{
	char	*trim;
	int		k;
	char	**a;
	char	*cpy;

	if (s == NULL)
		cpy = ft_strnew(0);
	else
		cpy = ft_strdup(s);
	if ((trim = cpy) == NULL)
		return (NULL);
	k = 0;
	while (++k && (a = realloc_array(a, k - 1, k)) && (trim != *a))
	{
		trim = ft_strtrim_by_del(trim, c);
		if ((trim = get_new_word(a, k - 1, trim, c)) == NULL)
			break ;
	}
	free(cpy);
	if ((a == NULL) || (trim == NULL))
	{
		free_array(a, k);
		return (NULL);
	}
	return (&a[0]);
}
