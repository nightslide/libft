#include <string.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int		i;

	if ((s == NULL) || (f == NULL))
		return ;
	i = -1;
	while (s[++i])
		f(i, &s[i]);
}
