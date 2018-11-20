#include "libft.h"

int		ft_isprint(int c)
{
	byte	value;

	value = (byte)c;
	if ((value >= ' ') && (value <= '~'))
		return (1);
	return (0);
}
