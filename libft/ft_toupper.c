#include "libft.h"

int		ft_toupper(int c)
{
	byte	value;

	value = (byte)c;
	if ((value >= 'a') && (value <= 'z'))
		return (value - ('a' - 'A'));
	return (value);
}
