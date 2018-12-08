#include "libft.h"
#include <stdlib.h>

static char *ft_reverse(char* acc)
{
	char	*res;
	char	swap;
	int		i;
	int		len;

	len = ft_strlen(acc);
	i = 0;
	while (i < (len - i))
	{
		swap = acc[i];
		acc[i] = acc[len - i - 1];
		acc[len - i - 1] = swap;
		i++;
	}
	res = ft_strdup(acc);
	return (res);
}

char	*ft_itoa(int n)
{
	long int ln;
	int sign;
	int i;
	char acc[12];

	ln = n;
	sign = 0;
	if (ln < 0)
		sign = 1;
	if (sign == 1)
		ln = -ln;
	i = 0;
	while (i < 12)
		acc[i++] = '\0';
	while (1)
	{
		acc[12 - i--] = ln % 10 + '0';
		if ((ln /= 10) == 0)
			break;
	}
	if (sign == 1)
		acc[12 - i] = '-';
	return (ft_reverse(acc));
}
