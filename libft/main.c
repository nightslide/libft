#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	int i;
	if (ac != 3)
		return (0);
	char **s = ft_strsplit(av[1], *av[2]);
	for (i = 0; *s[i]; i++)
	{
		printf("%s\n", s[i]);
		free(s[i]);
	}
	free(s[i]);
	free(s);
	return (0);
}
