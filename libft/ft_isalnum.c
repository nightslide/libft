#include "libft.h"

int		ft_isalnum(int c)
{
	byte	value;

	value = (byte)c;
	if (((value >= '0') && (value <= '9')) || ((value >= 'A') && (value <= 'z')))
		return (1);
	return (0);
}
