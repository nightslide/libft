#include "libft.h"

int		ft_tolower(int c)
{
	byte	value;

	value = (byte)c;
	if ((value >= 'A') && (value <= 'Z'))
		return (value + ('a' - 'A'));
	return (value);
}
