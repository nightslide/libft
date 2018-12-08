#include "libft.h"
#include <string.h>
#include <unistd.h>

static char *ft_reverse(char *acc)
{
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
	return (acc);
}

static char	*put_nbr_itoa(char* acc, int n)
{
	long int ln;
	int sign;
	int i;

	ln = n;
	sign = 0;
	// ln = (ln < 0) ? (-(long)n) : (n);
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
	ft_reverse(acc);
	return (acc);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	s[12];
	size_t	len;

	put_nbr_itoa(s, n);
	len = ft_strlen(s);
	write(fd, s, len);
}
