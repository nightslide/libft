#include "libft.h"
#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	byte	*byte_ptr;
	size_t	i;

	byte_ptr = (byte*)malloc(sizeof(byte) * size);
	if (byte_ptr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
		byte_ptr[i++] = 0;
	return ((void*)byte_ptr);
}
