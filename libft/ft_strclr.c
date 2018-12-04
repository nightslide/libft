#include <string.h>

void	ft_strclr(char *s)
{
	int		i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i])
		s[i++] = '\0';
}
