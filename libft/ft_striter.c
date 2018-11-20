#include <string.h>

void	ft_striter(char *s, void (*f)(char *))
{
	int		i;

	if ((s == NULL) || (f == NULL))
		return ;
	i = 0;
	while (s[i])
		f(&s[i++]);
}
