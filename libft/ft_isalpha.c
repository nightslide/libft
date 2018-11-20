#include "libft.h"

int		ft_isalpha(int c)
{
	byte	value;

	value = (byte)c;
	if ((value >= 'A') && (value <= 'z'))
		return (1);
	return (0);
}
