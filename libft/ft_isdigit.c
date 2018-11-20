#include "libft.h"

int		ft_isdigit(int c)
{
	byte	value;

	value = (byte)c;
	if ((value >= '0') && (value <= '9'))
		return (1);
	return (0);
}
