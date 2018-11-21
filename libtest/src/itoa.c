#include "limits.h"
#include <stdio.h>
#include <stdlib.h>


int	ft_strlen(const char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		len;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	len = i;
	s2 = (char*)malloc(sizeof(char) * (len + 1));
	if (s2 == NULL)
		return (NULL);
	i = -1;
	while (++i < len)
		s2[i] = s1[i];
	s2[i] = '\0';
	return (s2);
}

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
